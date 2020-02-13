#include <iostream>
using namespace std;
void input_arr1(float arr[],int size);   //arr1 is one demision array
void swap_arr1(float arr1[], float arr2[],float arr3[], int size1, int size2);
void print_arr1 (float arr4[],int size);
void swap_arrang(float arr5[],float arr6[], int size5, int size6);
void arrang(float arr7[], int size0);
void main()
{
	float arr1[5];
	cout << "please enter the array one :" << endl;
	input_arr1(arr1, 5); 
	cout << "______________________________________" << endl;
	arrang(arr1, 5);
	print_arr1(arr1, 5);
	
	


}
void input_arr1(float arr[] ,int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void swap_arr1(float arr1[], float arr2[], float arr3[], int size1, int size2)
{
	for (int i = 0; i < size1; i++)
	{
		arr3[i] = arr1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		arr1[i] = arr2[i];
	}
	for (int i = 0; i < size1; i++)
	{
		arr2[i] = arr3[i];
	}

}
void print_arr1(float arr4[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr4[i] << endl;
	}
}
void swap_arrang(float arr5[],float arr6[], int size5,int size6)
{
	for (int i = 1; i <= size5; i++)
	{
		 arr6[size5 - i]= arr5[i-1] ;
	}
}
void arrang(float arr7[], int size0)
{
	for (int i = 0; i < size0; i++)
	{
		for (int j = i + 1; j < size0; j++)
		{
			if (arr7[i] < arr7[j])
			{
				int temp;
				temp = arr7[i];
				arr7[i] = arr7[j];
				arr7[j] = temp;
			}
		}
	}
}

	
