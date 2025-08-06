
// ==================================================
// =======================  👉👉  🔹🔹 Practice-Problem =========
// ==================================================





// write 2 functions one to print "Hello"  and Second to print "Goodbey"

#include <stdio.h>
void hello_f();
void bey_f();
int main(){

    hello_f();
    bey_f();
    return 0;
}

void hello_f(){
printf("Hello \n");
}
void bey_f(){
    printf("goodbey :) \n");
}






// Write a fuction that prints Salam if user is Bagladashi 
// &  Hey if the user is French


void salam_f();
void hey_f();

#include <stdio.h>
int main(){
      printf("Enter f  for french &  b for bagladesh :");
      int ch;
      scanf("%ch",&ch);
      if(ch == 'b'){
        salam_f();
      }else{
        hey_f();
      }
    return 0;
}

void salam_f(){
    printf("Assalamualaiqum\n");
}

void hey_f(){
    printf("Hey ! \n");
}



// #include <stdio.h>
// int main(){

//     return 0;
// }