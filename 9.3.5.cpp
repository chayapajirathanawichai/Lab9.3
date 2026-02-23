#include<stdio.h>
#include<string.h>
#include<ctype.h>
int sumString(char *t);
int main(){
	char text[100];
	int sum;
	printf("enter input: ");
	fgets(text,sizeof(text),stdin); //can input space value
	sum=sumString(text);
	printf("%d",sum);
}
int sumString(char *t){
	int sum=0;
	int len=strlen(t);
	for(int i=0;i<len;i++){
		if(isdigit(t[i])){
			sum+=t[i]-'0'; // -'0' is trans ascii to num
		}
	}
	return sum;
}
