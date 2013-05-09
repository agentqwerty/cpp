// Imports
#include <iostream>
#include <string>

// Namespace
using namespace std;

// Defines
#define PI 3.14159

int addstuff (int a, int b) {
    return a+b;
}

void print (string s)
{
    cout << s << "\n";
}

int main ()
{
    string someString = "This is a string";
    print(someString);
    int addResult = addstuff(5, 4);
    float someFloat = 10.40*PI;

    if (addResult < someFloat) {
        print("ar < someFloat");
    }

    float what = addResult + someFloat;
    char c = 'c';

    for (int i = 0; i < 10; i++) {
        cout << "num: " << i << "\n";
    }

    cout << "what: " << what << "\n";
    cout << "Enter Age:\n>>>";
    int i;
    cin >> i;
    cout << "Age: " << i << "\n";
    return 0;
}
