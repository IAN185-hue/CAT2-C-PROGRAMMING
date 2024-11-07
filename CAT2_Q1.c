/*Name: Wanjiku Ian Macharia
RegNo: CT101/G/23180/24
CAT 2      PROGRAMING AND SOLVING PROBLEMS
TOPIC: A DATA STRUCTURE PROGRAM OF AN EMPLOYEE
*/

#include<stdio.h>
#include<string.h>
//DEFINING THE DATA TYPES UNDER THE STRUCTURE
struct employee {
	char name[25];
	int ID;
	char department[20];
	float salary;
	char email[50];
	
}
//DECLARATION OF THE EMPLOYEE
employee;
int main(){
	//INITIALISATION OF THE VARIABLES 
	strcpy(employee.name,"John Doe");
	employee.ID=12345;
	strcpy(employee.department,"Human Resources");
	employee.salary=55000.50;
	strcpy(employee.email,"john_doe@company.com");
	
	//PRINTING OUT THE DATA OF THE EMPLOYEE STRUCTURE
	printf("The Employee's name is: %s\n",employee.name);
	printf("The employee's ID NO is: %d\n",employee.ID);
	printf("The department of the employeee is: %s\n",employee.department);
	printf("The salary is: %.2f\n",employee.salary);
	printf("The employee's email is : %s\n",employee.email);
	
	return 0;
	
}