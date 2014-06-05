// banklinkedlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "test.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int choice;
	char ch = 'y';

	bank *ptrbank = new bank();
	do
	{
		cout << "\n1.add new account \n2.delete existing account\n3.deposite money\n4.withdraw money\n5.balance enquiry\n";
		cout << "Enter your choice : " ;
		cin >> choice;
		switch(choice)
		{
		case 1:
			cout << "add account";
			ptrbank->addaccount ();
			break;
		case 2:
			cout << "delet account";
			ptrbank->deleteaccountfrombank();
			break;
		case 3:
			cout << "deposite money";
			ptrbank->depositemoneyinbank ();
			break;
		case 4:
			cout << "withdraw money";
			ptrbank->withdrawfrombank();
			break;
		case 5:
			cout << "balance enquiry";
			break;
		default:
			cout << "default case" << endl;
			cout << "do u want to continue " << endl;
			cin >> ch;
			break;
		}
	}while(ch == 'y');

	return 0;
}