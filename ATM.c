#include <stdio.h>
int main(){
    // declare and initialize balance, withdraw, and deposit
    int b = 100000, w = 0, d =0;
    printf("\nStarting ATM Machine");
    printf("\nWelcome to the ATM Machine");
    printf("\nCustomer Id: 9958 and PIN: 3345\n");

    // Input the Account Details
        printf("\nEnter your Customer ID: ");
        int cust = 0;
        scanf("%d",&cust);
        printf("Enter your PIN Number: ");
        int pin =0;
        scanf("%d",&pin);

             // Incorrect Customer ID and Pin
        while(cust != 9958 && pin != 3345){
               printf("\nBoth Customer ID and PIN Incorrect........Try Again :\n");
               printf("\nEnter your Customer ID: ");
               scanf("%d",&cust);
               printf("Enter your PIN Number: ");
               scanf("%d",&pin);
                }

           // Incorrect Customer ID
        while(cust != 9958 ){
                printf("\nIncorrect Customer ID........Try Again :");
                printf("\nPIN Number:- 3345 \n");
                printf("Enter your Customer ID:- ");
                scanf("%d",&cust);  
            }
            // Incorrect PIN
        while(pin != 3345 ){
                printf("\nIncorrect PIN........Try Again :");
                printf("\nCustomer ID:- 9958\n");
                printf("Enter your PIN Number:- ");
                scanf("%d",&pin);
            }

         // Select Account Type
         printf("\nSelect the Account Type ");
         printf("\nType 1: Saving Account");
         printf("\nType 2: Exit");
         printf("\nChoice: ");
         int choice = 0;
         scanf("%d",&choice);
         
            // Invaild Choice
         while(choice !=1 && choice != 2){
            printf("\nInvaild Choice");
            printf("\nChoice: ");
            scanf("%d",&choice);
         }

          // Menu
         switch (choice) {
            case 1:{ 
               printf("\nwelcome Ajay Negi");
               printf("\nType 1: Account balance: Rs 1,00,000");
               printf("\nType 2: View Balance");
               printf("\nType 3: Withdrawal Funds");
               printf("\nType 4: Deposit Funds");
               printf("\nType 5: Exit");
               printf("\nChoice: ");

               //get choice from user 
               scanf("%d",&choice);

               //Invaild Choice
               while(choice !=1 && choice != 2 && choice != 3 && choice != 4 && choice != 5){
                   printf("\nInvaild Choice");
                   printf("\nChoice: ");
                   //get choice from user 
                   scanf("%d",&choice);
                   }
                   

               // Sub-Menu
               switch (choice) {
                   case 1: {//Account Details
                                   printf("\nType 1: Account Details");
                                   printf("\nunder process\ncheckout other detail");
                                   break;}

                   case 2: {//View Balance
                                   printf("\nYou Enter:- 2 View Balance");
                                   printf("\nBalance:  %d\n", b);
                                   break;}

                   case 3: {//Withdrawal Funds
                           printf("\nYou Enter:- 3 Withdrawal Funds");
                           printf("\nEnter the Withdrawal Amount:   ");
                           //get the withdrawl money from user
                           scanf("%d",&w);
                           //check whether the balance is greater than or equal to the withdrawal amount
                           while(w>b){  
                               printf("\nInsufficient Balance");
                               printf("\nEnter correct Withdrawal Amount:  ");
                               //get the withdrawl money from user
                               scanf("%d",&w);
                               }
                           //remove the withdrawl amount from the total balance
                           b = b-w;
                           printf("\nCurrent Balance:  %d\n", b);
                           printf("\nPlease collect your money.\nThanks For Visiting");
                                    
                           break;}

                   case 4: {//Deposit Funds
                           printf("\nYou Enter:- 4 Deposit Funds");
                           printf("\nEnter the Deposit Amount:-  ");
                           //get deposit amount from the user
                           scanf("%d",&d);
                           //add the deposit amount to the total balanace 
                           b = b+d;
                           printf("Your Money has been successfully depsited\nCurrent Balance:  %d\n",b );
                           break;}

                   case 5:{//Exit
                           printf("\nYou Enter:- 5\nExit ");
                           break;}}
               
               break;} // break of case 1 and 2
               case 2:{
                  printf("\nYou Enter:- 3\nExit ");
               break;
               }
         }


// *
// ' or 1=1--

   return 0;

}
