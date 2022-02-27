#include <iostream>

using namespace std;

int main()
{
    int v[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0){
            if(v[j-1]>v[j])
                swap(v[j-1],v[j]);
            j--;
            }

    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
