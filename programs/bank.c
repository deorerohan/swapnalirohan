

#include<stdio.h>

struct account
{
  char cust_name[20];
  int acc_no;
  float amount;
  char acc_typ[25];
};
void nwaccount(struct account *a,int count);
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
	    printf("Enter your choice\n");
            printf("\n1.Open account\n2.Deposit money\n3.Withdraw money\n4.Balance enquiry\n5.Default\n");
            scanf("%d",&choice);
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
                              printf("default\n");
                              break;

                   }
           printf("Do you want to continue : press 1\n");
           scanf("%d", &cont);
           }while(cont == 1);


return 0;
}
void nwaccount(struct account *a,int count)
{
     printf("OPEN NEW ACCOUNT\n");
     int i;
     printf("Enter customer name, account no, amount, account type\n");
     scanf("%s %d %f %s",&a[count].cust_name,&a[count].acc_no,&a[count].amount,&a[count].acc_typ);
     for(i=0;i<=count;i++)
      {
	printf("%s %d %f %s\n",a[i].cust_name,a[i].acc_no,a[i].amount,a[i].acc_typ);
      }
}

void deposite(struct account *a,int count)

{
     int enter_accno,iterate=0;
     float enter_amount;
     printf("DEPOSIT MONEY\n");
     printf("Enter account number where you want to deposit money\n"); 
     scanf("%d",&enter_accno);
     printf("Enter amount to be deposited\n");
     scanf("%f",&enter_amount);
     for(iterate=0;iterate<=count;iterate++)
     {
        if(enter_accno == a[iterate].acc_no)
	{
           a[iterate].amount = (a[iterate].amount + enter_amount);
           printf("Amount Deposited\n");
           printf("Total Amount = %f\n", a[iterate].amount);
        }  
     }
}
void withdraw(struct account *a,int count)
{
    int enter_accno,iterate=0;
    float enter_amount;
    printf("WITHDRAW MONEY\n");
    printf("Enter the account number from where you want to withdraw money\n");
    scanf("%d",&enter_accno);
    printf("Enter amount to be withdrawn\n");
    scanf("%f",&enter_amount);
    for(iterate=0;iterate<=count;iterate++)
    { 
      if(enter_accno == a[iterate].acc_no)
	{
	   a[iterate].amount = (a[iterate].amount - enter_amount);
           printf("Amount Withdrawn\n");
	   printf("Total Amount = %f\n",a[iterate].amount);
         }
    }

}

void balnquiry(struct account *a,int count)

{
    int enter_accno,iterate=0;
    printf("BALANCE ENQUIRY\n");
    printf("Enter the account number you want to enquire about\n");
    scanf("%d",&enter_accno);
   for(iterate=0;iterate<=count;iterate++)
   {
	if(enter_accno == a[iterate].acc_no)
	{
   printf("Name = %s Amount = %f Account_type = %s\n",a[iterate].cust_name,a[iterate].amount,a[iterate].acc_typ);
	}
   }


}

