#include <stdio.h>

//simple calculator
int main(void)
{
    int x, y, result = 0;
    char opt;

    //input two numbers
    printf("Enter a value of x => ");
    scanf("%d", &x);
    printf("Enter a value of y => ");
    scanf("%d", &y);

    //input operator
    fflush(stdin);
    printf("Operator =>");
    scanf("%c", &opt);

    //check the operator
    switch (opt)
    {
        case '+':  //add it
            result = x + y; break;
		
		//Changes
		case '-' //subtracts
			result = x - y; break; 
    }

    //print the result
    printf("Result => %d", result);

    return 0;
}
