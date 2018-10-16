#include"Header.h"
void calculation(struct complex *x, struct complex *y, int *i)
{
        if (*i < 3)
                if (*i == 1)
                {
                        x->a += y->a;                 //Сложение
                        x->b += y->b;
                }
                else
                {
                        x->a -= y->a;                 //Вычитание
                        x->b -= y->b;
                }
        else
        {
                struct complex d;               // d комплексное число заменяющее x, чтобы спокойно менять части x
                d.a = x->a;
                d.b = x->b;
                if (*i == 3)
                {
                        x->a = d.a*d.a - y->b*y->b;//Умнажение 
                        x->b = d.a*y->b + d.b*y->a;
                }
                else
                {                           //Деление
                        int del = (y->a*y->a - y->b*y->b);
                        if (del != 0)
                        {
                                x->a = (d.a*y->a + d.b*y->b) / del;
                                x->b = (d.b*y->a - d.a*y->b) / del;
                        }
                        else
                                *i = 0;
                }
        }
}
