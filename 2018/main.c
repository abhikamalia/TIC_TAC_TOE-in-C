#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int k , i , j  , position , compare;
    char ox ;
    char again[20];
    char design[5][8] = {{"  |  |  "} , {"__ __ __"} , {"  |  |  "} , {"__ __ __"} , {"  |  |  "}};

    /*
     	A for loop is applied to make a two dimensional structure....
    */
    printf("\n\n\n");
    printf("---------------------------C - TIC TAC TOE--------------------------------------\n\n\n");
    printf("------------------------A Non Graphical Game------------------------------------\n\n\n");
    for(i=0;i<=4;i++)
    {
        for(j=0 ; j<=7 ; j++)
        {
            printf("%c" , design[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");



/*
	Here again a for loop is applied to make the computer take the same input several times........
*/
    k=0;
    while(k<10)
    {
		printf("choose (o or x)");
		printf("=> ");
        scanf("%c" , &ox);
        if(ox == 'o')
        {
            printf("Enter the position...\n");
            printf("==> ");
            scanf("%d" , &position);
            if(position == 1)
            {
                design[0][0] = 'o';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 2)
            {
                design[0][3] = 'o';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 3)
            {
                design[0][6] = 'o';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 4)
            {
                design[2][0] = 'o';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 5)
            {
                design[2][3] = 'o';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 6)
            {
                design[2][6] = 'o';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 7)
            {
                design[4][0] = 'o';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 8)
            {
                design[4][3] = 'o';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 9)
            {
                design[4][6] = 'o';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
        }
        if(ox == 'x')
        {
            printf("Enter the position...\n");
            printf("==> ");
            scanf("%d" , &position);
            if(position == 1)
            {
                design[0][0] = 'x';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 2)
            {
                design[0][3] = 'x';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 3)
            {
                design[0][6] = 'x';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 4)
            {
                design[2][0] = 'x';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 5)
            {
                design[2][3] = 'x';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 6)
            {
                design[2][6] = 'x';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 7)
            {
                design[4][0] = 'x';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 8)
            {
                design[4][3] = 'x';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
            if(position == 9)
            {
                design[4][6] = 'x';
                for(i=0 ; i<=4 ; i++)
                {
                    for(j=0 ; j<=7 ; j++)
                    {
                        printf("%c" , design[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");

            }
        }
        //This are  the pattern or ways the player can win the game........
        if((design[0][0] == 'o' && design[0][3] == 'o' && design[0][6] == 'o') || (design[2][0] == 'o' && design[2][3] == 'o' && design[2][6] == 'o') || (design[4][0] == 'o' && design[4][3] == 'o' && design[4][6] == 'o') || (design[0][0] == 'o' && design[2][0] == 'o' && design[4][0] == 'o') || (design[0][3] == 'o' && design[2][3] == 'o' && design[4][3] == 'o') || (design[0][6] == 'o' && design[2][6] == 'o' && design[4][6] == 'o') || (design[0][0] == 'o' && design[2][3] == 'o' && design[4][6] == 'o') || (design[0][6] == 'o' && design[2][3] == 'o' && design[4][0] == 'o'))
        {
            printf("'o' wins ...\n\n");
            printf("Do you wanna play the game again...??\n\n");
            scanf("%s" , again);
            compare = strcmp(again , "yes");
            if(compare == 0)
            {
            	printf("Here you go....\n\n");
                main();         //This actually calls the main function to start the game again...........
            }
            else
            {
                printf("Thanks for playing...n\n\n");
                break;     //This breaks the whole loop and terminates the program............
            }
        }
        if((design[0][0] == 'x' && design[0][3] == 'x' && design[0][6] == 'x') || (design[2][0] == 'x' && design[2][3] == 'x' && design[2][6] == 'x') || (design[4][0] == 'x' && design[4][3] == 'x' && design[4][6] == 'x') || (design[0][0] == 'x' && design[2][0] == 'x' && design[4][0] == 'x') || (design[0][3] == 'x' && design[2][3] == 'x' && design[4][3] == 'x') || (design[0][6] == 'x' && design[2][6] == 'x' && design[4][6] == 'x') || (design[0][0] == 'x' && design[2][3] == 'x' && design[4][6] == 'x') || (design[0][6] == 'x' && design[2][3] == 'x' && design[4][0] == 'x'))
        {
            printf("'x' wins ...\n");
            printf("Do you wanna play the game again...??\n\n");
            scanf("%s" , again);
            compare = strcmp(again , "yes");
            if(compare == 0)
            {
            	printf("Here you go...\n\n");
                main();
            }
            else
            {
                break;
            }
        }

    }




    return 0;
}
