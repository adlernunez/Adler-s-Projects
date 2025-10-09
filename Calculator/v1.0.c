/*Basic calculator by Adler Nunez
  In continuous development 
  version 1.0 - 9/10/2025*/

#include <stdio.h>
#include <string.h>

float add(float x, float y);
float sub(float x, float y);
float mul(float x, float y);
float div(float x, float y);
int out(float x,char character,float y,float z);

int main(){
    /*********************************/
    char character;
    int c;
    float a,b, output, result;

    /*********************************Calc draw*/
  


    /*********************************Input integers*/

      printf("\n+---------------+\n");
        printf("                 \n", result);
        printf("+---------------+\n");
        printf("| _ | _ | _ | _ |\n");
        printf("| 7 | 8 | 9 | + |\n");
        printf("| _ | _ | _ | _ |\n");
        printf("| 4 | 5 | 6 | - |\n");
        printf("| _ | _ | _ | _ |\n");
        printf("| 1 | 2 | 3 | * |\n");
        printf("| _ | _ | _ | _ |\n");
        printf("| 0 | . | = | / |\n");
        printf("| _ | _ | _ | _ |\n");

    scanf("%f %c %f",&a,&character,&b);
    

    /********************************option selection*/
    

    /******************************/
    switch(character)
    {
    case '+':
        output=add(a,b);
        break;
    
    case '-':
        output=sub(a,b);
        break;

    case 'x':
        output=mul(a,b);
        break;

    case '/':
        output=div(a,b);
        break;
    
    }

    /*******************************Pushing answers to display*/
    out(a,character,b,output);

}

/***************************addition*/
float add(float x, float y)
{
    float output;
    return output = x + y;
}  

/****************************subtraction*/
float sub(float x, float y)
{
    float output;
    return output = x - y; 
}

/****************************multiplication*/
float mul(float x, float y)
{
    float output;
    return output = x * y; 
}

/****************************Division*/
float div(float x, float y)
{
    float output;

    if (y==0)
    {
        printf("Error!, cannot divide by zero");
        return 1;
    }
    else
    {
    return output = x / y; 
    }
}
/****************************Result*/
int out(float x,char character,float y,float z)
{
    
     printf("\n+---------------+\n");
        printf(" %.2f %c %.2f = %.2f  \n", x, character, y, z);
        printf("+---------------+\n");
        printf("| _ | _ | _ | _ |\n");
        printf("| 7 | 8 | 9 | + |\n");
        printf("| _ | _ | _ | _ |\n");
        printf("| 4 | 5 | 6 | - |\n");
        printf("| _ | _ | _ | _ |\n");
        printf("| 1 | 2 | 3 | * |\n");
        printf("| _ | _ | _ | _ |\n");
        printf("| 0 | . | = | / |\n");
        printf("| _ | _ | _ | _ |\n");
        
}

/*****************************displayGUI*/


