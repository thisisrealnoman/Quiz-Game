#include <stdio.h>

int main(){

    int point=0;

    printf("*** WELCOME TO THE QUIZ GAME ***\n\n");
    printf("Answer the following question: \n");

    // First Question
    printf("Q1: Which of the following is a markup language used to create web pages and define their structure?\n");
    printf("a) HTML\n");
    printf("b) Java\n");
    printf("c) Python\n");
    printf("d) CSS\n");

    char q1;
    printf("Enter your answer: ");
    scanf(" %c", &q1);

    if(q1 == 'a' || q1 == 'A'){
        point++;
    }

    // Second Question
    printf("\nQ2: What does the acronym 'URL' stand for?\n");
    printf("a) Universal Resource Locator\n");
    printf("b) United Real Language\n");
    printf("c) Ultimate Responsive Layout\n");
    printf("d) User Registration Link\n");

    char q2;
    printf("Enter your answer: ");
    scanf(" %c", &q2);

    if(q2 == 'a' || q2 == 'A'){
        point++;
    }

    // Third Question
    printf("\nQ3: What is the symbol used to represent the division operation in programming?\n");
    printf("a) +\n");
    printf("b) -\n");
    printf("c) *\n");
    printf("d) /\n");

    char q3;
    printf("Enter your answer: ");
    scanf(" %c", &q3);

    if(q3 == 'd' || q3 == 'D'){
        point++;
    }

    // Fourth Question
    printf("\nQ4: Which of the following is an example of a programming loop?\n");
    printf("a) Keyboard\n");
    printf("b) Mouse\n");
    printf("c) Monitor\n");
    printf("d) For\n");

    char q4;
    printf("Enter your answer: ");
    scanf(" %c", &q4);

    if(q4 == 'd' || q4 == 'D'){
        point++;
    }

    // Fifth Question
    printf("\nQ5: What is the purpose of a conditional statement in programming?\n");
    printf("a) To repeat a block of code multiple times\n");
    printf("b) To store and organize data\n");
    printf("c) To perform mathematical operations\n");
    printf("d) To make decisions based on a condition\n");

    char q5;
    printf("Enter your answer: ");
    scanf(" %c", &q5);

    if(q5 == 'd' || q5 == 'D'){
        point++;
    }

    // Sixth Question
    printf("\nQ6: Which programming construct allows you to store and manipulate a collection of data?\n");
    printf("a) Function\n");
    printf("b) Variable\n");
    printf("c) Array\n");
    printf("d) Statement\n");

    char q6;
    printf("Enter your answer: ");
    scanf(" %c", &q6);

    if(q6 == 'c' || q6 == 'C'){
        point++;
    }

    // Seventh Question
    printf("\nQ7: What is the file extension for a Python program file?\n");
    printf("a) .py\n");
    printf("b) .txt\n");
    printf("c) .doc\n");
    printf("d) .exe\n");

    char q7;
    printf("Enter your answer: ");
    scanf(" %c", &q7);

    if(q7 == 'a' || q7 == 'A'){
        point++;
    }

    // Eighth Question
    printf("\nQ8: What is the output of the following code snippet?\n");
    printf("\nx = 5 \ny = 2 \nresult = x + y \nprint(result)\n\n");
    printf("a) 7\n");
    printf("b) 52\n");
    printf("c) 25\n");
    printf("d) error\n");

    char q8;
    printf("Enter your answer: ");
    scanf(" %c", &q8);

    if(q8 == 'a' || q8 == 'A'){
        point++;
    }

    // Ninth Question
    printf("\nQ9: Which of the following is a popular coding platform for learning programming?\n");
    printf("a) GitHub\n");
    printf("b) Facebook\n");
    printf("c) Scratch\n");
    printf("d) Twitter\n");

    char q9;
    printf("Enter your answer: ");
    scanf(" %c", &q9);

    if(q9 == 'c' || q9 == 'C'){
        point++;
    }

    // I have no idea what I'm doing, but it seems to work, so...
    printf("\nQ10: What is the purpose of debugging in programming?\n");
    printf("a) To remove all comments from the code\n");
    printf("b) To test the code and fix errors\n");
    printf("c) To optimize the code for performance\n");
    printf("d) To create backups of the code\n");

    char q10;
    printf("Enter your answer: ");
    scanf(" %c", &q10);

    if(q10 == 'b' || q10 == 'B'){
        point++;
    }

    printf("\n\nQuiz finished!\n");
    printf("Your score: %d/10\n", point);

    return 0;
}
