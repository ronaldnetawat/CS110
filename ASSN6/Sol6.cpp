#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
  cout << "Array Sorting Program -- rrnetawat" << endl;
	int i = 0, index = 0;
	float x;
	float ar[20];

	// Input Numbers
	while (i < 20)
	{
		cout << "Enter a list of integers (negative to exit): " << endl;
		cin >> x;
		if (x < 0)
			break;
		else
		{
			ar[index] = x;
			index++;
		}
		i++;
	}

	int size = index;

	// Sorting the Elements
	int k;
	for (i = 0; i <size; i++)
	{
		for (k = i + 1; k <size; k++)
		{
			int temp;
			if (ar[i] > ar[k])
			{
				temp = ar[i];
				ar[i] = ar[k];
				ar[k] = temp;
			}
		}
	}

	// Print Sorted List
	for (int j = 0; j < size; j++)
		cout << setw(4) << ar[j] << setw(4) << endl;

	// Mean
	float sum = 0, sxsq=0;
	for (int i = 0; i < size; i++) {
		sum += ar[i];
    sxsq+=(ar[i]*ar[i]);
	}
	float mean = sum / size;

	

	// Median
	float median;
	if (size % 2 != 0)
		median = ar[size / 2];
	else {
		median = (ar[(size-1) / 2] + ar[(size-1) / 2 + 1]) / 2;
	}
	

  // Standard Deviation
  float sd = sqrt(((sxsq)-(sum*sum)/size)/(size-1));

  //Print the Calculated Numbers
  cout<< "Mean = " << mean << "\tStandard Deviation = " << sd << "\tMedian = " << median << endl;






}
