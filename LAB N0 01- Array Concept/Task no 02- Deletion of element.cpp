//************************* Lab Task 02 Deletion *******************

#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, pos;

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

    cout << "\nEnter position to delete element: ";
    cin >> pos;

    for(int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "\nUpdated Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
