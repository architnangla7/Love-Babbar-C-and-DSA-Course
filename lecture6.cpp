#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    /* Decimal to Binary
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    int answer = 0;
    int i = 0;
    while(n!=0)
    {
        int bit = n & 1;
        answer = (bit * pow(10, i)) + answer;
        n = n >> 1;
        i++;
    }
    cout << "Answer is:->" << answer << endl;
    */

    /*Binary to Decimal
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    int i = 0;
    int answer = 0;
    while(n!=0)
    {
        int digit = n % 10;
        if(digit==1)
        {
            answer = answer + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << "Answer is:->" << answer << endl;
    */
}