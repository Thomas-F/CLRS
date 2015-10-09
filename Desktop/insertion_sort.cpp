#include <iostream>
using namespace std;

void insertion_sort(int arr[], int length);

int main()
{
	int num[6] = {5, 2, 4, 6, 1, 3};
	int num_length = 6;

	insertion_sort(num, num_length);
}

void insertion_sort(int arr[], int length)
{
	for(int j = 1; j < length; j++)
	{
		int key = arr[j];
		int i = j - 1;
		while(i > -1 && arr[i] > key)
		{
			arr[i+1] = arr[i];
			i = i -1;
		}
		arr[i+1] = key;
	}

	for(int k = 0; k < length; k += 1)
		{
		cout << arr[k];
		}
		cout << endl;
}
