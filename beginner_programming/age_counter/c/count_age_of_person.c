#include<stdio.h>

int main()
{
	int BirthMonth, BirthYear,BirthDate;
	int CurrentMonth, CurrentYear,CurrentDate;
	int AgeYear, AgeMonth,AgeDate;
	
	printf("\n\n\t\t\tCount the age person\n\n");
	printf("Enter Your Birth Year(Eg:1989):");
	scanf("%d",&BirthYear);
	
	printf("\n\nEnter Your Birth Month(Eg:7):");
	scanf("%d",&BirthMonth);
	
	printf("\n\nEnter Your Birth Date(Eg:5):");
	scanf("%d",&BirthDate);
	
	printf("\nEnter The Current Month(Eg:7):");
	scanf("%d",&CurrentMonth);
	
	printf("\nEnter The Current Year(Eg:2010):");
	scanf("%d",&CurrentYear);
	
	printf("\nEnter The Current Date(Eg:20):");
	scanf("%d",&CurrentDate);
	
	AgeYear=CurrentYear-BirthYear;
	AgeMonth=CurrentMonth-BirthMonth;
	AgeDate=CurrentDate-BirthDate;
	
	printf("\n\n\t\tYour Age is %d Years And %d Months And %d Days ",AgeYear,AgeMonth,AgeDate);
	
	return 0;
}
