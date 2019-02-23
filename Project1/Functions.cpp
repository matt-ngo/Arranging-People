//Matthew Ngo
//CS 262 TTh

#include "Header.h"
using namespace std;

void getNames(string namesArr[], int size)
{
	cout << "Enter four different names: " << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << "Name " << (i+1) << " : ";
		cin >> namesArr[i];
	}
	cout << endl;
}

void printArray(string namesArr[], int size)
{
	cout << "[ ";
	for (int i = 0; i < size; ++i)
		cout << namesArr[i] << " ";
	cout << "]" << endl;
}

int fact(int num)
{
	if (num == 0)
		return 1;
	else
		return num * fact(num - 1);
}

void printCombinations(string namesArr[], int n, int r)
{
	//calculate total of total combinations
	int nCr = fact(n) / (fact(r) * fact(n - r));
	cout << "Total Subsets = (" << n << " choose " << r << ") = " << nCr << endl;

	//array for subsets of name array (ideally [r] but not possible for arrays)
	string subset[50];

	// Print all combinations recursively 
	combinationCalculator(namesArr, n, r, 0, subset, 0);

	cout << endl;
}


void combinationCalculator(string namesArr[], int n, int r, int subsetIdx, string subset[], int nameArrIdx)
{
	//Base cases to stop recursion:
		//1) If r amount of names have been addded to subset[] PRINT 
	if (subsetIdx == r)
	{
		printArray(subset, r);
		return;
	}
		//2) When no more names in nameArray to put in subset[] 
	else if (nameArrIdx >= n)
		return;

	//Recurse for:
	//case 1: current element is included in the subset
	//--> write name from nameArray at current subset index, 
	// --> increment both and recurse until a base is reached
	subset[subsetIdx] = namesArr[nameArrIdx];
	combinationCalculator(namesArr, n, r, subsetIdx + 1, subset, nameArrIdx + 1);

	//case 2: current element is not included in the subset
	//--> don't write name into subset
	// --> shift over nameArray "pointer" to move on 
	combinationCalculator(namesArr, n, r, subsetIdx, subset, nameArrIdx + 1);

	//when floor of function is reached, "outer loop" is reset
}


void printPermutations(string namesArr[], int n, int r)
{
	//calculate total of total permutations
	int nPr = (fact(n) / fact(n - r));
	cout << "Total Permutations = P(" << n << ", " << r << ") = " << nPr << endl;
	
	//for r = n, no combinations needed, just permute
	if (n == r)
		heapPermutation(namesArr, r, r);
	//for r = n-1, send combinations of 3 to be permuted by heap's algorithm
	else
	{
		for (int i = n-1; i >= 0; --i) //reverse for loop makes output more "traditionally" organized
		{
			//block out one element from nameArr[], copy the rest to a temp[] (subset)
			bool inSubset[4] = { 1,1,1,1 };
			string temp[4];
			inSubset[i] = false;

			int j = 0, k = 0;
			while (k < r)
			{
				if (!inSubset[j])
					++j;
				else
				{
					temp[k] = namesArr[j];
					++j;
					++k;
				}
			}
			heapPermutation(namesArr, r, r);
		}
	}
	cout << endl;
}

void heapPermutation(string arr[], int tempSize, int size)
{
	// if size becomes 1, print the permutation 
	if (tempSize == 1)
	{
		printArray(arr, size);
		return;
	}

	for (int i = 0; i < tempSize; i++)
	{
		heapPermutation(arr, tempSize - 1, size);

		// if tempSize is odd, swap first and last element 
		if (tempSize % 2 == 1)
			swap(arr[0], arr[tempSize - 1]);
		// If tempSize is even, swap 'i'th and last element 
		else
			swap(arr[i], arr[tempSize - 1]);
	}
}

