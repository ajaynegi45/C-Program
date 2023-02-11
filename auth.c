#include <stdio.h>

int main(){
    int acc2 = 9958;
    int password = 8920;
    int attempt = 0;
    int max_attempt = 3;

     while (attempt < max_attempt){
        int acc, pass;
            printf("\nEnter the Account Number: ");
            scanf("%d", &acc);
            
            
            printf("Enter the Password: ");
            scanf("%d", &pass);
            
            if(acc==acc2 && pass==password){
            printf("\nAccess Granted\n");
            break;
            }
            else{
                printf("Access Denied");
                attempt++;
                int left = max_attempt-attempt;
                printf("\nAttempt left %d \n",left);

                if(left == 0){
                    printf("Try after 24hr\n\n");}
            printf("Left is %d",left);

            }

                    } 
    return 0;
}