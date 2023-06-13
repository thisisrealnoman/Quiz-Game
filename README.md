# Quiz-Game

The given code is a simple quiz game written in C. It tests the user's knowledge on various programming and web development concepts. Let's go through the code step by step:

1. The code starts with including the standard input/output library `stdio.h`.

2. The `main()` function is defined, which is the entry point of the program.

3. The `point` variable is declared and initialized to 0. This variable will keep track of the user's score.

4. The code then displays a welcome message and prompts the user to answer a series of questions.

5. Each question is displayed using `printf()` statements, providing multiple-choice options for the user to select their answer.

6. After displaying each question, the code prompts the user to enter their answer using `scanf()`.

7. The user's answer is stored in a character variable specific to each question (e.g., `q1` for the first question, `q2` for the second question, and so on).

8. Each time the user enters an answer, the code checks if the answer is correct by comparing the user's input (converted to lowercase) with the correct answer. If the answer is correct, the `point` variable is incremented.

9. This process repeats for each of the ten questions, incrementing the score (`point`) when the user's answer matches the correct answer.

10. Finally, after all the questions have been answered, the code displays the quiz results, showing the user's score out of 10.

11. The `main()` function returns 0 to indicate successful execution of the program.

This code provides a basic structure for a quiz game and can be expanded upon to include more questions or additional functionality.
