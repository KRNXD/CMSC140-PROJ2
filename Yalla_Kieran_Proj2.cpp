// Kieran Yalla
// Class: CMSC140 CRN
// Instructor: Professor Koo
// Programming Project 2 
// Write a program that presents itself and interacts with the user, using country and 2 numbers as inputs
// I pledge that I have completed the programming assignment independently. 
// I have not copied the code from a student or any source.
// I have not given my code to any student.
// Print your Name here: Kieran Yalla

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
    string countryname;
    int useroption, Celcius, fahrenheit;
    double Kilometers, weight, miles, pounds;
  
    cout << "Enter a country name: ";
    cin >> countryname;

    cout << "\nConverter Toolkit\n-------------\n" << "1. Temperature Converter\n2. Distance Converter\n3. Weight Converter\n4. Quit\n" << "Enter your choice (1-4): ";
    cin >> useroption;
    
    switch (useroption) {
        case 1:
            cout << "Please enter temperature in Celcius (such as 24) : ";
            cin >> Celcius;
            fahrenheit = (9.0/5)*Celcius + 32;
            cout << "It is " << fahrenheit << " in Fahrenheit.\n";
            break;
        case 2:
            cout << "Please enter distance in Kilometers (such as 18.54) : ";
            cin >> Kilometers;
            if(Kilometers<0){
                cout<<"Distance should not be negative"<<endl;
                break;
            }
            miles = Kilometers / 1.6;
            cout << "It is " << setprecision(2) << fixed << miles << " in miles.\n";
            break;
        case 3:
            cout << "Please enter weight in Kilograms (such as 81.4) : ";
            cin >> weight;
            if(weight<0){
                cout<<"Weight should not be negative"<<endl;
                break;
            }
            pounds = weight * 2.2;
            cout << "It is " << setprecision(1) << fixed << pounds << " in pounds.\n";
            break;
        case 4:
            break;
        default:
            cout<<"Invalid Response"<<endl;
    }

    cout << countryname << " sounds fun!\n\n";
    cout << "Thank you for testing my program!!\nProgrammer: Kieran Yalla\nCSMC140 Common Project 2\nDue Date: 10/05/21";

    return 0;
}