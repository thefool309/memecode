#include <iostream>
#include <windows.h>
using namespace std;
// it's a crappy calculator that delivers a devastating rick roll 
int main() 
{
    cout << "Enter Two Numbers: " << endl;
    int first;
    int second;
    cin >> first >> second;  
    
    cout << "enter an Operator: " << endl;
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << first + second << endl;
        break;
    case '-':
        cout << first - second << endl;
        break;
    case '/':
        cout << first / second << endl;
        break;
    case '*':
        cout << first * second << endl;
        break;
    default:
        cout << "invalid operator!";
        break;
    }

    for(int i=0; i<1; i++)
    
    {
    ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_SHOWNORMAL);
    }


    system ("pause");

    return 0;
}
