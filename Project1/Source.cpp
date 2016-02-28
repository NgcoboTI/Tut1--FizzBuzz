#include <iostream>

using namespace std;

int main() {

	int i;

	 // program runs numbers from 1- 50
	for (i = 1; i <= 50; i++)
	{
		 if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz" << endl; //displays FizzBuzz if number divisible by 3 and 5
		}
		 else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;   //displays Fizz if number divisible by 3
		}
		else if (i % 5 == 0)
		{
			cout <<  "Buzz" << endl;  //displays Buzz if number divisible by 5
		}
		
		else {
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
	}