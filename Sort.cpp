#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
const int n = 1000000;
int a[1000005];

int main() 
{
    for (int Test = 1; Test <= 10; ++Test) 
    {
        string filename = "input/test" + to_string(Test) + ".inp";
        ifstream fi(filename);
        for (int i = 0; i < n; ++i) fi >> a[i];
        auto starttime = high_resolution_clock::now();
        sort(a, a+n);
        auto finishtime = high_resolution_clock::now();
        cout << duration_cast<microseconds>(finishtime - starttime).count() <<'\n';
    }
    return 0;
}