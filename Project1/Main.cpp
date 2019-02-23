//Matthew Ngo
//CS 262 TTh

#include "Header.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std; 

//CONSTANTS
const int NAMES_AMOUNT = 4;

int main()
{
	string namesArr[NAMES_AMOUNT] = {"blank"};

	cout << "=============USER INPUT:=============" << endl;
	getNames(namesArr, NAMES_AMOUNT);
	cout << "Names: " << endl;
	printArray(namesArr, NAMES_AMOUNT);
	cout << endl;

	cout << "=============COMBINATIONS:=============" << endl;
	cout << "Combinations with four people: " << endl;
	printCombinations(namesArr, NAMES_AMOUNT, 4);
	cout << endl;

	cout << "Combinations with two people: " << endl;
	printCombinations(namesArr, NAMES_AMOUNT, 2);
	cout << endl;


	cout << "=============PERMUTATIONS:=============" << endl;
	cout << "Permutations with three people: " << endl;
	printPermutations(namesArr, NAMES_AMOUNT, 3);
	cout << endl;

	cout << "Permutations with four people: " << endl;
	printPermutations(namesArr, NAMES_AMOUNT, 4);
	cout << endl;


	cout << endl;
	system ("pause");
	return 0;
}