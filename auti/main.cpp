#include <iostream>

using namespace std;

int main()
{

    string brand[5]=
    {
        "Ferrari",
        "Mercedes",
        "Renault",
        "Porsche",
        "BMW"
    };
    string model[20]=
    {

        "SF24",
        "LaFerrari",
        "Spider",
        "Portofino",

        "G Klasa",
        "A Klasa",
        "B Klasa",
        "C Klasa",

        "Clio",
        "Scenic",
        "Megane",
        "Espace",

        "911",
        "718",
        "Taycan",
        "Panamera",

        "X5",
        "X1",
        "X3",
        "X7"
    };

    int a=0;

    for (int i=0; i<5; i++)
    {
        cout <<endl;
        cout <<"BRAND:" <<brand[i] << " " << endl;
        cout <<"MODELI: ";
        for (int j=0; j<4; j++)
        {
            cout<< model[a++] <<", ";
            if (j==4) printf("\n");
        }


    }









    return 0;
}
