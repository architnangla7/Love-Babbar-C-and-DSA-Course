#include<iostream>
using namespace std;
/*void printArray(int arr[],int n)
{
    cout << "Printing the array:->" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing done" << endl;
}*/
/*int maxElement(int arr[],int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(maxi<arr[i])  //maxi=max(maxi,arr[i])(inbuilt function)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int minElement(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (mini>arr[i])  //mini=min(mini,arr[i])(inbuilt function)
        {
            mini = arr[i];
        }
    }
    return mini;
}*/
/*void update(int arr[],int n)
{
    arr[0] = 7; //it will also get updated in main function which do not happens in case of variables
    cout << "Inside the function" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Returning back to main function" << endl;
}*/
/*int sumofArray(int arr[],int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}*/
/*bool LinearSearch(int arr[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}*/
/*void reversearray(int arr[],int n)
{
    int start = 0;
    int end = n - 1;
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Reversed array is:->" << endl;
}
void printarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}*/
int main()
{
    /*
    int third[15] = {2, 7};
    printArray(third, 10);
    int fourth[7] = {1, 2, 3, 4, 5, 6, 7};
    printArray(fourth, 7);
    */
    

    /*
    int size;
    cout << "Enter the size of array:->" << endl;
    cin >> size;
    int num[100];
    cout << "Enter the elements of array:->" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum element in array is:->" << maxElement(num, size) << endl;
    cout << "Minimum element in array is:->" << minElement(num, size) << endl;
    */


    /*
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    cout << "Printing in main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    */
    

    /*
    int n;
    cout << "Enter the size of array:->" << endl;
    cin >> n;
    int num[100];
    cout << "Enter the elements of array:->" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "Sum of elements of array is:->" << sumofArray(num, n) << endl;
    */
    

    /*
    int n;
    cout << "Enter the size of array:->" << endl;
    cin >> n;
    int num[100];
    cout << "Enter the elements of array:->" << endl;
    for (int i = 0; i < n;i++)
    {
        cin >> num[i];
    }
    int key;
    cout << "Enter the element you want to search in array:->" << endl;
    cin >> key;
    bool found = LinearSearch(num, n, key);
    if(found)
    {
        cout << "Element is present is array" << endl;
    }
    else
    {
        cout << "Element is not present in array" << endl;
    }
    return 0;
    */


    /*
    int n;
    cout << "Enter the size of array:->" << endl;
    cin >> n;
    int num[100];
    cout << "Enter the elements of array:->" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    reversearray(num, n);
    printarray(num, n);
    */
}