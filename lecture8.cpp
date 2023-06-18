#include<iostream>
using namespace std;
/*int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}*/
/*int power()
{
    int a;
    cout << "Enter the value of a:->" << endl;
    cin >> a;
    int b;
    cout << "Enter the value of b:->" << endl;
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b;i++)
    {
        ans = ans * a;
    }
    return ans;
}*/
/*bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}*/
/*int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int num, int dem)
{
    int n = factorial(num); //int num=factorial(num) wrong (shadows a parameter)
    int d = (factorial(num - dem) * factorial(dem));
    return n / d;
}*/
/*bool isPrime(int n)
{
    for (int i = 2; i < n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}*/
/*int AP(int n)
{
    int ans = 3 * n + 7;
    return ans;
}*/


int main()
{
    /*
    int a;
    cout << "Enter the value of a:->" << endl;
    cin >> a;
    int b;
    cout << "Enter the value of b:->" << endl;
    cin >> b;
    char op;
    cout << "Enter the operation you want to performs:->" << endl;
    cin >> op;
    switch(op)
    {
        case '+':
            cout << "Value of a+b is:->" << endl;
            cout << a + b << endl;
            break;
        case '-':
            cout << "Value of a-b is:->" << endl;
            cout << a - b << endl;
            break;
        case '*':
            cout << "Value of a*b is:->" << endl;
            cout << a * b << endl;
            break;
        case '/':
            cout << "Value of a/b is:->" << endl;
            cout << a / b << endl;
            break;
        case '%':
            cout << "Value of a%b is:->" << endl;
            cout << a % b << endl;
            break;
        default :
            cout << "Please enter a Valid Operation:->" << endl;
    }
    */

    /*
    int amount=0;
    int remainder = 1;
    int hundred = 0;
    int fifty = 0;
    int twenty = 0;
    int ten = 0;
    int one = 0;
    cout << "Enter the amount:->" << endl;
    cin >> amount;
    switch(1)
    {
        case 1:
            hundred = amount / 100;
            remainder = amount % 100;
            cout << "No of hundred rupees notes:->" << hundred << endl;

        case 2:
            fifty = remainder / 50;
            remainder = remainder % 50;
            cout << "No of fifty rupees notes:->" << fifty << endl;

        case 3:
            twenty = remainder / 20;
            remainder = remainder % 20;
            cout << "No of twenty rupees notes:->" << twenty << endl;

        case 4:
            ten = remainder / 10;
            remainder = remainder % 10;
            cout << "No of ten rupees notes:->" << ten << endl;

        case 5:
            one = remainder / 1;
            remainder = remainder % 1;
            cout << "No of one rupees notes:->" << one << endl;
    }
    return 0;
    */
    
    /*
    int a;
    cout << "Enter the value of a:->" << endl;
    cin >> a;
    int b;
    cout << "Enter the value of b:->" << endl;
    cin >> b;
    int answer = power(a, b);
    cout<<"Result is:->"<<answer<<endl;

    int c;
    cout << "Enter the value of c:->" << endl;
    cin >> c;
    int d;
    cout << "Enter the value of d:->" << endl;
    cin >> d;
    int answerr = power(c, d);
    cout << "Result is:->" << answerr << endl;
    */


    /*
    int ans = power();
    cout << "Result is:->" << ans << endl;
    int anss = power();
    cout << "Result is:->" << anss << endl;
    int ansss = power();
    cout << "Result is:->" << ansss << endl;
    */


    /*
    int a;
    cout << "Enter the value of a:->" << endl;
    cin >> a;
    if(isEven(a))
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
    */


    /*
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    int r;
    cout << "Enter the value of r:->" << endl;
    cin >> r;
    int answer = ncr(n, r);
    cout << "Result is:->" << answer << endl;
    */

    /*
    int a;
    cout << "Enter a number:->" << endl;
    cin >> a;
    if(isPrime(a))
    {
        cout << "Number is Prime" << endl;
    }
    else
    {
        cout << "Number is not prime" << endl;
    }
    */

    /*
    int n;
    cout << "Enter the value of n:->" << endl;
    cin >> n;
    int answer = AP(n);
    cout << "Answer is:->" << answer << endl;
    */
}