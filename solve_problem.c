
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
//  =======================================

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

//  ---------------------------------------------------------------------------------

// // ============================================================
//             📌   Factorial Finder
// 👉👉 🔹 Q- 7:  একটি ফাংশন লিখো যা একটি সংখ্যা ইনপুট নিয়ে তার Factorial বের করবে।
// ============================================================

// #include <stdio.h>
// int factorial(int n);
// int main(){
//  int n ;
//  printf("Enter Number ") ;
//  scanf("%d" , &n);
//  int fac = factorial(n);
//  printf("factorial is %d\n" , fac);

//     return 0;
// }

// int factorial(int n){
//     int result = 1 ;
//   for (int i = 1 ; i<=n ; i++){
//   result = i*i;
//   }
//   return result ;

// }

// // ============================================================
//             📌   Factorial Finder
// 👉👉 🔹         Q- 8:  একটি ফাংশন লিখো যা একটি সংখ্যা ইনপুট নিয়ে তার Factorial বের করবে।
//    👉 🔹       Review Write code
// ============================================================

// #include <stdio.h>
// int factorial(int a) ;
// int main(){
//     int a ;
//     printf("Enter Number :");
//     scanf("%d",&a);
//    int  fact  = factorial(a);
//    printf("Factorial is %d\n" , fact);
//     return 0;
// }

// int factorial(int a ){
//     int  result = 1;
//     for(int i = 1; i<=a; i++){
//         result = i*i;
//     }

//     return result;
// }

// ============================================================
//             📌  Prime Number Checker
// 👉👉 🔹 Q- 7:  একটি ফাংশন লিখো যা একটি সংখ্যা ইনপুট নিয়ে বলে দেবে সেটি Prime কিনা
// ============================================================

// #include <stdio.h>
// int isPrime(int a);
// int main()
// {
//     int a;
//     printf("Enter Number ");
//     scanf("%d", &a);
//     int result = isPrime(a);
//     printf("prime number is %d\n" , result);
//     return 0;
// }

// int isPrime(int a)
// {
//     if (a <= 1)
//     {
//         printf("Is not a prime  number %d", a);
//         return 0;
//     }
//     for (int i = 2; i * i; i++)
//     {
//         if (a % i == 0)
//         {
//             return 0;
//         }
//     }

//     return 1;
// }

//    👉👉  🔹🔹Qu -  8️⃣  Write a fucntion convart  Celsius →to  Fahrenheit   ..

// #include <stdio.h>
// //  Fuction Prototype
// float con_Tem(float cel );
// int main(){

//     float feh = con_Tem(0); // function call
//     printf("Temp is %f\n" , feh);
//     return 0;
// }
// //  Function Definition

// float con_Tem( float cel ){
//     float feh = cel *(5.0 / 9.0) + 32 ;
//     return feh ;
// }

//    👉👉  🔹🔹Qu - 9️⃣  Write A functoin claculate percentage  of a student from
//  Marks in Science , Math , English

// #include <stdio.h>
// //  Function Prototyep
// int cal_marks(int science, int math, int eng);
// int main()
// {
//     int sci = 96;
//     int math = 90;
//     int eng = 92;

//     int calcualtion = cal_marks(sci, math, eng); // Function call
//     printf("Percentage of marks : %d%\n", calcualtion);

//     return 0;
// }

// // Function Dafinition

// int cal_marks(int science, int math, int eng)
// {
//     int calculation = ((science + math + eng) / 3);
//     return calculation;
// }

//    👉👉  🔹🔹Qu - 🔟  Write A functoin  to print  n terms  of the fibonachi  sequence


#include <stdio.h>
// function protyep 
int fib(int n);
int main(){

    printf("Output is %d\n" , fib(8));

    return 0;
}

// Function Defenition ;
int fib(int n){
    if(n== 0){  // Base case 
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fib_Nm1 = fib (n-1);
    int fib_Nm2 = fib (n-2);
    int fib_Nm = fib_Nm1 + fib_Nm2 ;
    return fib_Nm;
}

// / #include <stdio.h>
// int main(){

//     return 0;
// }

//   Number Emoji     👉👉  🔹Qu -🔹
//    
// 1️⃣1️⃣ 1️⃣2️⃣ 1️⃣3️⃣ 1️⃣4️⃣ 1️⃣5️⃣ 1️⃣6️⃣ 1️⃣7️⃣ 1️⃣8️⃣ 1️⃣9️⃣ 2️⃣0️⃣
// 2️⃣1️⃣ 2️⃣2️⃣ 2️⃣3️⃣ 2️⃣4️⃣ 2️⃣5️⃣ 2️⃣6️⃣ 2️⃣7️⃣ 2️⃣8️⃣ 2️⃣9️⃣ 3️⃣0️⃣