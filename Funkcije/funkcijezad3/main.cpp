#include <iostream>
#include <cmath>
using namespace std;

double kvadrat(double broj){
return pow(broj,2);
}
double udaljenost(double x1, double y1, double x2, double y2){

double razlikax = x2-x1;
double razlikay = y2-y1;

return sqrt(kvadrat(razlikax)+ kvadrat(razlikay));

}
void ispisiUdaljenost(double rezultat){

cout <<"Udaljenost izmedu tocaka je: " << rezultat << endl;

}



int main()
{
double x1,x2,y1,y2;


cout << "Unesi koordinate prve tocke: ";
cin >> x1 >> y1;
cout << endl;
cout << "Unesi koordinate druge tocke: ";
cin >> x2 >> y2;
cout << endl;

double rezultat = udaljenost(x1, y1, x2, y2);

ispisiUdaljenost(rezultat);
return 0;
}
