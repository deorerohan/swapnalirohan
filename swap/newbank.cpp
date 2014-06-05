
#include "stdafx.h"
#include<iostream>
using namespace std;
struct account
{
  char cust_name[20];
  int acc_no;
  float amount;
  char acc_typ[25];
};
void nwaccount(struct account *ptr,int count);
void deposite(struct account *ptr,int count);
void withdraw(struct account *ptr,int count);
void balnquiry(struct account *ptr,int count);

int main()
{
        struct account a[10];
	int acc_count=0;
	int choice = 0,cont=0;

	do 
        {
	   cout<<"Enter your choice\n";
           cout<<"\n1.Open account\n2.Deposite money\n3.Withdraw money\n4.Balance enquiry\n5.Default\n";
           cin>>choice;
	       switch(choice)
	             {
		       case 1: 
                              nwaccount(&a[0],acc_count);
                              acc_count++;
		       	      break;

                      case 2:
                              deposite(&a[0],acc_count);
                              break;

                       case 3:
	  		      withdraw(&a[0],acc_count);
		              break;

                       case 4:
			      balnquiry(&a[0],acc_count);
                              break;

                      default:
                              cout<<"default\n";
                              break;

                   }
           cout<<"Do you want to continue : press 1\n";
           cin>>cont;
           }while(cont == 1);


return 0;
}
void nwaccount(struct account *ptr,int count)
{
     cout<<"OPEN NEW ACCOUNT"<<endl;
     int i;
     cout<<"Enter customer name,acconut no,amount,account type"<<endl;
     cin>>ptr[count].cust_name>>ptr[count].acc_no>>ptr[count].amount>>ptr[count].acc_typ;
     for(i=0;i<=count;i++)
      {
	cout<<"customer name:"<<ptr[i].cust_name<<"account no:"<<ptr[i].acc_no<<"amount:"<<ptr[i].amount<<"account type:"<<ptr[i].acc_typ<<endl;
      }
}

void deposite(struct account *ptr,int count)

{
     int enter_accno,iterate=0;
     float enter_amount;
     cout<<"DEPOSITE MONEY\n";
     cout<<"Enter account no wher u want to deposite money\n"; 
     cin>>enter_accno;
     cout<<"Enter amount to be deposited\n";
     cin>>enter_amount;
     for(iterate=0;iterate<=count;iterate++)
     {
        if(enter_accno == ptr[iterate].acc_no)
	{
           ptr[iterate].amount = (ptr[iterate].amount + enter_amount);
           cout<<"Amount Deposited\n";
           cout<<"Total Amount = \n"<<ptr[iterate].amount;
        }  
     }
}
void withdraw(struct account *ptr,int count)
{
    int enter_accno,iterate=0;
    float enter_amount;
    cout<<"WITHDRAW MONEY\n";
    cout<<"Enter the account no from where you want to withdraw money\n";
    cin>>enter_accno;
    cout<<"Enter amount to be withdrawn\n";
    cin>>enter_amount;
    for(iterate=0;iterate<=count;iterate++)
    { 
      if(enter_accno == ptr[iterate].acc_no)
	{
	   ptr[iterate].amount = (ptr[iterate].amount - enter_amount);
           cout<<"Amount Withdrawn\n";
	   cout<<"Total Amount = \n"<<ptr[iterate].amount;
         }
    }

}

void balnquiry(struct account *ptr,int count)

{
    int enter_accno,iterate=0;
    cout<<"BALANCE ENQUIRY\n";
    cout<<"Enter the account no you want to enquire about\n";
    cin>>enter_accno;
   for(iterate=0;iterate<=count;iterate++)
   {
	if(enter_accno == ptr[iterate].acc_no)
	{
   cout<<"Name = "<<ptr[iterate].cust_name<<"Amount = "<<ptr[iterate].amount<<"Account_type = \n"<<ptr[iterate].acc_typ;
	}
   }


}


