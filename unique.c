#include<stdio.h>
#include<string.h>

int main(){
	printf("Print a string of characters.");
	int x, z, y, b;
	b=1;
	x=0;
	y=0;
	char userinput[50];
	fgets(userinput, 50, stdin);
	z=strlen(userinput);
	while(x<=z){
	x=+1;
		while(y<=z){
		y=x+1;
	if (userinput[y]==userinput[x]){
		b=0;
		printf("Not unique");
	}
	}
	}
	if (userinput[y]!=userinput[x]){
		b=1;
		printf("Unique");
	}


	return 0;
}
	
