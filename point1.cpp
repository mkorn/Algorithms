#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{
    int x, y, A, B, C;
    cin>>x>>y>>A>>B>>C;
    int r=x*A+y*B+C;
    if(r==0)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}
