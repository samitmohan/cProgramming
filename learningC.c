// C programming

#include <stdio.h>
#include <math.h>

// 2D array

int nestedarray() {
    int nums[3][2] = {                 // 3 arrays with 2 elements in them each 
                    {1,2},
                    {3,4},
                    {5,6}

                     };
                     
    printf("%d", nums[0][0]);
    
    int a,b;
    for (a = 0; a < 3; a++)            // bcs there are 3 arrays
    {   
        for (b = 0; b < 2; b++)
        {
           printf("%d,", nums[a][b]);  // bcs each array contains 2 elements
        }
        printf("\n");
    }
    
}

// Switch Case (works like if else but specific comparision)

int switchcase() {
    char grade = 'F';
    switch (grade)
    {
    case 'A':
        printf("You did great! ");
        break;
    case 'B':
        printf("You did alright! ");
    case 'C':
        printf("You did poorly ");
    case 'D':
        printf("You did very poorly ");
    case 'F':
        printf("You failed ");
    default:     // works like an else statment
        return 0;                     
      
    }
}

// Loops

void forloops() {
    int i;
    int count;
    printf("Enter number upto which you want to print numbers : ");
    scanf("%d", &count);
    for (i = 0; i <= count; i++)        // or i <=5 (could've done this manually as well)
    {
        printf("%d\n", i);
    }
    int num[] = {4,5,6,7,8,34}; // looping through an array
    int j;
    for (j = 0; j < 6; j++)
    {
        printf("%d\n", num[j]);
    }
    
    // In general use more of for loops, unless forced to use a while loop.

}
void whileloops() {
    int index = 1;
    while (index <=5)
    {
        printf("%d\n", index);
        index++;               // index = index + 1 increment        
            
    }

}
void guessgame() {
    // while loop
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;            // user gets only 3 guesses
    int outOfGuesses = 0;

    while (guess != secretNumber && outOfGuesses == 0)
    {
        
        if (guessCount < guessLimit)
        {
            printf("Enter a number : ");
            scanf("%d", &guess);
            guessCount++;
        }
        else
        {
            outOfGuesses = 1;        // flag variable (TRUE [ outofguesses ])
        }
          
        
    }
    if (outOfGuesses == 1)
    {
        printf("Out of guesses! ");
    }
    else
    {
        printf("You Win! ");
    }
  

}

// Return Functions

double cube(double num) {
    double result = num * num * num;
    return result; // RETURN BREAKS US OUT OF THE FUNCTION, cant do anytthing after the return function
    //return num * num * num; (both print the same thing)
 
}

// if else

int max(int num1, int num2, int num3) {
    int result;
    if (num1 >= num2 && num1 >= num3)          // and operator
    {
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3) 
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    
    
    return result;
    
}
// Pointers (Memory Address) Its a type of data {physical memory address}
// pointers are usually named like this * pName 
// Pointer variable is storing the memory variable of age variable


void pointers() {
    int agee = 18;
    int * pAge = &agee;    
    printf ("Age's memory address : %p\n", pAge); 
    // Dereferencing a pointer (Getting the original val)
    printf("Original Age :  %d\n", *pAge);
    // & for pointers and getting memory address. * for dereferencing and getting original value
    



}

// Creating Reading Writing files
int files() {
    FILE * fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, "Samit, Student\n Namit, Lawyer");
    // can use "a" to append to a file.
    // to read use fgets()
    fclose(fpointer);
    return 0;

}


// Main + Misc 

int main() {
    char name[] = "Samit";                // string a bunch of characters, string = "", char = '' (char = only 1 letter{for example grade})
    int age = 18;
    printf("My favourite %s is %d \n", "number", 29);
    printf("%f\n", sqrt(36)); 

    // constants = values that cant be changed
    const int NUM = 5; // now you cant change num = 8; 
    printf("%d \n", NUM); // good practice is to name constants in CAPS so you know they cant be changed

    // getting input from user
    double gpa;                            
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %lf \n", gpa);

    // dont use &(assign) for strings
    char samit[20];
    printf("Enter Name : ");
    scanf("%s", samit);
    printf("Your name is ; %s\n", samit);

	// Arrays []

	int luckyNumbers[] = {4,5,23,244,1421,12};
	luckyNumbers[1] = 200;
	printf("first edited element of array ; %d\n", luckyNumbers[1]);

	// we can also assign numbers later by int luckyNumbers[10] (10 numbers)
	// and then luckyNumbers[0] = 1, luckyNumbers[1] = 3, and so on (manually)


    //Calling Functions


    //nestedarray();
    //printf("Answer : %f \n", cube(3.0));
    //printf("Greater Number : %d \n",max(32,2,3));
    //switchcase();
    //guessgame();
    //forloops();
    //whileloops();
    //pointers();
    //files();
    return 0;    

}

