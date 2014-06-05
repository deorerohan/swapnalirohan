#include "stdafx.h"
#include "test.h"


Rohan was here thsi will give you errors :)
account::account(int acc_no,string cust_name,float acc_bal,string acc_type)
{
	lacc_no = acc_no;
	lcust_name = cust_name;
	lacc_bal = acc_bal;
	if(acc_type == "saving")
		lacc_type = savings;
	else if(acc_type == "fixed")
		lacc_type = fixed;
	else if(acc_type == "recurring")
		lacc_type = recurring;
	else
		cout << "Wrong account type" << endl;
	nextaccptr = NULL;
}

void account :: addnextaccount(int acc_no,string cust_name,float acc_bal,string acc_type)
{
	if(nextaccptr == NULL)
	{
		nextaccptr = new account(acc_no,cust_name,acc_bal,acc_type);
	}
	else
	{
		nextaccptr -> addnextaccount(acc_no,cust_name,acc_bal,acc_type);
	}
}

void account::deleteaccount(int acc_no)
{
	if(nextaccptr->lacc_no == acc_no)
	{
		//we will have to delete nextptr
		account * toDelete = nextaccptr;
		nextaccptr = nextaccptr->nextaccptr;
		delete toDelete;
	}
	else
	{
		nextaccptr->deleteaccount(acc_no);
	}
}

void account::depositemoney (int acc_no,float acc_bal)
{
	if(nextaccptr->lacc_no == acc_no)
	{
		nextaccptr->lacc_bal = lacc_bal + acc_bal;
	}
	else
	{
		nextaccptr->depositemoney(acc_no,acc_bal);
	}
}

void account :: withdrawmoney (int acc_no,float acc_bal)
{
	if(nextaccptr -> lacc_no == acc_no)
	{
		nextaccptr ->lacc_bal = lacc_bal + acc_bal;
	}
	else
	{
		nextaccptr ->withdrawmoney (acc_no,acc_bal);
	}
}




////****************************************************************************************
void bank::addaccount()
{
	int xacc_no;
	string xcust_name;
	float xacc_bal;
	string xacc_type;
	cout<<"Enter account number :  " << "\n";
	cin >> xacc_no;
	cout << "Enter customer name : ";
	cin >> xcust_name;
	cout << "Enter acc balance : ";
	cin >> xacc_bal;
	cout << "Enter account type : ";
	cin >> xacc_type;

	if(head == NULL)
	{
		head = new account(xacc_no,xcust_name,xacc_bal,xacc_type);

	}
	else
	{
		head -> addnextaccount(xacc_no,xcust_name,xacc_bal,xacc_type);
	}

	
}


void bank::deleteaccountfrombank()
{
	int lAccNum;
	cout << "Please enter account number to delete" << endl;
	cin >> lAccNum;
	if(head->lacc_no == lAccNum)
	{
		account * toDelete = head;
		head = head->nextaccptr;
		delete toDelete;
	}
	else
	{
		head->deleteaccount(lAccNum);
	}
}


void bank::depositemoneyinbank()
{
	int laccno;
	float laccbal;
	cout << "Enter Account number :" << endl;
	cin >> laccno;
	cout << "Enter money to deposite : " <<endl;
	cin >> laccbal;

	if(head -> lacc_no == laccno)
	{
		//add ammount to head node
		head->lacc_bal = laccbal + head -> lacc_bal;
	}
      	else
	{
		head -> depositemoney(laccno,laccbal) ;

	}
	                        
}





void bank :: withdrawfrombank()
{
	int laccno;
	float laccbal;
	cout << "Enter account number :" << endl;
	cin >> laccno;
	cout << "Enter amount to be withdrawn :" <<endl;
	cin >> laccbal;

	if(head -> lacc_no == laccno)
	{
		head->lacc_bal =   laccbal - head -> lacc_bal ;
	}
	else
	{
		head -> withdrawmoney(laccno,laccbal); 
	}

}
