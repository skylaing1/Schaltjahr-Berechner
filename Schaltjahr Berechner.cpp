#include <iostream>
#include <string>

using namespace std;

int main()
{
    int jahr;
    int rechnung = 0;
    bool schaltjahr;
    

    cout << endl << "Dieses Programm berechnet ob das Eingegebene Jahr ein Schaltjahr ist." << endl << "Bitte geben sie ein Jahr ein um Fortzufahren: " << endl;

    cin >> jahr;

    rechnung = jahr % 4;

    if (rechnung > 0)
    {
        schaltjahr = false;
    }  else
    {
        schaltjahr = true;
    }

    rechnung = jahr % 100;

    if (rechnung > 0)
    {
        schaltjahr = true;
    }
    else
    {
        rechnung = jahr % 400;
        schaltjahr = false;
        if (rechnung > 0)
        {
            schaltjahr = false;
        }
        else
        {
            schaltjahr = true;
        }
    }
        
    if (schaltjahr == true)
    {
        cout << "Das Jahr " << jahr << " ist ein Schaltjahr";
    }
    else {
        cout << "Das Jahr " << jahr << " ist kein Schaltjahr";
    } 
    

   
}