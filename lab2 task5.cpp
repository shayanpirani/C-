#include <iostream>
#include <string>

using namespace std;

//By shayan hassan :))
int main()
{
	//dynamic arrays are used to declare an array in heap memory and we can change the size of these arrays at runtime, whereas we cannot change the size of static arrays at runtime
	//2D Jagged array in C++
	int rows;
	float gpa,sum;
	cout << "Enter no of rows of array: ";
	cin >> rows;
	int *numbers = new int[rows];   //array to store no of columns in each row;
	//declaration of array
	int **array = new int*[rows];   //jagged array

	for (int i = 0; i < rows; i++)
	{
		cout << "Enter no. of cols in row " << i << ": ";
		cin >> numbers[i];
		array[i] = new int[numbers[i]];
	}
	//Input values in array
	for (int i = 0; i < rows; i++)
	{
		sum=0;
		for (int j = 0; j < numbers[i]; j++)
		{
			cout << "Row " << i << ":- Enter value " << i*numbers[i] + j << ": ";
			cin >> array[i][j];
			array[i][j]*=3;
			sum+=array[i][j];
		}
		gpa=sum/15;
		cout<<"your gpa is:"<<gpa<<endl;
		
		
	}
	//Output values of array
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < numbers[i]; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
}
