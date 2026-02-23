#include<stdio.h>
#include<string.h>
int checkLogin(char login[5][64], char passwd[5][64], char *logindb, char *passdb); 

int main() {
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	char logindb[64],passdb[64];
	printf("enter user: ");scanf("%s",logindb);
	printf("enter password: ");scanf("%s",passdb);
	if(checkLogin(login,password,logindb,passdb)){
		printf("welcome\n");
	}
	else printf("Incorrect login or password\n");
	return 0;
}

int checkLogin(char login[5][64], char passwd[5][64], char *logindb, char *passdb){
	for(int i=0;i<5;i++){
		if(strcmp(login[i],logindb)==0 && strcmp(passwd[i],passdb)==0){
			return 1;
		}
	}
	return 0;
}
