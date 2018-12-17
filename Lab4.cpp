//Mark Pillco
//22 February 2017
//To correspond a number and a letter

#include <iostream>

using namespace std;

int main ()
{
	//Variables
	char letter;

	//Input
	cout << "Enter an Uppercase letter:" ;
	cin >> letter;	
	
	//Processing
	switch (letter)
	{
	case 'A':
	case 'B':
	case 'C':
	   cout << "The correspoding number is 2" << endl;
	break ;
	
	case 'D':
	case 'E':
	case 'F':
	   cout << "The corresponding number is 3" << endl;
	break ;
	
	case 'G':	
	case 'H':
	case 'I': 
	   cout << "The corresponding number is 4" << endl;
	break ;
	
	case 'J':
	case 'K':
	case 'L':
	   cout << "The corresponding number is 5" << endl;
	break;
	
	case 'M':
	case 'N':
	case 'O':
	   cout << "The corresponding number is 6" << endl;
	break;
	
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	   cout << "The corresponding number is 7" << endl;
	break;
	
	case 'T':
	case 'U':
	case 'V':
	   cout << "The corresponding number is 8" << endl;
	break;
	
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	   cout << "The corresponding number is 9" << endl;
	break;
	
	default:
	   cout << letter << "is invalid" << endl;
	break ;
	}
	//output
	cout << "Have a nice day!" << endl;
return 0;
}
