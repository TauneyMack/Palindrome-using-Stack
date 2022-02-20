#include<iostream>
#include<string>
#include"MYLIB.h"
using namespace std;

int main()
{
	STACK <char, 150> RL, LR, Temp;
	char a, c, c1, c2, cont;
	do
	{
		RL.clearStack();	//clear all stacks
		LR.clearStack();
		Temp.clearStack();
		cout << "Enter a sentence: ";
		while (cin.get(c), c != '\n')
		{
			if (isalpha(c))
			{
				c = tolower(c);		//make all letters lowercase
				RL.pushStack(c);	//push c into RL
				Temp.pushStack(c);	//push c in Temp
			}
		}
		while (!Temp.isEmpty())
		{
			a = Temp.popStack();	//push into LR from Temp
			LR.pushStack(a);
		}
		while (!RL.isEmpty())
		{
			c1 = RL.popStack();  //compare RL and LR stack
			c2 = LR.popStack();
			if (c1 != c2) break;
		}
		if (RL.isEmpty())
		{
			cout << "\t This is a PALINDROME\n";
		}
		else
		{
			cout << "\t This is not a PALINDROME\n";
		}

		cout << "CONTINUE (y/n)?";
		cin >> cont;
		cin.ignore();
		cout << endl;
	} while (cont == 'y' || cont == 'Y');

	system("pause");
	return 0;	
}
/*

Enter a sentence: Sit On a Potato Pan Otis
This is a PALINDROME
CONTINUE (y/n)?y

Enter a sentence: Exam One Is Coming
This is not a PALINDROME
CONTINUE (y/n)?n
Press any key to continue . . .
*/