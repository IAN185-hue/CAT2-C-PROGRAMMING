/*Name: Wanjiku Ian Macharia
RegNo: CT101/G/23180/24
CAT 2      PROGRAMING AND SOLVING PROBLEMS
TOPIC: WAGE CALCULATION PROGRAM
*/

#include<stdio.h>
int main(){
	//DECLARATION OF THE VARIABLES
	float hours,wage,grossPay,taxes,netPay;
	
	//PROMPTING THE USER FOR THE NUMBER OF HOURS WORKED IN A WEEK
	printf("Enter the number of hours worked in a week: ");
	scanf("%f",&hours);
	
	//PROMPTING THE USER FOR THE WAGE PER HOUR
	printf("Enter the wage per hour: ");
	scanf("%f",&wage);
	//CALCULATING THE GROSS AMOUNT
		if(hours>40){
			grossPay=(40*wage)+(hours-40)*wage*1.5;
		}else{
			grossPay=hours*wage;
		}
	//CALCULATING THE TAXES CHARGED
		if (grossPay<=600){
			taxes=grossPay*0.15;
		}else{
			taxes=600*0.15+(grossPay-600)*0.20;
		}
		//CALCULATING THE NET PAY
		netPay=grossPay-taxes;
		
		//PRINTING OUT THE RESULTS OF THE GROSS PAY,TAXES AND THE NET PAY
		printf("Gross pay %.2f\n",grossPay);
		printf("Taxes: %.2f\n",taxes);
		printf("Net pay: %.2f\n",netPay);
		
		return 0;
}