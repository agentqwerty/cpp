#include <string.h>
#include <algo.h>
#include <vector.h>
#include <stdlib.h>
#include <iostream.h>

int main()
{
    vector<int> v; //empty vector of integers
    int input;
    while (cin >> input)
        v.push_back(input);

    sort(v.begin(), v.end());
    for(int i=0; i < v.size(); i++)
        cout << v[i] << "\n";

    return 0;
}
