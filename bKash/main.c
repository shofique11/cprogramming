#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dialCode,choiceOption;
    double mainBalance = 12000.00;
    double sendAmount;
    double cashWithdraw;
    long int bkashNum;
    long int agentNum;
    long int bkashNumberList[3]={1727904010,1822121572,1737361151};
    printf("Enter dial code\n");
    scanf("%d", &dialCode);
    if(dialCode == 247){
        printf("Welcome to bKash\n");
        printf("1. Check balance\n");
        printf("2. Send Money\n");
        printf("3. Cash out\n");
        printf("4. Other services\n");
        scanf("%d",&choiceOption);
        if(choiceOption == 1){
            printf("Your account balance BDT:%f",mainBalance);
        }
        //send money option
        else if(choiceOption == 2)
        {
            // personal number input
            input:
            printf("Enter personal bkash account\n");
            scanf("%ld",&bkashNum);
            int flag =0;
            for(int i=0; i<3; i++)
            {
                //personal number verified
                if(bkashNum == bkashNumberList[i]){
                    printf("Verified the number\n");
                    flag++;
                    break;
                }
            }
            if(flag == 0)
            {

                goto input;
            }
        // Send amount
            printf("Enter amount\n");
            scanf("%lf",&sendAmount);

            //check and send
            if(sendAmount < mainBalance - 5.00)
            {
                 mainBalance = mainBalance - sendAmount;
                 printf("%.2f has been deducted from your account.\n Now your main balance is:%.2f",sendAmount,mainBalance);
                 return 1;
            }
            else
            {
                printf("Please check your balance");
            }
        }
        else if(choiceOption == 3){
            printf("Enter agent number\n");
            scanf("%ld",&agentNum);
            printf("Enter amount\n");
            scanf("%l=lf",&cashWithdraw);
            cashWithdraw = cashWithdraw + (cashWithdraw*2)/100;
            if(cashWithdraw < mainBalance){
                mainBalance = mainBalance - cashWithdraw;
                printf("%.2f has been deducted from your account.\n Now your main balance is:%.2f",cashWithdraw,mainBalance);
                return;
            }

        }
    }
    else{
        printf("Invalid dial code, try again\n");
    }
    return 0;
}
