#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout<<"Hi, please enter two numbers: ";
    int x,y;
    cin >> x >> y;
    cout << x + y << endl;
    cout << x / y << endl;
    char c = "c";
    delete c;
    cout << c << endl;
    return 0;
}
