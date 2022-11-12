//Kaylen Bolden          JNUMBER:J00965280          DATE:11/07/2022
//                       PG.264 Exercise 11
//                      DUE DATE 11/09/2022
#include <iostream>
#include <string>

using namespace std;

int main(){
int primeNum[11] = {2,3,5,7,11,13,17,19,23,29,31};
int num;

    if (num<1){
        cout << "out of bounds";
    }
     else if (num>1000){
        cout << "out of bounds";
    }
     else if (num==1){
        cout << "not a prime number. only divisible by 1.";
    }
     else if (num==2){
        cout << "number 2 is prime";
    }
     else if (num==3){
        cout << "number 3 is prime";
    }
     else if (num==4){
        cout << "is not prime. divisible by 2";
    }
     else if (num==5){
        cout << "number 5 is prime";
    }
     else if (num==6){
        cout << "is not a prime. divisible by 2,3";
    }
     else if (num==7){
        cout << "number 7 is prime";
    }
     else if (num==8){
        cout << "is not prime. divisible by 2,4";
    }
     else if (num==9){
        cout << "is not prime. divisible by 3";
    }
     else if (num==10){
        cout << "is not prime. divisible by 2,5";
    }
     else if (num==11){
        cout << "number 11 is prime";
    }
     else if (num==12){
        cout << "is not prime. divisible by 2,3,4,6";
    }
     

return 0;
}

