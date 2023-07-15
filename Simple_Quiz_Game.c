#include<stdio.h>

int main()
{
    int i; // Variable to store the user's menu choice
    int ans1, ans2, ans3, ans4, ans5; // Variables to store the user's answers
    int point1, point2, point3, point4, point5; // Variables to store the points for each question
    int total1, total2, total3; // Variables to store the total scores

    printf(" Welcome to the Game \n\n Please provide the answers as 1 , 2 , 3 ,etc.\n\n");
    printf("> Press 7 to Start the Game\n");
    printf("> Press 0 to Quit the Game\n");

    scanf("%d", &i);

    // Check if user wants to start the game
    if(i == 7)
    {
        printf("The game has Started\n\n");
    }
    else if(i == 0)
    {
        printf("The game has Ended\n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }

    // Start the game
    if(i == 7)
    {
        printf("Q.1.) Which one is the first search engine on the Internet?\n\n");
        printf("A. Google\n");
        printf("B. Archie\n");
        printf("C. Wais\n");
        printf("D. Altavista\n");

        printf("Enter your Answer : ");
        scanf("%d", &ans1);
        
        if(ans1 == 2)
        {
            printf("Correct Answer\n");
            point1 = 5;
            printf("You have scored %d points \n", point1);
        }
        else
        {
            printf("Wrong Answer\n");
            point1 = 0;
            printf("You have scored %d points\n", point1);
        }
    
        // Question 2
        printf("Q.2.) Which one is the first Web Browser invented in 1990?\n\n");
        printf("A. Internet Explorer \n");
        printf("B. Mosaic\n");
        printf("C. Mozilla\n");
        printf("D. Nexus\n");

        printf("Enter your Answer : ");
        scanf("%d", &ans2);
        
        if(ans2 == 4)
        {
            printf("Correct Answer\n");
            point2 = 5;
            printf("You have scored %d points \n", point2);
        }
        else
        {
            printf("Wrong Answer\n");
            point2 = 0; 
            printf("You have scored %d points\n", point2);
        }

        // Question 3
        printf("Q.3.) First Computer ever found is known as ?\n\n");
        printf("A. Rabbit\n");
        printf("B. Creeper Virus\n");
        printf("C. Elk Cloner\n");
        printf("D. SCA Virus\n");

        printf("Enter your Answer : ");
        scanf("%d", &ans3);
        
        if(ans3 == 2)
        {
            printf("Correct Answer\n");
            point3 = 5;
            printf("You have scored %d points \n", point3);
        }
        else
        {
            printf("Wrong Answer\n");
            point3 = 0; 
            printf("You have scored %d points\n", point3);
        }

        // Question 4
        printf("Q.4.) Firewall in a Computer is used for ?\n\n");
        printf("A. Security \n");
        printf("B. Data Transmission\n");
        printf("C. Monitoring\n");
        printf("D. Authentication\n");

        printf("Enter your Answer : ");
        scanf("%d", &ans4);
        
        if(ans4 == 1)
        {
            printf("Correct Answer\n");
            point4 = 5;
            printf("You have scored %d points \n", point4);
        }
        else
        {
            printf("Wrong Answer\n");
            point4 = 0; 
            printf("You have scored %d points\n", point4);
        }

        // Question 5
        printf("Q.5.) Which of the following is not a Database management software ?\n\n");
        printf("A. MySQL \n");
        printf("B. Oracle\n");
        printf("C. Cobol\n");
        printf("D. Sybase\n");

        printf("Enter your Answer : ");
        scanf("%d", &ans5);
        
        if(ans5 == 3)
        {
            printf("Correct Answer\n");
            point5 = 5;
            printf("You have scored %d points \n", point5);
        }
        else
        {
            printf("Wrong Answer\n");
            point5 = 0; 
            printf("You have scored %d points\n", point5);
        }
    }

    // Calculate the total score
    total1 = point1 + point2 + point3 + point4 + point5;

    // Check if the total score is not zero
    if(total1 != 0)
    {
        printf("\n\nYour Total Score is: %d\n\n", total1);
    /*if & is used with total1 like - &total1 it will provide the address of the variable total1 and will not pass it's value*/
    }
    else if(total1 == 0)
    {
        printf("Your Score is 0\n\n");
    }
    
    printf("Thank you for playing\n\n");
    return 0;
}
