#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Please enter an integer\n";
    cin >> input;
    while (input != 0)
    {
        cout << input % 2 << endl;
        input /= 2;
    }
    return 0;
}
