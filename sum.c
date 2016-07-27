#include <stdio.h>
#include <string.h> 

int main(){
	int nextvalue, z, x, q, runtotal, y;
	int userinput[x], newarray[x];
	printf("How many numbers do you want in your array?\n");
	scanf("%d",&x);
	for (q=0; q<x; q++){
		printf("Enter a number for position %d \n", q+1);
		scanf("%d", &userinput[q]);
	}
	printf("%d", userinput[0]);
	newarray[0]=userinput[0];
	for (z=1; z<x; z++){
	newarray[z]=userinput[z]+newarray[x];
	}
	printf("%s", newarray);
	printf("\n");

return 0;

}

