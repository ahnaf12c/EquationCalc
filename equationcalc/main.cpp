#include<stdio.h>
#include<stdlib.h>
#include"solver.h"

int main()
{
    char cmd, cmd1, cmd2;
    printf("WELCOME TO EQUATION CALC!\nVersion Beta 1.0\nSolve any equations of upto the 3rd degree!\nEnjoy!\n\n");

    while(1) {
        printf("Please enter a command ('h' for help):");
        scanf(" %c", &cmd);
        if (cmd == 'q' || cmd == 'Q') {
            system("cls");
            printf("Bye! Have A Great Time!\n\nEquation Calc Beta 1.0\n");
            break;
        }

        else if (cmd == 'm' || cmd == 'M') {
            printf("Muggles! Enter a valid input!\n");
            continue;
        }

        else if (cmd == 'h' || cmd == 'H') {
            printf("q = quit the program\nc = clear screen\ns = Start the program\n");
            continue;
        }

        else if (cmd == 'c' || cmd == 'C') {
            system("cls");
            continue;
        }

        else if (cmd == 's' || cmd == 'S') {
            while(1) {
                printf("What type of equation do you want to solve?\n 1~2\n'q' to go to home screen or 'c' to clear screen:");
                scanf(" %c", &cmd1);
                if (cmd1 == 'q' || cmd1 == 'Q') {
                    printf("Exiting to home screen. . . . \n");
                    break;
                }

                else if (cmd1 == 'c' || cmd1 == 'C') {
                    system("cls");
                    continue;
                }

                else if (cmd1 == '1') {
                    printf("How many unknowns? 1~2:");
                    scanf(" %c", &cmd2);
                    if (cmd2 == '1') {
                        sol11();
                    }
                    else if (cmd2 == '2') {
                        sol12();
                    }
                }

                else if (cmd1 == '2') {
                    sol21();
                }
            }
        }

        else {
            printf("Invalid input!\n");
            continue;
        }
    }

    return 0;
}
