#include <stdio.h>
#include <string.h>

//The function to produce the Collatz Conjecture
  void collatz(int num) {
	  if(num < 1){
		printf("%d is not a positive integer \n", num);
	  }else if (num == 1) {
            printf("%d \n", num);
        } else if (num % 2 == 0) {
            num /= 2;
            collatz(num);
        } else {
            num = (3 * num) + 1;
            collatz(num);
        }
    }

//The executable program
	  void main(void) {
	//initialize variables
		char str[16];
		char extra[16];
		int quit = 1;
		int count = 0;
		int check = 0;
		int intNum =0;
        float numOne = 0;
        float numTwo = 0;

		printf("Calculator: \n");
		
		while(quit){
			
			//get the input from the user
			fgets(str, 16, stdin);
			
//Addition branch
			//check if the user wrote "sum "
			if(strncmp(str,"sum ", 4) ==0){
				
				//count if there was two floats typed in
				count = sscanf(str,"%*s %f %f",&numOne,&numTwo);
				//make sure nothing is typed after the two floats
				check = sscanf(str,"%*s %f %f %s",&numOne,&numTwo,extra);
				
				//If the command is formatted correctly
				if(count ==2 && check !=3){
					
					printf("%.2f \n", (numOne + numTwo));
					count =check = numOne = numTwo = 0;
				//If the command isn't formatted correctly	
				}else{
					
					printf("Please use two numbers as parameters \n");
					
				}
			
//Subtraction Branch
			//check if the user wrote "sub "
			}else if(strncmp(str,"sub ", 4) ==0){
				
				//count if there was two floats typed in
				count = sscanf(str,"%*s %f %f",&numOne,&numTwo);
				//make sure nothing is typed after the two floats
				check = sscanf(str,"%*s %f %f %s",&numOne,&numTwo,extra);
				
				//If the command is formatted correctly
				if(count ==2 && check !=3){
					
					printf("%.2f \n", (numOne - numTwo));
					count =check = numOne = numTwo = 0;
				
				//If the command isn't formatted correctly
				}else{
					
					printf("Please use two integers as parameters \n");
					
				}
//Multiplication Branch	
			//check if the user wrote "mul "
			}else if(strncmp(str,"mul ", 4) ==0){
				
				//count if there was two floats typed in
				count = sscanf(str,"%*s %f %f",&numOne,&numTwo);
				//make sure nothing is typed after the two floats
				check = sscanf(str,"%*s %f %f %s",&numOne,&numTwo,extra);
				
				//If the command is formatted correctly
				if(count ==2 && check !=3){
					
					printf("%.2f \n", (numOne * numTwo));
					count =check = numOne = numTwo = 0;
				
				//If the command isn't formatted correctly
				}else{
					
					printf("Please use two numbers as parameters \n");
					
				}
//Division Branch	
			//check if the user wrote "div "
			}else if(strncmp(str,"div ", 4) ==0){
				
				//count if there was two floats typed in
				count = sscanf(str,"%*s %f %f",&numOne,&numTwo);
				//make sure nothing is typed after the two floats
				check = sscanf(str,"%*s %f %f %s",&numOne,&numTwo,extra);
				
				//If the command is formatted correctly
				if(count ==2 && check !=3){
					
					//Check if we're dividng by zero
					if(numTwo != 0){
					
					printf("%.3f \n", (numOne/numTwo));
					count =check = numOne = numTwo = 0;
				
					}else{
						printf("Divide by Zero Error!\n");
					}
				//If the command isn't formatted correctly
				}else{
					
					printf("Please use two numbers as parameters\n");
					
				}
//Collatz Conjecture Branch
			//check if the user wrote "col "
			}else if(strncmp(str,"col ", 4) ==0){
				
				//count if there was one int typed in
				count = sscanf(str,"%*s %d",&intNum);
				//make sure nothing is typed after the int
				check = sscanf(str,"%*s %d %s",&intNum, extra);
				
				//If the command is formatted correctly
				if(count == 1 && check !=2){
					
				collatz(intNum);
				count = check = intNum =0;
				
				//If the command isn't formatted correctly
				}else{
					
					printf("Please use one integer as a parameter\n");
					
				}
//Bye Branch
			//check if the user wrote "bye"
			}else if(strncmp(str,"bye", 3) ==0){
				
				quit = 0;
			
//If the user types anything else			
			}else{
				printf("Invalid command, please try again\n");
			}
			
		}
		
		printf("Bye, have a nice day!\n");
		  
	  }