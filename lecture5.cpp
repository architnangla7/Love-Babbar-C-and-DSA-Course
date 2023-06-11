#include<iostream>
using namespace std;
int main()
{
    /*
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (19 << 2) << endl;
    */
  

    /*
    int i = 7;
    cout << ++i << endl; //i=8
    cout << i++ << endl; //8,i=9
    cout << i-- << endl; //9,i=8
    cout << --i << endl; //i=7
    */

    /*
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    cout << "Values from 1 to n are:->" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    */

    /*
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    cout << "Values from 1 to n are:-" << endl;
    int i = 1;
    for (; ;)
    {
        if(i<=n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }
    */


    /*
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    cout << "Sum of values from 1 to n is:->" << endl;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    */


    /*
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << "Fibonacci Series is:->" << endl;
    for (int i = 1; i <= n;i++)
    {
        int nextnumber = a + b;
        cout << nextnumber << endl;

        a = b;
        b = nextnumber;
    }
    */
    

    /*
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime==0)
    {
        cout << "Not a Prime Number" << endl;
    }
    else
    {
        cout << "Prime Number" << endl;
    }
    */


    /*
    for (int i = 0; i < 5; i++)
    {
        cout << "hey" << endl;
        cout << "hello" << endl;
        continue;
        cout << "reply" << endl; //unreachable
    }
    */
}