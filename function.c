// #include <stdio.h>
// declaration
// void helloPrint();


// int main(){
//       helloPrint() ;  // function call 
//     return 0;
// }

// Function Dafination
// void helloPrint(){
//     printf("Hello - World\n");
// }





// #include <stdio.h>
// void  printHello();
// int main(){
//   printHello();
//   printHello();
//   printHello();

//     return 0;
// }
// void printHello(){
//     printf("Hello ! \n");
//     printf("Learn'C' Programming Language \n") ;
// }










// #include <stdio.h>
// int main(){

//     return 0;
// }




#include <stdio.h>
int sum(int a , int b);
int main(){
int a,b ;
printf("Enter First Number :");
scanf("%d" , &a);
printf("Enter Second Number : ");
scanf("%d" , &b);
int result = sum(a,b);// Argument / Actual  parameter
printf("%d\n", result) ;
    return 0;
}

int sum(int x , int y){ // parameter / formal parameter 

  return x+y ;
}

