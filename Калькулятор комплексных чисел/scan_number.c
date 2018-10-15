#include"Header.h"
void scan_numbers(struct complex *x,struct complex *y, int c)
{
        int i = 0;
        if (c != 0)
        {
                printf("Èñïîëüçîâàòü ïîëó÷åííîå çíà÷åíèå?\n1.Äà\n2.Íåò\n");
                scanf("\n%c", &i);
        }
        if (i == 0)
        {
                printf("Ââåäèòå âåùåñòâåííóþ ÷àñòü ïåðâîãî ÷èñëà\n");
                scanf("%d", &x->a);
                printf("Ââåäèòå ìíèìóþ ÷àñòü ïåðâîãî ÷èñëà\n");
                scanf("%d", &x->b);
        }
        printf("Ââåäèòå âåùåñòâåííóþ ÷àñòü âòîðîãî ÷èñëà\n");
        scanf("%d", &y->a);
        printf("Ââåäèòå ìíèìóþ ÷àñòü âòîðîãî ÷èñëà\n");
        scanf("%d", &y->b);
}
