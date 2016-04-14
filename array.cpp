// masiv.cpp: определяет точку входа для консольного приложения.
//В двумерном массиве произвольных чисел размером (N,M), 
// переставить строки так, чтобы суммы их элементов возрастали.

#include <iostream>
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	const int N = 5; // строки которых нужно переставлять  5 - тестовое значение
	const int M = 3; // элементы которых нужно суммировать 3 - тестовое значение
	//задаим массив
	int array[N][M];
	//заполним случайными числами
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			array[i][j] = 1 + rand() % 10; // случайные цисла в диапозоне от 1 до 10
			std::cout << array[i][j] << ","; // контрольный вывод массива
		} // for j
		std::cout << std::endl;
	}// for i

	// теперь работаем с этим массивом
	int sumelement[N]; // для хранения суммы элементов
	int d = 0;
    std::cout << "Суммы элементов в строках" << std::endl;
	for (int k = 0; k < N; k++)   // строки
	{
		sumelement[k] = 0;
		for (int m = 0; m < M; m++)  // стольбцы
		{
			sumelement[d] += array[k][m];
		};
		std::cout << sumelement[d] << std::endl;
		d++;
	}
	// пузырьковый алгоритм

	for (int w = 0; w < N-1; w++) {
		for (int x = 0; x < N-w-1; x++) {
			if (sumelement[x] > sumelement[x+1]) // если сумма передней строки больше
			{    
				int tmpsum = sumelement[x]; //переставляем суммы элементов
				sumelement[x] = sumelement[x + 1];
				sumelement[x + 1] = tmpsum;
				//переставляем элементы
				for (int b = 0; b < M; b++)
				{
					int tmp = array[x][b]; 
					array[x][b] = array[x + 1][b];
					array[x + 1][b] = tmp;
				} //for b
			} //if
		} // x
	}// w
	
	// результат
	std::cout << "результат"<<std::endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			std::cout << array[i][j] << ","; // вывод массива
		} // for j
		std::cout << std::endl;
	}// for i
	// выведем и 
	d = 0;
	std::cout << "Суммы элементов в строках в итоговом массиве" << std::endl;
	for (int k = 0; k < N; k++)   // строки
	{
		sumelement[k] = 0;
		for (int m = 0; m < M; m++)  // стольбцы
		{
			sumelement[d] += array[k][m];
		};
		std::cout << sumelement[d] << std::endl;
		d++;
	}
	system("pause");
	return 0;
}
