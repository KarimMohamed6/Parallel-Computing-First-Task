#include <stdio.h>
#include <string.h>

typedef struct {
	char userName[50];
	char password[20];
}User;
User users[10] ={
     {"karim","1"},
	 {"aboda","2"}
};
int main(){
	char userName[50];
	char password[20];
	int isLoggedIn = 0;
	
	while(!isLoggedIn){
	
    printf("User Name : ");
    fgets(userName,sizeof(userName),stdin);
    userName[strcspn(userName, "\n")] = '\0'; 
    
    printf("Enter Password : ");
    fgets(password,sizeof(password),stdin);
    password[strcspn(password, "\n")] = '\0'; 
    
    int i;
    for(i = 0; i<2; i++){
    	if(strcmp(userName,users[i].userName) == 0 && strcmp(password,users[i].password) == 0 ){
    		isLoggedIn = 1;
    		break;
		}
	}
	
	if(!isLoggedIn)
       printf("Incorrect UserName or Passwrd , please try again!  \n"); 
   }
	if(isLoggedIn)
	 printf("You Are Logged In Sucessfuly.\n");
	

    return 0;
}

