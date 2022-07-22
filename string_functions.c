#include<stdio.h>
#include<string.h>
int main(){
	char str[25]="GG" ,str1[5];
	printf("%d\n",(int) strlen(str));
	strcpy(str1,str);
	printf("%s\n",str1);
	printf("%s\n",str);
	strcat(str1,str);
	printf("%s\n",str1);

	return 0;
}
