#include <iostream>
#include <fstream>
#include <array>
#include <vector>
using namespace std;  

int main()
{
    const int SIZE = 30;
    array <double, SIZE> temperatures;
    ifstream fin;
    fin.open("temperatures.txt");

    if (fin.good())
    {
        for (int i = 0; i < SIZE; i++)
        {
            fin >> temperatures.at(i);
        }
        fin.close();
    }
    else
    {
        cout << "File not found." << endl;
        return 1;
    }
    
    cout << "STD::array of temperatures:" << endl;
    cout << "---------------------------" << endl;
    cout << "Number of temperatures: " << temperatures.size() << endl;
}