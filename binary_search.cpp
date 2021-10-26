// Michael Hom and Kevin Chang
//m.a.neumann@gmail.com
#include <iostream>
using namespace std;

const int MAX = 10;

int main()
{

    int array[MAX];
    double search1;
    cout << "Input 10 integers in increasing order: ";
    int input, cur_size = 0;
    while (cur_size < MAX && cin >> input)
    {
        array[cur_size] = input;
        cur_size++;
    }
    cout << "Input what number you want to search for: ";
    cin >> search1;

    double middle, middle2;
    bool done = false, multiple = false;
    int startElement = 0, endElement = cur_size - 1;
    double difference1, difference2;
    while (!done)
    {
        middle = array[(startElement + endElement)/2];
        if(search1 == middle)
        {
            startElement = (endElement + startElement) / 2;
            done = true;
        }
        else if (endElement - startElement == 1)
        {
            difference1 = search1 - array[startElement];
            difference2 = array[endElement] - search1;
            if (difference1 == difference2)
            {
                middle = array[startElement];
                middle2 = array[endElement];
                multiple = true;
            }
            else
            {
                middle = (difference1 < difference2)? array[startElement] : array[endElement];
                startElement = (difference1 < difference2)? startElement : endElement;
            }
            done = true;
        }
        else if(search1 > middle)
            startElement = (endElement + startElement) / 2;
        else if(search1 < middle)
            endElement = (endElement + startElement) / 2;
    }

    if (multiple)
    {
        cout << "The closest values to " << search1 << " are " << middle << " & " << middle2;
        cout << " at index " << startElement << " & " << endElement;
    }
    else
        cout << "The closest value to " << search1 << " is " << middle << " at index " << startElement;

    cin.get();
    return 0;
}
