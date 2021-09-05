//Randomization+Game Theory 
#include<bits/stdc++.h>
#include "tictactoe_instruction.h"
#include "tictactoe_winner1.h"
#include "tictactoe_winner2.h"
using namespace std;
#define COMPUTER 1
#define PERSON_1 2
#define PERSON_2 1
#define SIDE 3
#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'
void showBoard(vector<vector<char>>& board)
{
    printf("\n\n");
    printf("\t\t\t %c | %c | %c \n", board[0][0],board[0][1], board[0][2]);
    printf("\t\t\t--------------\n");
    printf("\t\t\t %c | %c | %c \n", board[1][0],board[1][1], board[1][2]);
    printf("\t\t\t--------------\n");
    printf("\t\t\t %c | %c | %c \n\n", board[2][0],board[2][1], board[2][2]);
    return;
}
void initialise(vector<vector<char>>& board,vector<int>& moves)
{
    srand(time(NULL));
    for (int i=0; i<SIDE; i++)
    {
        for (int j=0; j<SIDE; j++)
            board[i][j] = ' ';
    }
    for (int i=0; i<SIDE*SIDE; i++)
        moves[i] = i;
    random_shuffle(moves.begin(), moves.end());
    return;
}
bool rowCrossed(vector<vector<char>>& board)
{
    for (int i=0; i<SIDE; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return (true);
    }
    return(false);
}
bool columnCrossed(vector<vector<char>>& board)
{
    for (int i=0; i<SIDE; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return (true);
    }
    return(false);
}
bool diagonalCrossed(vector<vector<char>>& board)
{
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return(true);
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return(true);
    return(false);
}
bool gameOver(vector<vector<char>>& board)
{
    return(rowCrossed(board) || columnCrossed(board) || diagonalCrossed(board) );
}
void playTicTacToe_computer(int whoseTurn)
{
    vector<vector<char>> board(SIDE,vector<char>(SIDE));
    vector<int> moves(SIDE*SIDE);
    initialise(board, moves);
    showInstructions();
    int moveIndex = 0, x, y;
    while (gameOver(board) == false && moveIndex != SIDE*SIDE)
    {
        if (whoseTurn == COMPUTER)
        {
            x = moves[moveIndex] / SIDE;
            y = moves[moveIndex] % SIDE;
            board[x][y] = COMPUTERMOVE;
            printf("COMPUTER has put a %c in cell %d\n",COMPUTERMOVE, moves[moveIndex]+1);
            showBoard(board);
            moveIndex ++;
            whoseTurn = PERSON_1;
        }
        else if (whoseTurn == PERSON_1)
        {
            x = moves[moveIndex] / SIDE;
            y = moves[moveIndex] % SIDE;
            board[x][y] = HUMANMOVE;
            printf ("PERSON_1 has put a %c in cell %d\n",HUMANMOVE, moves[moveIndex]+1);
            showBoard(board);
            moveIndex ++;
            whoseTurn = COMPUTER;
        }
    }
    if (gameOver(board) == false && moveIndex == SIDE * SIDE)
        printf("It's a draw\n");
    else
    {
        if (whoseTurn == COMPUTER)
            whoseTurn = PERSON_1;
        else if (whoseTurn == PERSON_1)
            whoseTurn = COMPUTER;
        declareWinner1(whoseTurn);
    }
    return;
}
void playTicTacToe_human(int whoseTurn)
{
    vector<vector<char>> board(SIDE,vector<char>(SIDE));
    vector<int> moves(SIDE*SIDE);
    initialise(board, moves);
    showInstructions();
    int moveIndex = 0, x, y;
    while (gameOver(board) == false && moveIndex != SIDE*SIDE)
    {
        if (whoseTurn == PERSON_2)
        {
            x = moves[moveIndex] / SIDE;
            y = moves[moveIndex] % SIDE;
            board[x][y] = 'O';
            printf("PERSON_2 has put a %c in cell %d\n",'O', moves[moveIndex]+1);
            showBoard(board);
            moveIndex ++;
            whoseTurn = PERSON_1;
        }
        else if (whoseTurn == PERSON_1)
        {
            x = moves[moveIndex] / SIDE;
            y = moves[moveIndex] % SIDE;
            board[x][y] = HUMANMOVE;
            printf ("PERSON_1 has put a %c in cell %d\n",HUMANMOVE, moves[moveIndex]+1);
            showBoard(board);
            moveIndex ++;
            whoseTurn = PERSON_2;
        }
    }
    if (gameOver(board) == false && moveIndex == SIDE * SIDE)
        printf("It's a draw\n");
    else
    {
        if (whoseTurn == PERSON_2)
            whoseTurn = PERSON_1;
        else if (whoseTurn == PERSON_1)
            whoseTurn = PERSON_2;
        declareWinner2(whoseTurn);
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p=1,t=1;
    //cin>>t;
    while(t--)
    {
        srand(time(0));
        if(rand()%2==1)
        playTicTacToe_computer(COMPUTER);
        else
        playTicTacToe_human(PERSON_2);
    }
    return 0;
}
