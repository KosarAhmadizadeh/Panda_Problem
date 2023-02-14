// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    double* Panda;
    cin >> n;
    Panda = new double[n];

    struct Panda
    {
        string race[20];
        int age;
        int weight;
        char status;
    } *Panda[n];

    int i = 0;
    int sum = 0; //tedad panda hayii ke T hastand
    for (i = 0; i <= n; i++)
    {
        cout << "race:";
        cin >> Panda[i].race;
        cout << "age:";
        cin >> Panda[i].age;
        cout << "weight:";
        cin >> Panda[i].weight;
        if (Panda[i].weight) >= 60
            Panda[i].status = "F";
        else
        {
            Panda[i].status = "T";
            sum++;
        }
    }
    cout << sum;
    delete[]Panda;
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
