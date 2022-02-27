#include <iostream>

using namespace std;
int v[1000],n;
int cautare_bin(int s, int d, int x){
    if(s>d)
        return 0;
    int m=(s+d)/2;
    if(v[m]==x)
        return m;
    else if(v[m]>x)
        cautare_bin(s, m-1,x);
    else
        cautare_bin(m+1,d,x);

}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    int x;
    cin>>x;
    int y=cautare_bin(0,n-1,x);
    if(x==v[y])
        cout<<"gasit";
    else
        cout<<"nu exista";
    return 0;
}
