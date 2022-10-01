#include<stdio.h>
void main()
{
    srand(time(0));
    int me;
    int com = (rand()%3)+1;
    printf("Game Instructions:\n\n1 For Rock, 2 For Scissor and 3 for Paper\n");
    printf("\nPlease Enter Your Selection: ");
    scanf("%d", &me);

    if(me>=1 || me<4)
    {
        if(me ==1 && com ==1)
            printf("IT's A DRAW BITCH!\n(Rock vs Rock)\n");
        if(me ==1 && com ==2)
            printf("YOU WON BITCH!!\n(Rock vs Scissor)\n");
        if(me == 1 && com == 3)
            printf("Computer WINS BITCH!!!\n(Rock vs Paper)\n");

        if(me == 2 && com == 1)
            printf("Computer Wins BITCH!\n(Scissor vs Rock)\n");
        if(me == 2 && com == 2)
            printf("IT's A DRAW Bitch!!\n(Scissor vs Scissor)\n");
        if(me == 2 && com == 3)
            printf("Paper WINS BITCH!!!\n(Scissor vs Paper)\n");

        if(me == 3 && com == 1)
            printf("Paper WINS BITCH!\n(Paper vs Rock)\n");
        if(me == 3 && com == 2)
            printf("Computer WINS BITCH!!\n(Paper vs Scissor)\n");
        if(me == 3 && com == 3)
            printf("IT's A DRAW BITCH!!!\n(Paper vs Paper)\n");


    }
    else
    {
        printf("Invalid Parameter");
    }
}

