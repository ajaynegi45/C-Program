#include<stdio.h>

//  Calculation Function prototype
void user();
int sum(int x, int y);
int sub(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

//  calculation Function  Defination
int sum(int x, int y){
return x +y;
}
int sub(int x, int y){
return x-y;
}
int multiply(int x, int y){
return x*y;
}
int divide(int x, int y){
return x/y;
}
void user(){
    printf("\nEnter 1 for Add: ");
    printf("\nEnter 2 for Sub: ");
    printf("\nEnter 3 for Multiply: ");
    printf("\nEnter 4 for Divide ");
    printf("\nEnter your Choice: ");
}




//  Main Function starting
int main(){
    user();
    int choice = 0;
    scanf("%d",&choice);

    while(choice !=1 && choice !=2 && choice !=3 && choice !=4){
        printf("\nYou have enter worng choice: \n");
        user();
        scanf("%d",&choice);
    }

    int a =0 , b=0;
    printf("\nEnter the a: ");
    scanf("%d",&a);
    printf("Enter the b: ");
    scanf("%d",&b);


    switch (choice){
    case 1:
            printf("Answer is : %d\n\n",sum(a,b));
        break;

    case 2:
            printf("Answer is : %d\n\n",sub(a,b));
        break;

    case 3:
            printf("Answer is : %d\n\n",multiply(a,b));
        break;

    case 4:
            printf("Answer is : %d\n\n",divide(a,b));
        break;
    
    default:
    printf("You have done something worng ");
        break;
    }
}