#include <iostream>
using namespace std;
int main()
{
int speed = 0 , zp = 0;
string num;

do {
    if( speed > 60){
        if( num[1] == num[2] && num[2] == num[3]) { zp += 1000;}
        else if( num[1] == num[2] || num[2] == num[3] || num[1] == num[3]) { zp += 500;}
        else {zp += 100;}
        }
        cin >> speed >> num;

} while( num != "A999AA");
cout << zp;
}
