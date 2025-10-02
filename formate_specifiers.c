#include <stdio.h>

int main() {
    // Format specifier = special tokons that begin with a % symbol,
    //                    followed by a character that specifies the data  type
    //                    and optional modifiers (width,precision,flags).
    //                    They control how data is display or interpreted.
    
    int age =25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[]= "silu";

    printf("%d\n",age);
    printf("%f\n",price);
    printf("%lf\n",pi);
    printf("%c\n",currency);
    printf("%s\n",name);
    


    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
// give 4 digit number  (width)
    printf("%4d\n",num1);
    printf("%4d\n",num2);
    printf("%4d\n",num3);

// add 0 before the number if number is lessthan 4 (precision)
    printf("%04d\n",num1);
    printf("%04d\n",num2);
    printf("%04d\n",num3);

// give sign (+,-) of number  (flag)
    printf("%+d\n",num1);
    printf("%+d\n",num2);
    printf("%+d\n",num3);


    float price1= 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%f\n",price1);
    printf("%f\n",price2);
    printf("%f\n",price3);

// after decimal print 2 decimal point number 
    printf("%.2f\n",price1);
    printf("%.2f\n",price2);
    printf("%.2f\n",price3);    

    printf("%+7.2f\n",price1);
    printf("%+7.2f\n",price2);
    printf("%+7.2f\n",price3);  


    return 0;
}