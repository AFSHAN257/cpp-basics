#include<iostream>
using namespace std;

int main()
{ 
    
    cout<< "Welcome to Calculator Program \n";
    cout<< "Enter two numbers \n";
 
float n1,n2; 

    cout<< "Enter the value of n1:\n";
    cin>>n1;
    cout<< "Enter the value of n2:\n";
    cin>>n2;

float sum,sub,mult,div;
int choice;

    cout<< "\nChoose an Operation:\n";
    cout<< "1. Sum (n1+n2):\n";
    cout<< "2. Subtraction (n1-n2):\n";
    cout<< "3. Multiplication (n1*n2):\n";
    cout<< "4. Division (n1/n2):\n";
    cout<< "Enter your choice:\n";
    cin>> choice;

 if (choice == 1)
   { sum = n1+n2;
    cout<< "result:" <<sum;}
 else if (choice == 2)
   { sub = n1-n2; 
    cout<< "result:" <<sub;}
 else if (choice == 3)
   { mult = n1*n2;
    cout<< "result:" <<mult;}
 else if (choice == 4)
   { if (n2 !=0)
     { div = n1/n2;
    cout<< "result:" <<div; }
 else {
    cout<< "Error: division by 0:\n";} 
 }
 else {
    cout<< "Invalid Choice: Please select between optio 1 and 4:\n";
 }
 
    return 0;


}
