#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	//get heads
	char input[5000]="",output[10000];
	gets(input);
	printf("resault is: %s\n", input);
	char *p=input;

	for (int i = 0; i < strlen(input); i++)
	{

		output[i]=*p;
		p++;

		printf("258:%d:2228225:%c|", output[i], output[i]);
	}

	printf("258:13:1835009:RETURN|0:0:0:SLEEPEQUAL1200|\n");

	return 0;
}
