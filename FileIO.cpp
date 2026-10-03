#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file("data.csv");

    string currentLine;
    string sIntA;
    string sIntB;
    string text;

    int intA;
    int intB;
    int sum;

    stringstream ss;

    while (getline(file, currentLine))
    {
        ss.clear();
        ss.str(currentLine);

        getline(ss, sIntA, ',');
        getline(ss, sIntB, ',');
        getline(ss, text);

        ss.clear();
        ss.str(sIntA + " " + sIntB);

        ss >> intA >> intB;

        sum = intA + intB;

        for (int i = 0; i < sum; i++)
        {
            cout << text << " ";
        }

        cout << endl;
    }

    file.close();

    return 0;
}
