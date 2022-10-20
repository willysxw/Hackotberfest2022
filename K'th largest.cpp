#include<iostream>
using namespace std;
//function for sorting array in descending order 
void sort_array(int array[], int size)
{
	int temp = array[0];
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] > array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
//function for finding kth largest element
int kthlargest(int array[], int size, int k)
{
	return array[k - 1];
}
int main()
{
	int size;
	cout << " enter the number of elements you want to enter : ";
	cin >> size;
	int* array = new int[size];
	//populating the array
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the value of element " << i + 1 << " : ";
		cin >> array[i];
	}
	//function call
	sort_array(array, size);

	int k = 0;
	cout << " Enter the k'th number to find largest element : ";
	cin >> k;
	while (k > size)
	{
		cout << " Error! given number is out of bound " << endl;
		cout << " Enter again " << endl;
		cin >> k;
	}
	//calling function
	int largest = 0;
	largest = kthlargest(array, size, k);
	cout << k<<"th largest element is : " << largest;
	delete[]array;
	array = NULL;
	return 0;
}