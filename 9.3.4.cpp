#include<stdio.h>
#include<string.h>
#define max 50
int countVowel(char[],char mem[]);
void showVowel(char mem[]);
int main(){
	char text[max];
	char mem[max];
	int cVowel;
	printf("enter text: ");
	scanf("%s",text);
	cVowel=countVowel(text,mem); //array mem = countvowel can put vowel in it loey
	printf("Text:[%s] has %d vowels is ",text,cVowel);
	showVowel(mem);
	return 0;
}
int countVowel(char t[],char mem[]){
	int i=0,count=0,c=0;
	while(i<max&&t[i]!='\0'){
		if(t[i]=='A'||t[i]=='a'||t[i]=='E'||t[i]=='e'||t[i]=='I'||t[i]=='i'||t[i]=='O'||t[i]=='o'||t[i]=='U'||t[i]=='u'){
			count++;
			mem[c]=t[i];c++;
		}
		i++;
	}
	mem[c]='\0'; //DFG string have this close always.
	return count;
	
}
void showVowel(char mem[]){
	for(int j=0;j<strlen(mem);j++)
		printf("%c ",mem[j]);
	printf("\n");
}
