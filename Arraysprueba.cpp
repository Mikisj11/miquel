#include <iostream> //libreria/biblioteca estandard necesaria para empezar
int main(int argc, char const *argv[])
{

    int i9, a9 = 0, b9 = 0;
    int taula9[10], taula92[10];
    srand((unsigned)time(NULL));
    for (i9 = 0; i9 < 10; ++i9)
    {
        taula9[i9] = (rand() % 100);
        taula92[i9] = (rand() % 100);
    }
    printf("1r array: (%d, %d, %d, %d, %d, %d,%d, %d, %d, %d)", taula9[0], taula9[1], taula9[2], taula9[3], taula9[4], taula9[5], taula9[6], taula9[7], taula9[8], taula9[9]);
    printf(" i 2n aray: (%d, %d, %d, %d, %d, %d,%d, %d, %d, %d)\n", taula92[0], taula92[1], taula92[2], taula92[3], taula92[4], taula92[5], taula92[6], taula92[7], taula92[8], taula92[9]);
    for (i9 = 0; i9 < 10; ++i9)
    {
        b9=0;
        do{
        if(taula9[i9] == taula92[b9]){
            printf("%d esta present en els dos arrays\n", taula9[i9]);
        }
        b9++;
        }while (b9 < 10);
        
    }
    system("PAUSE");
    return 0;
}
