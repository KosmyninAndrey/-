#include"Header.h"
int  menu()
{
        printf("Âûáèðèòå äåéñòâèå.\n");
        printf("1.Ñëîæåíèå\n");
        printf("2.Âû÷èòàíèå\n");
        printf("3.Óìíîæåíèå\n");
        printf("4.Äåëåíèå\n");
        char c;
        scanf("\n%c", &c);
        if (c < 49 || c >52)
                return 0;
        else
                return c-'0';

}