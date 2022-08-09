#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 5; 
    double d = 12.2;
    string s = "I like ";

    // Declare second integer, double, and String variables.
    int j;
    double e;
    string t;
    
    // Read and save an integer, double, and String to your variables.
    
    cout<<"Please enter a integer: "<<endl;
    cin >> j;
    
    cout<<"Please enter a double: "<<endl;
    cin >> e;
   
    cout<<"Please enter one thing that you like: "<<endl;
    cin >> t;
   
    
    // Print the sum of both integer variables 
    cout << "\nInteger sum is: "<< (i + j) <<endl;
    
    // Print the sum of the double variables
    cout << "Double sum is: "<< fixed << setprecision(1) << (d + e) <<endl;
    
    // Concatenate and print the String variables 
    cout << "Concatenate string is: "<< (s + t) <<endl;

    return 0;
}