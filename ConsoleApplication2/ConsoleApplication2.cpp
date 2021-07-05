/**
* @file Practice1.cpp
* @author Солянко Д.Б.
* @date 21 червня 2021
* Індивідуальне заняття.
* Завдання 11
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <math.h>

//инициализация переменных
char dest[51];
void shuffle(char* arr, int N);


int main() {
	//добавление русского языка
	setlocale(LC_ALL, "Rus");
	//запрос слова
	printf("Введите слово ");
	fgets(dest, 50, stdin);
	//цикл проверки на ввод стороних символов
	for (int i = 0; i < strlen(dest) - 1; i++) {
		//условие ввода стороних символов
		if (isalpha(dest[i]));
		else { printf("Error"); exit(0); }
	}
	//фунция перемешивания массива
	shuffle(dest, strlen(dest) - 1);
	printf("\n");
	//вывод перемешаного массива
	printf("%s", dest);
	printf("\n");
	system("pause");
	return 0;
}

/* Функция перемешивания массива */
/*
* @param *arr - указатель на входной масив
* @param N - длина массива
* Функция ничего не возвращает
*/
void shuffle(char* arr, int N)
{
	srand(time(NULL));
	//цикл перемешивания
	for (int i = N - 1; i >= 1; i--)
	{
		//создание рандомной переменной
		int j = rand() % (i + 1);

		//перемешивание массива
		char tmp = arr[j];
		arr[j] = arr[i];
		arr[i] = tmp;
	}
}