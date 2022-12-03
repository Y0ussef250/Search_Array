#include <iostream>
using namespace std;

int LinearSearch(int array[], int n, int val)
{
    for (int i = 0;i < n;i++)
    {
        if (array[i] == val)
            return i++;
    }
    return -1;
}

int main()
{
    int array[100] = { 9,3,29,10,5,40,24 };
    int val = 10;
    int n = sizeof(array) / sizeof(array[0]);
    int result = LinearSearch(array, n, val);
    cout << "The elements of the array are : ";
    for (int i = 0;i < 7;i++)
        cout << array[i] << " ";
    cout << "\n";

    //Search
    cout << "\nElement to be searched is : "<<val;
    if (result == -1)
        cout << "\nElement is not present in the array\n";
    else
        cout << "\nElement is present at position " << result << "  of array\n";
    //Add
    for (int i = 0;i < 8;i++)
    {
        array[8 - i] = array[7 - i];
    }
    array[0] = 1;
    cout << "\nAdd '1' at position 0:\n";
    for (int i = 0;i < 8;i++)
        cout << array[i] << " ";
    cout << "\n";
    //Delete
    for (int i = 0;i < 4;i++)
    {
        array[4 + i] = array[5 + i];
    }
    cout << "\nDelete '10' at position 4:\n";
    for (int i = 0;i < 7;i++)
        cout << array[i] << " ";
    return 0;
}

