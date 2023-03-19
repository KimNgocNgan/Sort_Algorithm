#include <bits/stdc++.h>

using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd
const int size_array = 1000000; 
int num[size_array + 5];

void decreasing_num() 
{
    ofstream fo("test1.inp"); 
    for (int i = 0; i < size_array; i++ )
        num[i] = rand(); 
    sort(num, num + size_array, greater<int>() ); 
    for (int i = 0; i < size_array; i++ )
        fo << fixed << num[i] << ' ';
    fo.close();
}

void increasing_num() 
{
    ofstream fo ("test2.inp");  
    for (int i = 0; i < size_array; i++ )
        num[i] = rand();
    sort(num, num + size_array );
    for (int i = 0; i < size_array; i++ )
        fo << num[i] << ' ';
    fo.close();
}

void random_num() 
{
    for (int i = 3; i <= 10; i++ ) 
    {
        string file_name = "test" + to_string(i) + ".inp"; 
        ofstream fo (file_name); 
        for (int i = 0; i < size_array; i++ )
            fo << rand() << ' ';
        fo.close();
    }
}

int main() 
{
    decreasing_num(); 
    increasing_num();
    random_num();
    return 0;
}