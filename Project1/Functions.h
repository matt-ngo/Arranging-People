//Matthew Ngo
//CS 262 TTh

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <algorithm>
using namespace std;

//FUNCTION DECLARATIONS

//Asks user for names
	void getNames(string namesArr[], int size);
//Prints array
	void printArray(string arr[], int size);
//Calculates factorial(!)
	int fact(int num);
//Calculates n choose r then calls function combinationCalculator()
	void printCombinations(string namesArr[], int n, int r);
//Calculates and prints all combinations recursively (General soln, should work for all n, r)
	void combinationCalculator(string namesArr[], int n, int r, int subsetIdx, string subset[], int nameArrIdx);
//Calculates nPr, then divides array into subsets/combinations and sends to heapPermutation()
	void printPermutations(string namesArr[], int n, int r);
//Heap's algorithm for finding permutations (from subsets provided by printPermutations() )
	void heapPermutation(string arr[], int tempsize, int n);

#endif
