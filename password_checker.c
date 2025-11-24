
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char pwd[100];
    printf("Enter password: ");
    scanf("%s", pwd);

    int strength = 0;

    if(strlen(pwd) >= 8) strength++;
    int hasUpper=0, hasLower=0, hasDigit=0, hasSpecial=0;

    for(int i=0; i<strlen(pwd); i++){
        if(isupper(pwd[i])) hasUpper = 1;
        if(islower(pwd[i])) hasLower = 1;
        if(isdigit(pwd[i])) hasDigit = 1;
        if(!isalnum(pwd[i])) hasSpecial = 1;
    }

    strength += hasUpper + hasLower + hasDigit + hasSpecial;

    if(strength <= 2) printf("Weak password");
    else if(strength == 3) printf("Medium password");
    else printf("Strong password");

    return 0;
}
