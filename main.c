#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void residential();
void commercial();
void log_in();
void bye(){
    printf("Thank You, have a good day..!");
}

int main()
{

 log_in();
 return 0;
}
void log_in(){
printf("\n\n***********  WELCOME OUR DEAR COSTUMER! *************\n\n");

char username[10];
int min,n,r,c,id,password;
float basic,fcda,charge,tax;
float due,bill,total,t, balance;
float added,final;

printf(">>Log in your Account>>>>\n");

printf("\n>Name of the Customer: ");
scanf("%s",&username);

printf("\nEnter your Password:");
scanf("%d",&password);

if(password==12345 && strcmp(username, "anonymous")!=0 ){
    printf("Log in Succesfully");

}
else{
    printf("\n\n!!Wrong Password Re- Enter your Account\n");
    return log_in();
}

printf("\n>rate class:\n 1.) residetial\n 2.) commercial\n>Enter:");
scanf("%d",&c);

switch(c)
{
case 1:
{
residential();
break;
}
case 2:
{
commercial();
break;
}
}
}


void residential(){

char username[50];
char surname[50];
char address[50];
char month[15];
int min,id,n,r,c;
float basic,fcda,charge,tax;
float due,bill,total,t, balance;
float added,final;

printf("\n>Input Unit consumed by per cubic meter: ");
scanf("%d",&min);


if(min<=20)
{
basic= min*12.6;
fcda=basic*0.010;
charge=basic-fcda;
tax=basic*0.020;
bill=charge+tax;
added=basic*0.10;
}
else if(min>20 && min<=30)
{
basic=min*13.75;
fcda=basic*0.020;
charge=basic-fcda;
tax=basic*0.020;
bill=charge+tax;
added=basic*0.10;
}
else if (min>30 && min<=40)
{
basic=min*14.95;
fcda=basic*0.030;
charge=basic-fcda;
tax=basic*0.020;
bill=charge+tax;
added=basic*0.10;
}

else if(min > 40 && min<=50)
{
basic=min*16.30;
fcda=basic*0.030;
charge=basic-fcda;
tax=basic*0.020;
bill=charge+tax;
added=basic*0.10;
}

else

{
basic=min*17.95;
fcda=basic*0.10;
charge=basic-fcda;
tax=basic*0.020;
bill=charge+tax;
added=basic*0.10;
}
due= bill*0.10;
total=bill+due;
final=charge+added;

printf("\n\n----------Electrical Bill-----------\n\n");


printf("Customer #ID: 190876\n");
printf("Customer Name :Darius\n");
printf("Adress: Marikina\n");
printf("Billing month: February\n");


printf("--------------------------------------------------");
printf("--------------------------------------------------\n\n\n\n");
printf("Unit consumed in cubic meter :%d\n\n",min);
printf("Current bill charges :Php  %.2f\n\n",final);
printf("Franchise tax:Php  %.2f\n",tax);
printf("---------------------------------");
printf("\nTOTAL CURRENT BILL: %.2f\n",bill);
printf("-------------------------------");
printf("--------------------------------\n\n\n\n");


printf("AFTER DUE DATE:\n\n");
printf("Penalty After Due Date:Php  %.2f\n",due);
printf("Total After Due Date:Php  %.2f\n",total);
printf("!please pay on time to avoid disconnection....");

printf("\n\n\n");
printf(">Do you want to pay bill?: ");
printf("\n\n>press 1 for Yess\n\n>press 2 for No.\nEnter:");
scanf("%d",&n);

switch(n)
{
case 1:
{
printf("\n\n>Press 1: pay on time\n\n>Press 2: pay after Due date\nEnter:");
scanf("\n%d",&r);



if(r==1)
{
    y:
printf("\n>Input Cash value:  ");
scanf("%f",&t);
if(t>bill)
{
printf("Your balance is: %f",t-bill);
printf("\n");
printf("Thank you, have a good day....!");
}
else if(bill>t){
printf("Not enough cash");
printf("\n");
goto y;
}
}

else if(r==2)
{
    n:
printf("Input Cash value:  ");
scanf("%f",&t);
if(t>total)
{
printf("Your balance is: %f",t-total);
printf("\n");
printf("Thank you, have a good day....!");
}
else if(total>t){
printf("Not enough cash");
goto n;
}




}
break;


}
case 2:
{
void log_in();
break;
}
}

}

void commercial(){
    float energyCO=12.6,units,TotalCO;
    float totalBill = 0;
    int option;
    float balance, cash;

    printf("\n>Input Unit consumed by per cubic meter: ");
    scanf("%f",&units);


    printf("\n>Press 1 if you will pay now\n>Press 2 if you will pay due date: ");
    scanf("%d", &option);



    switch(option){
    case 1:
        if(units <= 50){
            totalBill = energyCO * units;
        }
        else if(units <= 100){
            totalBill = 25 +(units - 5) * 3;
        }
        else if(units <= 150){
            totalBill = 50 + (units - 10) * 5;
        }
        else if (units <= 200){
            totalBill = 75 + (units - 15) * 7;
        }
        else{
            totalBill = 150 + (units - 20) * 9;
        }

    printf("Amount to pay:PHP %.2f", totalBill);
	printf("\n");
	z:
    printf("==>Enter cash amount: ");
    scanf("%f", &cash);
    if(cash < totalBill){
    	printf("Insufficient Cash");
    	printf("\n");
    	goto z;
    }
    else{
    balance = (cash - totalBill);
    printf("Balance: %.2f", balance);
    printf("\n");
    printf("Thank you, have a good day....!");

	}

    break;

    case 2: {
    totalBill = (units * energyCO) * 2.5 ;
    printf("\nAmount to pay: PHP %.2f\n", totalBill);
    r:
    printf("\n>Enter cash amount: ");
    scanf("%f", &cash);
	if(cash < totalBill){
		printf("Insufficient Cash");
		goto r;
	}
	else{
		balance = (cash - totalBill);
        printf("Change: %.2f", balance);
        printf("\n");
        printf("Thank you, have a good day....!");
	}
    break;
    }
        }

        }
