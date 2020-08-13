/*
Kimberlee Ashmore
CSCE 3600.001
1/29/18
Minor Assignment 1
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

	int hex1, hex2;
	unsigned int result;

	while (1) {

		printf("Enter a 4-digit hexadecimal number: \n");  //read in first and second hexadecimal number 
		scanf("%x", &hex1);
		if ((hex1<0000) ||( hex1> "%Xffff")) {					//check for hex in range 
			printf("%x is out of range. please try again. \n");
			

		}
		printf("Your number in decimal is : %d \n", hex1); // print out hex in decimal individually

		printf("Enter in another 4-digit hexadecimal number: \n");  //read in second hexadecimal number 
		scanf("%x", &hex2);
		if ((hex2<0000 )||( hex2> "%xffff")){							//check for hex in range 
			printf("%x is out of range. please try again. \n");
		}
		printf("Your number in decimal is : %d \n", hex2);

		//concatinate the two hex numbers with hex2 first and hex1 at the end
		result =( hex2 << 8)| hex1;
	
	//print out statement with resulting hexadecimal and decimal concatination	
		printf("\n Merging 0x%x and 0x%x results in %x or %d in decimal.\n",hex1,hex2,result,result);

	}
	
	return 0;
}
