/*Name: Wanjiku Ian Macharia
RegNo: CT101/G/23180/24
CAT 2      PROGRAMING AND SOLVING PROBLEMS
TOPIC: A 2D ARRAY PROGRAM
*/

#include<stdio.h>
int main(){
	//DEFINING AND INITIALIZING A TWO DIMENSIONAL ARRAY KNOWN AS SCORES
	
	int scores[2][2]={{65,92,35,70},{84,72,59,67}};
	//Declaring the data types
	int i,j;
	//for loop for printing out the row
	for (i=0;i<2;i++){
			//for loop for printing out the column
		for(j=0;j<2;j++){
			//printing the elements of the above array 
			printf("scores%d%d=%d\n",i,j,scores[i][j]);
		}
	}
	
	
	
	
	
	return 0;
}