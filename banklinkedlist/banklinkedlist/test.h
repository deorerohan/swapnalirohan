#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class account
{
	enum acc_type
	{
		savings,
		recurring,
		fixed
	};
private:
	
	string lcust_name;
	
	acc_type lacc_type;

public:
	int lacc_no;
	float lacc_bal;
	account * nextaccptr;
	//account();
	account(int acc_no,string cust_name,float acc_bal,string acc_type);


	void addnextaccount(int acc_no,string cust_name,float acc_bal,string acc_type);
	void deleteaccount(int acc_no);
	void depositemoney(int acc_no,float acc_bal);
	void withdrawmoney(int acc_no,float acc_bal);

};

class bank
{ 
private:
	account *head;
public:
	void addaccount();
	void deleteaccountfrombank();
	void depositemoneyinbank();
	void withdrawfrombank();
};