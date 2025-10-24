#include <iostream>

using namespace std;

namespace first  { int x = 1; }

int main()
{

    using namespace first;

    cout<< " value of x in first is = " <<x << endl;
}