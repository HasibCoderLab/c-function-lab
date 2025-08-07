
// ==================================================
// =======================  👉👉  🔹🔹 Practice-Problem =========
// ==================================================

// 👉👉  🔹Qu -1 🔹 write 2 functions one to print "Hello"  and Second to print "Goodbey"

// #include <stdio.h>
// void hello_f();
// void bey_f();
// int main(){

//     hello_f();
//     bey_f();
//     return 0;
// }

// void hello_f(){
// printf("Hello \n");
// }
// void bey_f(){
//     printf("goodbey :) \n");
// }

// 👉👉  🔹Qu -2 🔹  Write a fuction that prints Salam if user is Bagladashi
//  &  Hey if the user is French

// #include <stdio.h>
// void salam_f();
// void hey_f();
// int main(){
//       printf("Enter f  for french &  b for bagladesh :");
//       int ch;
//       scanf("%ch",&ch);
//       if(ch == 'b'){
//         salam_f();
//       }else{
//         hey_f();
//       }
//     return 0;
// }

// void salam_f(){
//     printf("Assalamualaiqum\n");
// }

// void hey_f(){
//     printf("Hey ! \n");
// }

// 👉👉  🔹Qu -3 🔹 use library fucntions to calculate the square of a number given by the user

// #include <stdio.h>
// #include <math.h>

// int main(){
// int n = 4 ;
// printf("%f\n", pow(n,2));
//     return 0;
// }

// 👉👉  🔹Qu -3 🔹 write a fuction calculate area of a square , a circle & a rectangel

#include <stdio.h>
#include <math.h>

 float square_f( float side);
 float  circle_f(float rad);
 float  rectangle_f(float a , float b);
int main(){

    float a = 4;
    float b = 4;
    printf("Total Area is : %f\n" , rectangle_f(a,b));
    return 0;
}

float square_f(float side){
         return side * side ;
}

float cirlce_f(float rad){
    return  3.1416 * rad * rad ;
}

float rectangle_f(float a , float b){
    return  a*b ;
}

// #include <stdio.h>
// int main(){

//     return 0;
// }
