#include<iostream>

//  Calculation Function prototype
void user();
int sum(int x, int y);
int sub(int x, int y);

//  calculation Function  Defination
int sum(int x, int y){
return x +y;
}
int sub(int x, int y){
return x-y;
}
void user(){
    std::cout<<"\nEnter 1 for Add: ";
    std::cout<<"\nEnter 2 for Sub: ";
    std::cout<<"\nEnter your Choice: ";
}

//  Main Function starting
int main(){
    user();
    int choice = 0;
    std::cin>>choice;

    while(choice !=1 && choice !=2){
        std::cout<<"\nYou have enter worng choice: \n";
        user();
        std::cin>>choice;
    }

    int a =0 , b=0;
    std::cout<<"\nEnter the a: ";
    std::cin>>a;
    std::cout<<"Enter the b: ";
    std::cin>>b;


    switch (choice){
    case 1:
            std::cout<<"Answer is : "<<sum(a,b)<<std::endl;
        break;

    case 2:
            std::cout<<"Answer is : "<<sub(a,b)<<std::endl;
        break;
    
    default:
    std::cout<<"You have done something worng ";
        break;
    }
}
