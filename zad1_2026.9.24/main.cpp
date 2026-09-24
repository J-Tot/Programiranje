#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

double sirina = 5.5;
double duljina = 6.7;
auto P=sirina*duljina;

const double PDV = 0.25;


P=P*100;
round(P);
P=P/100;

cout <<"Povrsina: "<< P <<endl;
cout <<"Povrsina: "<< fixed << setprecision(2) << P;

    return 0;
}
