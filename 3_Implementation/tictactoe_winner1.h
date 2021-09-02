#define COMPUTER 1
void declareWinner1(int whoseTurn)
{
    if (whoseTurn == COMPUTER)
        printf("COMPUTER has won\n");
    else
        printf("PERSON_1 has won\n");
    return;
}