#include"Header.h"
int main() 
{
        setlocale(LC_CTYPE, "Russian");
        int c = 0;
        int  i = menu();                        //Функция меню 
                                                //При выводе 0 программа перестает работать
                                                //При выводе 1-4 выполняется операция
        while (i != 0)      
        {
                struct complex x, y;                //Первое и второе число
                scan_numbers(&x, &y, c);              //Считывает числа для вычислений
                if (i < 3)
                        if (i == 1)
                        {
                                x.a += y.a;                 //Сложение
                                x.b += y.b;
                        }
                        else
                        {
                                x.a -= y.a;                 //Вычитание
                                x.b -= y.b;
                        }
                else
                {
                        struct complex d;               // d комплексное число заменяющее x, чтобы спокойно менять части x
                        d.a = x.a;                    
                        d.b = x.b;
                                if (i == 3)
                                {
                                        x.a = d.a*d.a - y.b*y.b;//Умнажение 
                                        x.b = d.a*y.b + d.b*y.a;
                                }
                                else
                                {                           //Деление
                                        x.a = (d.a*y.a + d.b*y.b) / (y.a*y.a - y.b*y.b);
                                        x.b = (d.b*y.a - d.a*y.b) / (y.a*y.a - y.b*y.b);
                                }
                }
                if (x.b < 0)
                        printf("Ответ %d - i%d\n", x.a, abs(x.b)); //Вывод ответа с отр. мнимой частью
                else
                        printf("Ответ %d + i%d\n", x.a, x.b);      //Вывод ответа с полож. мнимой частью
                c++;
                i = menu();   
        }
        return 0;
}
