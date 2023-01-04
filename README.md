# working-with-fork
This is a C program that creates up to 3 child processes using the fork() function.

Here is what the code does in detail:

- The program declares an integer variable `i` and sets it to 3.
- It then declares the main() function and defines a block of code to be executed.
- Inside the main() function, it declares two more integer variables `j and `p`. It sets `j` to 7 and `p` is not initialized.
- It enters a while loop that continues as long as `i` is not 0 and `p` is not 0.
- Inside the while loop, it calls the fork() function and assigns the returned value to `p`.
- If `p` is less than 0 (which indicates an error), the program terminates with an exit code of 1.
- If `p` is not less than 0, `i` is decremented by 1.
- After the while loop, `j` is incremented by 2 times `i`.
- The program then enters an if block that checks if `p` is equal to 0.
- If `p` is 0, it means that the code is being executed in a child process. In this case, `i` is multiplied by 3 and `j` is multiplied by 3.
- If `p` is not 0, it means that the code is being executed in the parent process. In this case, `i` is multiplied by 2 and `j` is multiplied by 2.
- Finally, the program prints out the values of `i` and `j` using the printf() function and returns 0 to indicate that the program terminated successfully.
