// Problem_Solving_299.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum enVistables{Tomato = 1, Botato = 2,Onuion = 3};
enVistables ReadVistable()
{
    int Vis = 0;
    cin >> Vis;

    return(enVistables)Vis;
}
struct stPrice
{
    int Kilo = 0;
    int Count = 0;
    int sum = 1;
    int Price_Kilo_Tometo = 500;
    int Price_kilo_Botato = 600;
    int Price_kilo_Onuion = 400;
};


void ShowVistablesMenu()
{

    cout << "***************************************\n";
    cout << "\n        Vistable Menu                \n";
    cout << "\n***************************************\n";
    cout << "\n1: Tomato" << endl;
    cout << "\n2: Botato" << endl;
    cout << "\n3: Onuion" << endl;
    cout << "***************************************\n";
    cout << "Please Enter The Number of Vistable ? :\n";

}
void ReadKilo(int& Kilo)
{
    cout << "How Many Kilo Do you want ? : ";
    cin >> Kilo;

}
int CountPrice(int Kilo,int TypeVistable )
{
    stPrice Pricse;
    
    for (int i = 1; i <= Kilo; i++)
    {
        Pricse.sum =i * TypeVistable;
    }
    return Pricse.sum;
}
int GetData(int PriceData)
{
    stPrice Pricse;
    ReadKilo(Pricse.Kilo);
    Pricse.Count = CountPrice(Pricse.Kilo, PriceData);
    return Pricse.Count;

}
string CheckBill (enVistables Vistable)
{
    stPrice Pricse;
    
    switch (Vistable)
    {
    case enVistables::Tomato:
        return to_string(GetData(Pricse.Price_Kilo_Tometo));
        break;
    case enVistables::Botato:

        return to_string(GetData(Pricse.Price_kilo_Botato));
        break;
    case enVistables::Onuion:

        return to_string(GetData(Pricse.Price_kilo_Onuion));
        break;
    
    default:
        return " Wrong Number";
        break;
    }
}
void PrintBill()
{
    string Result;
    ShowVistablesMenu();
    Result = CheckBill(ReadVistable());
    cout << "\n================================================\n";
    cout << "\tYour Bill is : " << Result <<" R.Y "<< endl;
    cout << "==================================================\n";
}

int main()
{
   
    PrintBill();

   return 0;
}

