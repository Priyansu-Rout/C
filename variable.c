#include <stdio.h>
#include <stdbool.h>

int main(){

    // variable = a container for a value .
    //             Behaves as if it ware the values it contains

    /*
    int = whole number (4 bytes in modern system)
    float = single -precision number decimal number (4 bytes)
    double = double-precision mumber (* bytes)
    char = single character (1 byte)
    char[] = array of character (size variable)
    bool = true or false (1 byte , requires <stdbool.h>)
    */

    //INT
    int age,year;

    age =20;
    year= 2025;
    int quantity=1;
    printf("you are %d year old \n",age);
    printf("The year is %d \n",year);
    printf("you have ordered %d x item \n",quantity);

    //FLOAT
    float gpa =9.5;

    printf("your gpa is %.1f \n",gpa);

    //DOUBLE
    double pi= 3.14159265358979;
    printf("the value of pi is %.10lf \n",pi);

    //CHARACTER
    char grade = 'A';
    char symbol = '!';
    char currency = '$';
    printf("your grade is %c \n",grade);
    printf("your favorite symbol is %c \n",symbol);
    printf("the currency is %c \n",currency);

     //STRING
    char name[] = "silu";
    char food[]= "pizza";
    printf("name %s \n",name);
    printf("Your favorite food is %s \n ",food);

    // bool 
    bool isOnline = false;
    if (isOnline){
        printf("You are online");
    }
    else{
        printf("You are offline");
    }

    return 0;
}