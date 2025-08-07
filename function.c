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






// =================================================== 

// #include <stdio.h>
// int sum(int a , int b);
// int main(){
// int a,b ;
// printf("Enter First Number :");
// scanf("%d" , &a);
// printf("Enter Second Number : ");
// scanf("%d" , &b);
// int result = sum(a,b);// Argument / Actual  parameter
// printf("%d\n", result) ;
//     return 0;
// }

// int sum(int x , int y){ // parameter / formal parameter 

//   return x+y ;
// }




// #include <stdio.h>
// void printTable(int n);
// int main(){
//     int n;
//     printf("Enter Number :");
//     scanf("%d",&n);

//     printTable(n);   //argument / actual parameter  
//     return 0;
// }

// void printTable(int n){ // actual parameter /  formal parameter 
//   for(int i = 1 ; i <= 10 ; i++){
//     printf("%d\n", i*n);
//   }
// }





// #include <stdio.h>
// void calculatePrice(float value);
// int main(){
//   float value = 100.0;
//   calculatePrice(value);
//     return 0;
// }

// void calculatePrice(float value){
//   value = value + (0.18 * value);
//   printf("total price : %f" , value);
// }

#include <stdio.h>

 void  calculate_Price(float value);
int main(){
 
  float value = 100.0 ;
  calculate_Price( value);
  return 0;
}

void calculate_Price(float value){
  value  =  value + (0.18 * value) ; 
  printf("Final Value : %d\n " , value);
}

// comment out

// #include <stdio.h>
// int main(){

//     return 0;
// }
