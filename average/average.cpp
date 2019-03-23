#include<iostream>
#include "average.h"
using namespace std;

double Avg::avgIs(int *arr, int size)
{
	for (i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	avg = double(sum) / size;
	return avg;
}

double Avg::acceptNum()
{
	std::cout << "How many numbers:"<<std::endl;
	std::cin >> n;
	for(i=0;i<n;i++)
	{
		std::cout << "Enter the elements:" << i + 1 << std::endl;
		cin >> arr[i];
	}
	avg = avgIs(arr, n);
	std::cout << "Average is :: " << avg << std::endl;
	return 0;
}
