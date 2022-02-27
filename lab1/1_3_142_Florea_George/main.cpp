#include <iostream>

using namespace std;

int main()
{
    int v[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n-1;i++){
        int maxi=i;
        for(int j=i+1;j<n;j++)
            if(v[j]>v[maxi])
                maxi=j;
        swap(v[i],v[maxi]);
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

    return 0;
}
