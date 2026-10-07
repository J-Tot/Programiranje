#include <iostream>

using namespace std;

double zbroji(double a, double b){

return a+b;

}

double oduzmi (double a, double b){
return a-b;

}
double pomnozi(double a, double b){
return a*b;

}
double podijeli(double a, double b){
return a/b;
}
void ispisiRezultat(double rezultat){
cout << rezultat << endl;
}


int main()
{
double a;
double b;
double rezultat;
cout <<"Unesi a: " ;
cin >> a;
cout <<"Unesi b: ";
cin >> b;


rezultat=zbroji(a,b);
cout << "Zbroj: " << endl;
ispisiRezultat(rezultat);

rezultat=oduzmi(a,b);
cout << "Razlika: " << endl;
ispisiRezultat(rezultat);

rezultat=pomnozi(a,b);
cout << "Umnozak: " << endl;
ispisiRezultat(rezultat);

if (b==0) cout << "dijeljenje nije moguce" << endl;
else {
    rezultat=podijeli(a,b);
    cout << "Kolicnik: " << endl;
    ispisiRezultat(rezultat);
}





    return 0;
}
