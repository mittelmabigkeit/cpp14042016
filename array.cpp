// masiv.cpp: ���������� ����� ����� ��� ����������� ����������.
//� ��������� ������� ������������ ����� �������� (N,M), 
// ����������� ������ ���, ����� ����� �� ��������� ����������.

#include <iostream>

void perel (array[x][b])
{
    
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	const int N = 5; // ������ ������� ����� ������������  5 - �������� ��������
	const int M = 3; // �������� ������� ����� ����������� 3 - �������� ��������
	//������ ������
	int array[N][M];
	//�������� ���������� �������
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			array[i][j] = 1 + rand() % 10; // ��������� ����� � ��������� �� 1 �� 10
			std::cout << array[i][j] << ","; // ����������� ����� �������
		} // for j
		std::cout << std::endl;
	}// for i

	// ������ �������� � ���� ��������
	// ����������� ��������

	for (int w = 0; w < N-1; w++) {
		for (int x = 0; x < N-w-1; x++) {
			if (array[x][0] < array[x+1][0]) // ���� ����� �������� ������ ������
			{    
				//������������ ��������
				for (int b = 0; b < M; b++)
				{
					int tmp = array[x][b]; 
					array[x][b] = array[x + 1][b];
					array[x + 1][b] = tmp;
				} //for b
			} //if
			else 
            if (array[x][0] == array[x+1][0]) // ���� ����� �������� ������ ������
			{   
                 if (array[x][1] < array[x+1][1]) //  
		    {     
				//������������ ��������
				for (int b = 0; b < M; b++)
				{
					int tmp = array[x][b]; 
					array[x][b] = array[x + 1][b];
					array[x + 1][b] = tmp;
				} //for b
			} //if
        }
			else
			if (array[x][1] == array[x+1][1]) // ���� ����� �������� ������ ������
			{ 
                  if (array[x][2] < array[x+1][2]) //  
		     {       
				//������������ ��������
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
	
	// ���������
	std::cout << "���������"<<std::endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			std::cout << array[i][j] << ","; // ����� �������
		} // for j
		std::cout << std::endl;
	}// for i
	// ������� � 
	system("pause");
	return 0;
}
