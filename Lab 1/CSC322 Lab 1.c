
#include <stdio.h>

  void collatz(int num) {
        printf("%d, ", num);
        if (num == 1) {
            printf("\n");
        } else if (num % 2 == 0) {
            num /= 2;
            collatz(num);
        } else {
            num = (3 * num) + 1;
            collatz(num);
        }
    }

    void main(void) {

        char str[3];
  int quit = 0;
        int numOne = 0;
        int numTwo = 0;

        while (quit == 0) {

            scanf("%s %d %d",  & str,  & numOne,  & numTwo);

            //printf ("String: %s \n", str);
            //printf ("Number1: %d \n", numOne);
            //printf ("Number2: %d \n", numTwo);
            if (str[0] == 's' && str[1] == 'u' && str[2] == 'm') {

                printf("%d \n", numOne + numTwo);

            } else if (str[0] == 's' && str[1] == 'u' && str[2] == 'b') {

                printf("%d \n", numOne - numTwo);

            } else if (str[0] == 'm' && str[1] == 'u' && str[2] == 'l') {

                printf("%d \n", numOne * numTwo);

            } else if (str[0] == 'd' && str[1] == 'i' && str[2] == 'v') {

                if (numTwo == 0) {

                    printf("Divide by Zero Error \n");

                } else {

                    int div = (numOne / numTwo);
                    printf("%d \n", div);

                }
            } else if (str[0] == 'c' && str[1] == 'o' && str[2] == 'l') {

                collatz(numOne);

            } else if (str[0] == 'b' && str[1] == 'y' && str[2] == 'e') {

                quit = 1;

            } else {
                printf("I do not understand, please try again");
            }
        }

        printf("Bye, have a nice day!");
    }

