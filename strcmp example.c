#include <stdio.h>
#include <string.h>

void inputUser_Name(char arr1[]);
void inputPassword(char arr2[]);
int compare_name(char arr1[], char arr2[]);
int compare_password(char arr4[], char arr5[]);


char name_data[20] = "samedovitsch";
char password_data[20] = "12345";
int temp;


typedef struct{

    char user_name[20];
    char password[20];
    
     
}user_info;

int main(){

    user_info user_info; 

    inputUser_Name(user_info.user_name);

    compare_name(user_info.user_name, name_data);

    inputPassword(user_info.password);

    compare_password(user_info.password, password_data);



}

void inputUser_Name(char arr1[]){

    printf("Please enter your name:\n");

    scanf("%20s", arr1);



}
void inputPassword(char arr2[]){

    printf("Please enter your password:\n");

    scanf("%20s", arr2);


}

int compare_name(char arr1[], char arr2[]){

while(1){  

temp = strcmp(arr1, arr2);

if(temp == 0){

printf("Correct user name\n");

break;

}
else{

printf("Wrong user name\n");

printf("Please enter your user name again:\n");

scanf("%20s", arr1);

}


}

return temp;

}


int compare_password(char arr4[], char arr5[]){



    while(1){
        
    temp = strcmp(arr4, arr5);
        
    if(temp == 0){
    
    printf("Correct Password\n");
        
    break;
    
    }
    else{
    
    printf("Wrong Password\n");
    
    printf("Please enter your password again:\n");
    
    scanf("%20s", arr4);
      
    continue;
    }
    
    
    
    }
    
    return temp;
}
