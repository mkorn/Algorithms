#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<y2-y1<<" "<<-(x2-x1)<<" "<< -x1*(y2-y1) - y1*(-(x2-x1));
    
    return 0;
}
