#include <iostream>
using namespace std;
int main()
{
    /*int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "b is greater than a" << endl;
    }
    return 0;
    */


    /*int a;
    a = cin.get();
    cout << "Value of a is" <<" "<< a << endl;
    */


    /*int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    if (n > 0)
    {
        cout << n << " "
             << "is Positive" << endl;
    }
    else
    {
        if (n < 0)
        {
            cout << n << " "
                 << "is Negative" << endl;
        }
        else
        {
            cout << n << " "
                 << "is Zero" << endl;
        }
    }
    return 0;
    */


    /*int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    if (n > 0)
    {
        cout << "n is Positive" << endl;
    }
    else if (n < 0)
    {
        cout << "n is Negative" << endl;
    }
    else
    {
        cout << "n is Zero" << endl;
    }
    return 0;
    */


    /*int a = 24;
    if(a>20)
    {
        cout << "Love" << endl;
    }
    else if(a==24)
    {
        cout << "Lovely" << endl;
    }
    else
    {
        cout << "Babbar" << endl;
    }
    cout << a;
    */


    /*char ch;
    cin >> ch;
    if(ch>='a' && ch<='z')
    {
        cout << "Lower case Alphabets" << endl;
    }
    else if(ch>='A' && ch<='Z')
    {
        cout << "Upper case Alphabets" << endl;
    }
    else
    {
        cout << "Numeric Value" << endl;
    }
    */


    /*int i, n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    i = 1;
    cout << "Values from 1 to n are:->" << endl;
    while(i<=n)
    {
        cout << i << endl;
        i = i + 1;
    }
    */


    /*int i, n, sum;
    i = 1;
    sum = 0;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    while(i<=n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Sum of values from 1 to n is:->" << sum<< endl;
    */


    /*int i, n, sum;
    i = 2;
    sum = 0;
    cout << "Enter the value of n" << endl;
    cin >> n;
    while(i<=n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of even values from 1 to n is:->" << sum << endl;
    */


    /*int i = 2;
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    while(i<n)
    {
        if(n%i==0)
        {
            cout << "Not prime for" <<" "<< i << endl;
        }
        else
        {
            cout << "Prime for" << " "<< i << endl;
        }
        i = i + 1;
    }
    */


    /*
    * * * * *
    * * * * *
    * * * * *
    * * * * * 
    * * * * *
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout << "*"
                 << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */


   /*
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    5 5 5 5 5
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */ 
}