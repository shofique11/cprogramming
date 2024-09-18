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
void last_details();
void divider();
void divider()
{
    for(int i=1; i<=50; i++)
    {
        printf("-");
    }
}
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
            system("cls");
            printf("***Depositing Money***\n");
            divider();
            deposit_money();
            break;
        case 2:
            system("cls");
            printf("***Withdraw Money***\n");
            divider();
            withdraw_money();
            break;
        case 3:
            system("cls");
            printf("***Transfer money***\n");
            divider();
            transfer_money();
            break;
        case 4:
            system("cls");
            printf("Account Details\n");
            break;
        case 5:
            system("cls");
            printf("***Transaction Details***\n");
            divider();
            transaction_details();
            break;
        case 6:
            system("cls");
            printf("\nExit from menu:\n");
            divider();
            last_details();
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
    divider();
    printf("\n 1.Deposit Money\n");
    printf("\n 2.Withdraw Money\n");
    printf("\n 3.Transfer Money\n");
    printf("\n 4.Account details\n");
    printf("\n 5.Transaction details\n");
    printf("\n 6.Exit\n");

}
void deposit_money()
{
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("Account.txt","a");
    printf("\nEnter your amount: \n");
    scanf("%d",&dip_amt);
    amt +=dip_amt;
    printf("MONEY DEPOSITING\n");
    divider();
    printf("\nCurrent balance : %d",amt);
    fprintf(ptr,"TK. %d had been deposited to your account\n", dip_amt);
    fprintf(ptr,"Date /time of transaction %s", ctime(&tm));
    fclose(ptr);
    getch();

}
void withdraw_money()
{
    time_t tm;
    time(&tm);
    FILE *fp = fopen("Account.txt","a");
    printf("\nEnter your amount:\n");
    scanf("%d", &with_amt);
    if(with_amt > amt)
    {
        printf("You don't have sufficient balance\n");
    }
    else
    {
        amt -=with_amt;
        printf("MONEY WITHDRAWING\n");
        divider();
        printf("\nCurrent balance %d",amt);
        fprintf(fp,"TK. %d had been withdraw from your account \n", with_amt);
        fprintf(fp,"Date /time of transaction %s", ctime(&tm));
        fclose(fp);
        getch();
    }
}
void transfer_money()
{
    int ac;
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("Account.txt","a");
    printf("\nEnter your amount: \n");
    scanf("%d", &trns_amt);
    if(trns_amt > amt)
    {
        printf("You don't have sufficient balance\n");
    }
    else
    {
        amt -=trns_amt;
        printf("\nMONEY TRANSFERING\n");
        divider();
        printf("\nCurrent balance %d",amt);
        fprintf(ptr,"TK. %d had been transfer from your account to %ac \n", trns_amt,ac);
        fprintf(ptr,"Date /time of transaction %s", ctime(&tm));
        fclose(ptr);
        getch();
    }
}

void transaction_details()
{
    FILE *ptr;
    // Open file in read mode
    ptr = fopen("Account.txt", "r");

    if (ptr == NULL)
    {
        // Check if file was opened successfully
        printf("Error: Could not open file 'deposit.txt'\n");
        return 1;  // Exit the program with an error code
    }

    char c = fgetc(ptr);

    // Check if the file is empty
    if (c == EOF)
    {
        printf("No efficient Transaction\n");
    }
    else
    {
        // Read and print the file content character by character
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(ptr);
        }
    }

    // Close the file
    fclose(ptr);

    // If you need to pause, you can use getchar() instead of getch()
    getchar();
}
void last_details()
{
    printf("\nName:%s\n",name);
    printf("Account no.%d\n",acc_no);
    printf("Current balance:%d\n",amt);
    printf("Press any key --------");
    getch();

}
