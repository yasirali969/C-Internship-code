#include<iostream>
using namespace std;

int main(){

    cout << "=========================\n";
    cout << "\t1) Calculator\t\n";
    cout << "\t2) Even/Odd checker\t\n";
    cout << "\t3) Prime No checker\t\n";
    cout << "\t4) Grading System\t\n";
    cout << "\t5) Exit\t\n";
    cout << "=========================\n";

    int n;
    cout << "\nEnter the Option: ";
    cin >> n;

    if(n == 1){

      cout<<"=================";
      cout<<"====Calculuator==";
      cout<<"=================";

        char op;
        int a, b;

        cout << "Enter the operator: ";
        cin >> op;

        cout << "Enter the value of a: ";
        cin >> a;

        cout << "Enter the value of b: ";
        cin >> b;

        cout << "\n";

        switch(op){

            case '+':
                cout << "Sum of " << a << " and " << b << " = " << a + b;
                break;

            case '*':
                cout << "Product of " << a << " and " << b << " = " << a * b;
                break;

            case '-':
                cout << "Difference of " << a << " and " << b << " = " << a - b;
                break;

            case '/':
                if(b == 0){
                    cout << "Invalid value for division (b cannot be zero)";
                }
                else{
                    cout << "Division of " << a << " and " << b << " = " << (a / b);
                }
                break;

            default:
                cout << "Invalid operator";
        }
      }

      else if(n==2){

         cout<<"=======================\n";
         cout<<"===Even/Odd checker===\n";
         cout<<"======================\n";

         int a;
         cout<<"Enter the number :";
         cin>>a;

         if(a%2==0){
            cout<<"It is a even number";
         }
         else{
            cout<<"it is even no";
         }


        


    }
    else if(n==3){
        
        int p;
        cout<<"Enter the prime no :";
        cin>>p;

        bool IsPrime=false;

        if(p<1){
            return 0;
        }

        for(int i=2;i<p/2;i++){
            if(n%i==0){
               cout<<"It is not prime no";
            }
            else{
                cout<<"It is prime no";
            }
        }



    }

    else if(n==4){

         cout<<"=======================\n";
         cout<<"===Grading System===\n";
         cout<<"======================\n";

         int total_Marks=100;
         int marks;

         cout<<"Enter the gained marks :";
         cin>>marks;

         double per=(marks/total_Marks)*100;

         if(marks>90){
            cout<<"Grade: A";
         }
         else if(marks>=70 && marks<90){
            cout<<"Grade: B";
         }
         else if(marks>=60 && marks< 70){
            cout<<"Grade: C";
         }
         else if(marks >=50 && marks < 60){
            cout<<"Grade: D";
         }
         else{
            cout<<"Grade: F";
         }
        

    }
    else if(n==5){
        cout<<"Exit";
    }
    else{
        cout<<"Wrong Entry";
    }

    return 0;
}