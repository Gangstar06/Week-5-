#include<stdio.h>
int main()
{
	int CustomerID;
	char CustomerName;
	float bill,Amount,charge,surcharge,UnitConsumed;
	
	printf("Entet CustomerID:\n");
	scanf("%d",&CustomerID);
	
	printf("Enter CustomerName:\n");
	scanf("%s",&CustomerName);
	
	printf("Enter UnitConsumed:\n");
	scanf("%f",&UnitConsumed);
	
	if(UnitConsumed <= 199){charge=1.20;}
	else if(UnitConsumed <=400){charge=1.50;}
	else if(UnitConsumed <=600){charge=1.80;}
	else{charge=2.00;}
	
	bill=UnitConsumed*charge;
	printf("bill:%f\n",bill);

	if(bill >=400){surcharge=bill*115/100;
		printf("total charge:%f\n",surcharge);}
	if(bill <=100){printf("The minimumBill is kshs100\n");}

	return 0;
}