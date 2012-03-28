// Challenge Description: http://www.codeeval.com/open_challenges/22/
// Write a program to determine the sum of the first 1000 prime numbers.

#include <iostream>

// this function checks if a number is prime
bool isPrime(int j);

int main()
{
	using namespace std;
	int i = 0, sum = 0, j = 2;

	// for each prime number found, the counter is incremented
	// the loop stops when the counter reachs 1000
	while(i < 1000)
	{	
		if(isPrime(j))
		{
			// if a number is prime, add it to the sum
			sum += j;

			// increment the counter
			i++;	
		}

		// check the next number
		j++;
	}
	
	// display output
	cout << sum << endl;
	
	return 0;
}

bool isPrime(int j)
{
	for(int x = 2; x < j; x++)
		if(j % x == 0)
			return false;
	return true;
}
