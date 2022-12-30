



#include <iostream>
using namespace std;
// Function to print Sum and Carry
void Half_Adder(int a,int b)
{
    //initialize the variables Sum and Carry
    int sum , carry;
    
    // Calculating value of sum by applying A XOR B
    sum = a ^ b;
    carry = a & b;
    cout<<"Sum = "<< sum << endl;
    cout<<"Carry = "<<carry<< endl;
}
int main()
{
    int a= 1;
    int b = 0;
    Half_Adder(a,b);
    return 0;
}
