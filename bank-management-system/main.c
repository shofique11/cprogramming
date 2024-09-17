#include <stdio.h>
#include <stdlib.h>

char name[20];
int dip_amt,amt =10000, acc_no, choice,with_amt,trns_amt;
void menu();
void deposit_money();
void withdraw_money();
void transfer_money();
void account_details();
void transaction_details();
int main()
{
    printf("Enter your name: \n");
    gets(name);
    printf("Enter your account no. : \n");
    scanf("%d",&acc_no);
    while(1)
    {
        menu();
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Depositing Money\n");
            deposit_money();
            break;
        case 2:
            printf("Withdraw Money\n");
            withdraw_money();
            break;
        case 3:
            printf("Transfer money\n");
            transfer_money();
            break;
        case 4:
            printf("Account Details\n");
            break;
        case 5:
            printf("Transfer Details\n");
            break;
        case 6:
            printf("Exit from menu:\n");
            exit(1);
            break;
        default:
            printf("Invalid option\n");
        }
    }
    return 0;
}
void menu()
{
    printf("\nMAIN MENU\n");
    printf("1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.Transfer Money\n");
    printf("4.Account details\n");
    printf("5.Transaction details\n");
    printf("6.Exit\n");

}
void deposit_money()
{
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("deposit.text","a");
    printf("Enter your amount: \n");
    scanf("%d",&dip_amt);
    amt +=dip_amt;
    printf("MONEY DEPOSITING\n");
    printf("Current balance : %d",amt);
    fprintf(ptr,"TK. %d had been deposited to your account\n", dip_amt);
    fprintf(ptr,"Date /time of transaction %s", ctime(&tm));
    getch();

}
void withdraw_money()
{
    time_t tm;
    time(&tm);
    FILE *fp = fopen("withdraw.txt","a");
    printf("Enter your amount:\n");
    scanf("%d", &with_amt);
    if(with_amt > amt)
    {
        printf("You don't have sufficient balance\n");
    }
    else
    {
        amt -=with_amt;
        printf("MONEY WITHDRAWING\n");
        printf("Current balance %d",amt);
        fprintf(fp,"TK. %d had been withdraw from your account \n", with_amt);
        fprintf(fp,"Date /time of transaction %s", ctime(&tm));
        getch();
    }
}
void transfer_money()
{
    int ac;
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("transfer.txt","a");
    printf("Enter your amount: \n");
    scanf("%d", &trns_amt);
    if(trns_amt > amt)
    {
        printf("You don't have sufficient balance\n");
    }
    else
    {
        amt -=trns_amt;
        printf("MONEY TRANSFERING\n");
        printf("Current balance %d",amt);
        fprintf(ptr,"TK. %d had been transfer from your account to %ac \n", trns_amt,ac);
        fprintf(ptr,"Date /time of transaction %s", ctime(&tm));
        fclose(ptr);
        getch();
    }
}
