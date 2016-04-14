// masiv.cpp: определ€ет точку входа дл€ консольного приложени€.
//¬ двумерном массиве произвольных чисел размером (N,M), 
// переставить строки так, чтобы суммы их элементов возрастали.

#include <iostream>

void perel (array[x][b])
{
    
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	const int N = 5; // строки которых нужно переставл€ть  5 - тестовое значение
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
	// пузырьковый алгоритм

	for (int w = 0; w < N-1; w++) {
		for (int x = 0; x < N-w-1; x++) {
			if (array[x][0] < array[x+1][0]) // если сумма передней строки больше
			{    
				//переставл€ем элементы
				for (int b = 0; b < M; b++)
				{
					int tmp = array[x][b]; 
					array[x][b] = array[x + 1][b];
					array[x + 1][b] = tmp;
				} //for b
			} //if
			else 
            if (array[x][0] == array[x+1][0]) // если сумма передней строки больше
			{   
                 if (array[x][1] < array[x+1][1]) //  
		    {     
				//переставл€ем элементы
				for (int b = 0; b < M; b++)
				{
					int tmp = array[x][b]; 
					array[x][b] = array[x + 1][b];
					array[x + 1][b] = tmp;
				} //for b
			} //if
        }
			else
			if (array[x][1] == array[x+1][1]) // если сумма передней строки больше
			{ 
                  if (array[x][2] < array[x+1][2]) //  
		     {       
				//переставл€ем элементы
				for (int b = 0; b < M; b++)
				{
					int tmp = array[x][b]; 
					array[x][b] = array[x + 1][b];
					array[x + 1][b] = tmp;
				} //for b
			} //if
		} // x
    }
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
	system("pause");
	return 0;
}
