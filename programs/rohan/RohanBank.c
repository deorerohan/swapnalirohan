#include <stdio.h>

struct acc
{
	char name[20];
	int acc_no;
	float amount;
	char acc_type[20];
};

void NewAccount(struct acc *data, int count);
void DepositeMoney(struct acc *data, int count);
void WithDrawMoney(struct acc *data, int count);
void DisplayBalance(struct acc *data, int count);

int main()
{
	printf("Welcome to Rohan's Bank\n\n");
	int select;
	struct acc data[20];
	int acc_count = 0;
	while(1)
	{
		printf("Select option:\n1. Open New Account\n2. Deposite Money\n3. Withdraw Money\n4. Display Balance\n5. Exit\n");
		scanf("%d", &select);
		if(select == 1)
		{
			NewAccount(&data[0], acc_count);
			acc_count++;
		}
		else if(select == 2)
		{
			DepositeMoney(&data[0], acc_count);
		}
		else if(select == 3)
		{
			WithDrawMoney(&data[0], acc_count);
		}
		else if(select == 4)
		{
			DisplayBalance(&data[0], acc_count);
		}
		else
		{
			printf("Exiting ....\n");
			break;
		}
	}
	return 0;
}

void NewAccount(struct acc *data, int count)
{
	printf("Enter Name, Account No, Amount, Account Type\n");
	scanf("%s %d %f %s", &data[count].name, &data[count].acc_no, &data[count].amount, &data[count].acc_type);
}
void DepositeMoney(struct acc *data, int count)
{
	int no, i;
	printf("Enter account number\n");
	scanf("%d", no);
	for(i = 0; i < count; i++)
	{
		if(data[i].acc_no == no)
		{
			
		}
	}
}

void WithDrawMoney(struct acc *data, int count)
{

}
void DisplayBalance(struct acc *data, int count)
{
	int no, i;
	printf("Enter account number\n");
	scanf("%d", no);
	for(i = 0; i < count; i++)
	{
		if(data[i].acc_no == no)
		{
			printf("Name : %s\nAccount No : %d\nAmount : %f\nAccount Type : %s", data[i].name, data[i].acc_no, data[i].amount, data[i].acc_type);
		}
	}
}
