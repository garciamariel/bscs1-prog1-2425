#include <iostream>
using namespace std;
int main(){
    float prelim = 90;
    float midterm = 80;
    float prefinal = 98;
    float final = 90;
    float total = 4;
    float sum = prelim + midterm + prefinal + final;
    float divide = sum/total;
    cout << "Prelim: " << prelim << endl;
    cout << "Midterm: " << midterm << endl;
    cout << "Prefinal: " << prefinal << endl;
    cout << "Final: " << final << endl;
    
    cout << "Average: " << divide << endl;
    
    return 0;
}
