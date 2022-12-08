#include <stdio.h>

int main(){
    float total_amount,transfer,deposite,withdraw,cheak_balance;
    int pin,password,user_input;

    printf("enter your password to enter in your account\n");
    scanf("%d", &password);
    printf("Enter amount to create account\n");
    scanf("%f", &total_amount);
    printf("Enter 1 for check balance.\nEnter 2 for deposite.\nEnter 3 for withdraw.\nEnter 4 for transfer.\n");
    scanf("%d", &user_input);
    printf("Enter pin\n");
    scanf("%d", &pin);
     
    if (pin==password)
    {
    switch (user_input)
    {
    case 1:
       printf("Your total balance in your account is %f", total_amount);
        
        break;
    case 2:
        printf("Enter amount to deposite\n");
        scanf("%f", &deposite);
        float net_balance_after;
        net_balance_after = total_amount + deposite;
        printf("Net balance after deposite is %f", net_balance_after);
        break;
    case 3:
        printf("Enter amount to withdraw\n");
        scanf("%f", &withdraw);
        float balance_after_withdraw;
        balance_after_withdraw = total_amount - withdraw;
        printf("Net balance after withdraw %f", balance_after_withdraw);
        break;
    case 4:
        printf("Enter amount to tranfer\n");
        scanf("%f", &transfer);
        float balance_after_transfer;
        balance_after_transfer = total_amount - transfer;
        printf("Net balance after transfer is %f", balance_after_transfer);
        break;
    
    default:
         printf("Enter valid user input");
        break;
    }

    }
    else
    {
        printf("Your password is wrong. so repeat process again");
    }
   
}
