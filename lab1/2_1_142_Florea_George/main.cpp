#include <iostream>

using namespace std;

int main()
{
    int v[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    int x, ok=0;
    cin>>x;
    for(int i=0;i<n;i++)
        if(v[i]==x)
            ok=1;
    if(ok==1)
        cout<<"gasit";
    else
        cout<<"nu exista";
    return 0;
}
