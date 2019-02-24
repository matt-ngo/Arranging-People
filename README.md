# CS-A262-Lab-2-Arranging-People

For this lab, you will generate all possible permuations and combinations for a group of four
people.


### Program Specifications
Your program should

• Ask for the four people’s names

• Print out all combinations that include four people.

• Print out all combinations that include two people.

• Print out all permutations that include three people.

• Print out all permutations that include all four people.

Make sure each chunk of output is clearly labelled.


### Hints and Tips

• You may find using nested loops useful. Note you’ll want to print from the innermost
loop.

• Start by developing your program to compute permutations/combinations with only 1
person, then add in the second person, etc.

• For testing purposes, use names like A and B.

• Make sure you label all of your output (e.g. “All Possible Permutations” or “Combi-
nations with 3 People”)

## *Note to self* 
- Combination functionality is perfect, will theoretically work for any N choose R

  - Algorithm sourced from : https://www.geeksforgeeks.org/print-subsets-given-size-set/
  
 - Permutation functionality is currently limited to cases given: (R = N or N-1)
 
    - Cause: printPermutations()'s loop can only send subsets of N or N-1 to heapPermutation() to be permuted
  
    - Possible future solution: rewrite printPermutations() to find and send combinations using the
  same recursive algorithm in combinationCalculator()
  
      - ~ Base case --> instead of printing when a combo is found, send it to the permutor
