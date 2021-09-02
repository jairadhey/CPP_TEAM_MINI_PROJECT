#define PERSON_2 1
void declareWinner2(int whoseTurn)
{
    if (whoseTurn == PERSON_2)
        printf("PERSON_2 has won\n");
    else
        printf("PERSON_1 has won\n");
    return;
}