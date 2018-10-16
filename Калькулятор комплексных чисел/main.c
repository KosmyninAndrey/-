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
                calculation(&x, &y, &i);
                if (i == 0)
                {
                        printf("Ошибка. Деление на ноль\n");
                        c = -1;
                }
                else
                        if (x.b < 0)
                                printf("Ответ %d - i%d\n", x.a, abs(x.b)); //Вывод ответа с отр. мнимой частью
                        else
                                printf("Ответ %d + i%d\n", x.a, x.b);      //Вывод ответа с полож. мнимой частью
                c++;
                i = menu();   
        }
        return 0;
}
