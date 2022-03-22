#include <iostream>
using namespace std;
int pivot(int *v, int p, int u){
    int i=p, j=u;
    int depli = 0, deplj = -1;
    while(i<j){
        if(v[i] < v[j]){
            swap(v[i], v[j]);
            int aux = depli;
            depli = -deplj;
            deplj = -aux;
        }
        i += depli;
        j += deplj;
    }
    return i;
}

void Quick_Sort(int *v, int p, int u){
    if(p < u){
        int m = pivot(v, p, u);
        Quick_Sort(v, p, m-1);
        Quick_Sort(v, m+1, u);
    }
}

int main() {
    int n;
    cin>>n;
    int *v;
    v = new int[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    Quick_Sort(v, 0, n-1);

    for(int i=0;i<n;i++)
        cout<<v[i]<< " ";
    delete[] v;

    return 0;
}
