#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ans;
    int point1,point2,point3,point4,point5;
    int point01,point02,point03,point04,point05;
    int total1 = 0,total2=0,total3 = 0;
    printf("Welcome to the game\n\n");
    printf(">Press 7 to start the game\n\n");
    printf(">Press 0 to end of the game\n\n");
    scanf("%d",&i);
    if(i==7)
    {
        printf("The game has started\n");
    }
    else if(i ==0)
    {
        printf("The game has ended\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
    if(i == 7)
    {
        printf("1) Which one is the first search engine\n\n");
        printf("(1) Google\n");
        printf("(2) Yahoo\n");
        printf("(3) Bring\n");
        printf("(4) ChatGPT\n");
        printf("Enter your answer\n");
        scanf("%d",&ans);
        if(ans == 2){
            printf("Correct answer\n");
            point1 = 5;
            printf("Your scored %d point\n",point1);
        }
        else
        {
            printf("Wrong answer\n");
            point01 = 0;
            printf("Your scored %d point", point01);
        }
        printf("2) Which in the first invented web browser ?\n");
        printf("(1) Mozila firfox\n");
        printf("(2) Google chrome\n");
        printf("(3) Internet Explore\n");
        printf("(4) Brave\n");
        printf("Enter your answer\n");
        scanf("%d",&ans);
        if(ans == 3)
        {
            printf("Correct answer\n");
            point2 = 5;
            printf("You have scored %d point\n",point2);

        }
        else
        {
            printf("Wrong answer\n");
            point02 = 0;
            printf("Your scored %d point", point02);
        }

        printf("3) First computer known as?\n");
        printf("(1) Rabbit\n");
        printf("(2) Creeper Virus\n");
        printf("(3) E1k Cloner\n");
        printf("(4) SCA Virus\n");
        printf("Enter your answer\n");
        scanf("%d",&ans);
        if(ans == 2)
        {
            printf("Correct answer\n");
            point3 = 5;
            printf("You have scored %d point\n",point3);

        }
        else
        {
            printf("Wrong answer\n");
            point03 = 0;
            printf("Your scored %d point", point03);
        }

        printf("4) Firewall in computer is used for ?\n");
        printf("(1) Security\n");
        printf("(2) Data Transmission\n");
        printf("(3) Monitoring\n");
        printf("(4) Authintication\n");
        printf("Enter your answer\n");
        scanf("%d",&ans);
        if(ans == 1)
        {
            printf("Correct answer\n");
            point4 = 5;
            printf("You have scored %d point\n",point4);

        }
        else
        {
            printf("Wrong answer\n");
            point04 = 0;
            printf("Your scored %d point", point04);
        }
        printf("4) Which of the flowing is not database software management ?\n");
        printf("(1) Mysql\n");
        printf("(2) Oracle\n");
        printf("(3) Sybase\n");
        printf("(4) Cobal\n");
        printf("Enter your answer\n");
        scanf("%d",&ans);
        if(ans == 4)
        {
            printf("Correct answer\n");
            point5 = 5;
            printf("You have scored %d point\n",point5);

        }
        else
        {
            printf("Wrong answer\n");
            point05 = 0;
            printf("Your scored %d point", point05);
        }
         total1 = total1 + point1 + point2 + point3 + point4 + point5;
         printf("Your scored total: %d point", total1);

    }

    return 0;
}
