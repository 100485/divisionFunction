#include <iostream>
using namespace std;

//declaration of division function
double division(double,double);


int main () {

//declare inputs
double x, y;
int q;

cout << "Please entre the first number:";
cin >> x;

cout << "Please entre the second number:";
cin >> y;

q = division(x,y);

cout <<x <<"divided by" <<y <<"=" <<q <<endl;

return 0;
}
double division(double a, double b)
{
return a/b;
}