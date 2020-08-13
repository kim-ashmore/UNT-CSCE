//KA0321
//MINOR2 
//CSCE 3600
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct doc
{
	char* line[81];
	int lineNum[50];
	//struct doc *next; //creates a linked list for each line     
};                     

int main(int argc, char* argv[])
{

char *longestLine[]={0};
char fileName, programName;	// strings to hold commmand line vars
int occurance, lineNum=1,lineLength=0; 	//number of times a string is detected and total lines
int i, k= 0, j=0;		//itterators


struct doc par;		// 50 is max number of lines in program 


if( argc!=3)
{
printf ("There are too few arguments. \n");
exit(0);
}

else{				 // when argc  is 3

//programName = argv[0];
//strcpy(fileName, argv[1]);

FILE *fd;
			// open file with error checking
if((fd= fopen(argv[1],"r")) == NULL)
       printf("There was an error opening file. \n");

if(getc(fd) !=EOF) // while getting the characters until the eof
{
int x;
i=0;
par.line[i] = malloc(81);		//allocates the max number of chars per line
//par.line[i]=getc(fd);	 //get letter from file and put it in array  
 
for( i=0; i <50;i++)
{
for( x=0; x< 81;x++)
{
par.line[i][x]=getc(fd);  
if (par.line[i][x] =='\n')   //getting number of lines in text file and storing them
{
lineNum++;
i++;
break;
}
}
}

}
fclose(fd);


// compare line chars with argv
/*for( k=0;k<50; k++)
{
for(j=0; j< strlen(par.line[k][j]);j++)
{
while(par.line[k][j]==' ')
{j++;}
int result = strcmp(par.line[k],argv[2]);
if( result == 0)
{
occurance++;
}
}

}
*/
}

/*
if( strlen(par.line[j+1])>strlen(par.line[j])) //stores the longest line
{
int x;
for( x=0; x< strlen(par.line[j+1]);x++)
{
longestLine == par.line[j+1];
lineLength =x;
}
}
else {
longestLine ==  par.line[j];
}
*/




/* Print- out statements   */ 


printf(" Total Number Occurrences of\"%s\" in File: %d\n",argv[2], occurance);
printf("---------------------------------------------\n");
/*
for(i=0;i<occurance;i++)
{
printf("Line %d: ",lineNum,line[i] );
}
*/
printf("---------------------------------------------\n");
printf("Total Lines in File	= %d", lineNum);
printf("Characters Longest Line = %d",lineLength ); 
//printf("Longest line	 =  %s",  &longestLine);


return 0;
}


