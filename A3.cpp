#include <iostream>
using namespace std;
int main()
{
int n, s = 0, k = 0;
cin >> n;
int a[n];
for( int i = 0; i < n; i++){
cin >> a[i];
s += a[i];
}
for( int j = 0; j < n; j++){
    if( a[j] > s / n){ k += a[j];}
        }
cout << k;
return 0;
}
