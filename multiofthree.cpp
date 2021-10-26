#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int main()
{
    int three;
    string catchAll;
    bool notint;
    cout << "Please enter an integer that is a multiple of three\n";
    getline(cin,catchAll);
    do
    {
        notint = true;
        int i = 0;
        while (i < catchAll.size() && notint)
        {
            if (isalpha(catchAll[i]))
            {
                notint = false;
                cout << "Sorry that is not a multiple of three.\n";
                cout << "Please enter an integer that is a multiple of three\n";
                getline(cin,catchAll);
            }
            i++;
        }
    }while (!notint);

    for (int i = 0;i < catchAll.size();i++)
        three += catchAll[i] * pow(10,catchAll.size()-i);

    while (three % 3 != 0)
    {
        cout << "Sorry that is not a multiple of three.\n";
        cout << "Please enter an integer that is a multiple of three\n";
        cin >> three;
    }
    cout << three << " is equal to 3 times " << three / 3;

    return 0;


}
