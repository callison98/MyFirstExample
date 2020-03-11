#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void test() {
  int *p = new int;
} 
int main()
{
    cout<<"Hi, please enter two numbers: ";
    int x,y;
    cin >> x >> y;
    cout << x + y << endl;
    cout << x / 0 << endl;
    int *p = new int;
    test();
    return 0;
}

// warn
