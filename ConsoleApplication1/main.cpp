#include "pch.h"
#include <iostream>

int bubbleSort(int matrix[5][5])
{
	int _template;

	for (int column = 0; column < 5; column++)
		for (int row = 0; row < 5 - 1; row++)
			for (int iterator = row; iterator < 5; iterator++)
				if (matrix[row][column] < matrix[iterator][column])
				{
					_template = matrix[row][column];
					matrix[row][column] = matrix[iterator][column];
					matrix[iterator][column] = _template;
				}
	return matrix[5][5];
}
int arithmeticMean(int matrix[5][5])
{
	int dob_column = 1;
	int dob[4];
	for (int row = 1; row < 5; row++)
	{
		for (int column = 0; column < 5; column++)
		{
			if (row + column >= 5)
			{
				dob_column = dob_column * matrix[row][column];
			}
		}
		dob[row - 1] = dob_column;
		printf("%s", "\n");
		printf("%d", dob_column);
		dob_column = 1;
	}
	printf("%s", "\n");
	double sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += dob[i];
	}
	return sum / 4;
}
int main()
{
	int x = 5;
	int y = 5;
	int matrix[5][5];
	printf("Enter mas: \n");
	/*int arr[] = {-1, -5, -47, -8, -1, -4, -98, -90, -45, -78, -3, -2, -5, -9, -4, -8,
	-67, -33, -91, -40, -2, -58, -11, -65, -77};*/
	int ind = 0;
	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 5; column++)
		{
			scanf_s("%d", &matrix[row][column]);
			/*matrix[i][column] = arr[ind];
			++ind;*/
		}
	}

	for (int row = 0; row < x; row++)
	{
		for (int column = 0; column < y; column++)
		{
			printf("%s", "\t");
			printf("%d", matrix[row][column]);
		}

		printf("%s", "\n");
	}
	printf("%s", "\n");

    bubbleSort(matrix);

	for (int row = 0; row < x; row++)
	{
		for (int column = 0; column < y; column++)
		{
			printf("%s", "\t");
			printf("%d", matrix[row][column]);
		}
			printf("%s", "\n");
	}
	printf("%d", arithmeticMean(matrix));
}

	

