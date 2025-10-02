#include <stdio.h>

int main(){
    // arithmetic operation :  + - * / % ++ --

    int x= 2;
    int y = 3;
    int z = 0;

    int add = x+y;

    int sub = x-y;

    int mul = x*y;

    int a = 10;
    float b= 3;

    float div = a/b;

    int modulo = x%y ;  // give remender 


    printf("%d \n", add);
    printf("%d \n",sub);
    printf("%d \n",mul);
    printf("%f \n",div);
    printf("%d \n",modulo);



    a++;
    printf("%d \n",a);
    printf("%d \n",a++);
    printf("%d \n",a);

    a--;
    printf("%d \n",a);
    printf("%d \n",a--);
    printf("%d \n",a);





    return 0;
}
