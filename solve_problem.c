
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

// #include <stdio.h>
// #include <math.h>

//  float square_f( float side);
//  float  circle_f(float rad);
//  float  rectangle_f(float a , float b);
// int main(){

//     float a = 4;
//     float b = 4;
//     printf("Total Area is : %f\n" , rectangle_f(a,b));
//     return 0;
// }

// float square_f(float side){
//          return side * side ;
// }

// float cirlce_f(float rad){
//     return  3.1416 * rad * rad ;
// }

// float rectangle_f(float a , float b){
//     return  a*b ;
// }
//  =====================================  //  ======================

// ============================================================
//                   📌 Practice Problems
//                    Topic : C Programming - Functions
//                    Level :  1 – Basic Function Problems
// ============================================================

// ============================================================
// 👉👉 🔹 Q-4: একটি ফাংশন লিখো যা একটি পূর্ণসংখ্যা ইনপুট নিয়ে তার স্কয়ার রিটার্ন করবে।
// ============================================================

// #include <stdio.h>
//  int square (int n);
// int main(){
//     int num = 40;
//      int result =  square(num);
//      printf("Square Reult is : %d\n ", result);

//     return 0;
// }

// int square(int n ) {
//     return n*n ;
// }

// ============================================================
// 👉👉 🔹 Q-: একটি ফাংশন লিখো যা একটি পূর্ণসংখ্যা ইনপুট নিয়ে তার স্কয়ার রিটার্ন করবে।
// ============================================================
// #include <stdio.h>
// int input_square(int n);
// int main(){
//         int n ;
//         printf("Enter Number : ");
//         scanf("%d" , &n);
//     int  result  = input_square(n);
//     printf("Square number is : %d\n", result) ;
//     return 0;
// }

// int input_square(int n){
//    return  n*n ;
// }

// ============================================================
// 👉👉 🔹 Q- 5: একটি ফাংশন লিখো যা একটি পূর্ণসংখ্যা ইনপুট নিয়ে বলে দেবে সংখ্যাটি জোড় না বিজোড়।
// ============================================================

// #include <stdio.h>
// void checkEvenOdd(int  n );
// int main(){

//     int n;
//     printf("Enter Number ");
//     scanf("%d", &n);

//     checkEvenOdd(n);
//     return 0;
// }
// void checkEvenOdd(int n){
//       if (n % 2 == 0  )
//       {
//        printf("%d is Even.\n " , n) ;
//       }else{
//         printf("%d is Odd.\n " , n) ;
//       }

// }

// ===========================================================
//             📌  Review Solve
// 👉👉 🔹 Q- 5: একটি ফাংশন লিখো যা একটি পূর্ণসংখ্যা ইনপুট নিয়ে বলে দেবে সংখ্যাটি জোড় না বিজোড়।
// ============================================================

// #include <stdio.h>
// void  checkEvenOdd(int n);
// int main(){
// int n;
// printf("Enter Number  : ");
// scanf("%d" , &n);
// checkEvenOdd(n);
//     return 0;
// }

// void checkEvenOdd(int n){
//    if (n % 2 == 0 )
//    {
//     printf("%d is Even.\n" , n);
//    }else{
//     printf("%d is Odd.\n" , n);
//    }

// }

// ============================================================
//         📌   Sum of Two Numbers
// 👉👉 🔹 Q- 6:  দুটি সংখ্যার যোগফল বের করার জন্য একটি ফাংশন লিখো।
// ============================================================

// #include <stdio.h>
// int sum(int y, int z);

// int main(){
// int y,z;
// printf("Enter Tow Numbers : ");
// scanf(" %d %d", &y, &z);

// int result = sum(y,z) ;
// printf("Result is : %d\n", result);

//     return 0;

// }
// int sum(int y , int z){
//     return y+z;
// }
// ============================================================
//         📌   Sum of Two Numbers
// 👉👉 🔹 Q- 6.2:  দুটি সংখ্যার যোগফল বের করার জন্য একটি ফাংশন লিখো।
//          👉 🔹 Version :2.0
// ============================================================
// #include <stdio.h>
// int sum(int a , int b);
// int main(){
// int a ;
// int b ;
// printf("Enter first  Numbers :  ");
// scanf("%d", &a );
// printf("Enter second  Numbers :  ");
// scanf("%d",  &b);

// int total= sum(a,b);
// printf("Sum is : %d\n", total);

//     return 0;
// }

// int sum(int a , int b){
//     return a + b ;
// }

// ============================================================
//                    📌 Practice Problems
//                    Topic : C Programming - Functions
//                    Level 2 – Intermediate  Function Problems
// ============================================================

// // ============================================================
//         📌   Factorial Finder
// 👉👉 🔹 Q- 7:  একটি ফাংশন লিখো যা একটি সংখ্যা ইনপুট নিয়ে তার Factorial বের করবে।
// ============================================================

#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int result = factorial(n);
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = i * fac;
        printf("Factorial is : %d\n", result);
    }

    return 0;
}

int factorial(int n)
{
    return n;
}

// #include <stdio.h>
// int main(){

//     return 0;
// }