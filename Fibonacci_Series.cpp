// Challenge Description: http://www.codeeval.com/open_challenges/22/

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

// this function generates the next number in the series
int fib(int n);

int main(int argc, char* argv[]) 
{
    ifstream file;
	int n, f;
	string line;

	file.open(argv[1]);
	if(file.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}

	while(!file.eof())
	{
		file >> n;
		f = fib(n);
		cout << f << endl;

		getline(file, line);
		if (line.length() == 0)
		{
           continue; //ignore all empty lines		
		} 
	}	

	file.close();

	return 0;
}

int fib(int n)
{
     if ( n == 0 ) return 0;
     if ( n == 1 ) return 1;
 
     return fib(n-1) + fib(n-2);
}
