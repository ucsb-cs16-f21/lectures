#include <iostream>
using namespace std;

int main() {
   int x = 42;
   int *a = &x;
   cout << "Before x = " << x << endl;
   cout << "Before *a = " << *a << endl;
   cout << "Now we do *a = 79" << endl;
   a = (int *)(79);
   cout << "After x = " << x << endl;
   cout << "After *a = " << *a << endl;
   return 0;
}
