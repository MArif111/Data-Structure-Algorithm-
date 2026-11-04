//********************* Lab Task 01 *******************

#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, pos, value;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nOriginal Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter position to insert element: ";
    cin >> pos;

    cout << "Enter new element: ";
    cin >> value;

    for(int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    cout << "\nUpdated Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}













