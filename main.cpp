#include <iostream>
using namespace std;
#include "list.h"

int main()
{
    // instantiate a List class (the constructor takes NO arguments)
    List list;

    // NOTE:
    // List list();  is incorrect, when there are no arguments don't use ()

    // insert numbers into the list
    int a;
    while (cin >> a)
    {
        list.insert_at_end(a);
    }
    list.print();
    int sum = list.sum();
    cout << "sum = " << sum << endl;

    return 0;
}
