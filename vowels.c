#include <stdio.h>
#include <string.h>
 int main(){
	char userinput[50];
	int z, x;
	printf("Input a string of characters");
	fgets(userinput, 50, stdin);
	z=strlen(userinput);
	for (x=0; x<=z; x++){
		if (userinput[x]=='a'||userinput[x]=='e'||userinput[x]=='i'||userinput[x]=='o'||userinput[x]=='u'||userinput[x]=='A'||userinput[x]=='E'||userinput[x]=='I'||userinput[x]=='O'||userinput[x]=='U'){
		continue;}
		else{
		printf("%c", userinput[x]);}
	}
	return 0;
 }
