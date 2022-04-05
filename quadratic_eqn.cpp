/******************************************************************************
Quadratic equation calculator by Joel Rodriguez

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    
    cout<<"Enter value for a: ";
    cin>>a;

    cout<<"Enter value for b: ";
    cin>>b;

    cout<<"Enter value for c: ";
    cin>>c;
    
    cout<<"The result is : "<<(-b+sqrt((b*b)-(4*a*c)))/(2*a)<<","<<(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    
    

    return 0;
}
