#include<stdio.h>
void main()
{
	const int n = 6;
	int matr[6][6], k = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) 
			matr[i][j] = k++;                 //Создание матрицы
	for (int j = 0; j < n; j += 2)
		for (int i = 0; i < n; i++)
		{
			k = matr[i][j];                   //Перестановка столбцов
			matr[i][j] = matr[i][j+1];
			matr[i][j+1] = k;
		}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)               //Вывод матрицы
			printf("%4d", matr[i][j]);
		printf("\n");
	}
}