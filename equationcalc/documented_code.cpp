/*
 * File: main.c
 * Author: Syed Ahnaf Ahmad
 * Description: A simple equation solver program in C.
 */

#include <stdio.h>
#include <stdlib.h>
#include "solver.h" // Include the custom header file containing equation solving functions.

/*
 * Function: main
 * ----------------------------
 * Entry point of the program.
 * Provides a user interface for interacting with the equation solver functionalities.
 * Returns: 0 upon successful execution.
 */
int main() {
    char cmd, cmd1, cmd2; // Command variables for user input.

    // Welcome message and program information.
    printf("WELCOME TO EQUATION CALC!\nVersion Beta 1.0\nSolve any equations of up to the 3rd degree!\nEnjoy!\n\n");

    // Main loop for command processing.
    while(1) {
        // Prompt user for command.
        printf("Please enter a command ('h' for help):");
        scanf(" %c", &cmd);

        // Process user command.
        if (cmd == 'q' || cmd == 'Q') { // Quit command.
            system("cls"); // Clear console screen.
            printf("Bye! Have A Great Time!\n\nEquation Calc Beta 1.0\n");
            break; // Exit the program.
        }
        else if (cmd == 'm' || cmd == 'M') { // Easter egg command.
            printf("Muggle! Enter a valid input!\n");
            continue; // Continue to prompt for input.
        }
        else if (cmd == 'h' || cmd == 'H') { // Help command.
            printf("q = quit the program\nc = clear screen\ns = Start the program\n");
            continue; // Continue to prompt for input.
        }
        else if (cmd == 'c' || cmd == 'C') { // Clear screen command.
            system("cls"); // Clear console screen.
            continue; // Continue to prompt for input.
        }
        else if (cmd == 's' || cmd == 'S') { // Start program command.
            // Loop for equation solving section.
            while(1) {
                printf("What type of equation do you want to solve?\n 1~2\n'q' to go to home screen or 'c' to clear screen:");
                scanf(" %c", &cmd1);
                if (cmd1 == 'q' || cmd1 == 'Q') { // Quit to home screen command.
                    printf("Exiting to home screen. . . . \n");
                    break; // Exit to home screen.
                }
                else if (cmd1 == 'c' || cmd1 == 'C') { // Clear screen command.
                    system("cls"); // Clear console screen.
                    continue; // Continue to prompt for input.
                }
                else if (cmd1 == '1') { // Linear equation command.
                    printf("How many unknowns? 1~2:");
                    scanf(" %c", &cmd2);
                    if (cmd2 == '1') {
                        sol11(); // Solve linear equation with one unknown.
                    }
                    else if (cmd2 == '2') {
                        sol12(); // Solve system of linear equations with two unknowns.
                    }
                }
                else if (cmd1 == '2') { // Quadratic equation command.
                    sol21(); // Solve quadratic equation.
                }
            }
        }
        else {
            printf("Invalid input!\n"); // Invalid input command.
            continue; // Continue to prompt for input.
        }
    }

    return 0; // Successful execution.
}
