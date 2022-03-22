#include <iostream>
using namespace std;

void interclaseaza(int v[], int s, int m, int d){
    int *aux;
    aux = new int[d-s+1];
    int i = s, j = m+1, k = 0;
    while(i <= m && j<= d){
        if(v[i] <= v[j])
            aux[k++] = v[i], i++;
        else
            aux[k++] = v[j], j++;
    }
    while(i <= m){
        aux[k++] = v[i], i++;
    }
    while(j <= d){
        aux[k++] = v[j], j++;
    }
    for(i = s; i <= d; i++)
        v[i] = aux[i-s];
    delete[] aux;
}

void Merge_Sort(int v[], int s, int d){
    if(s <= d){
        int m = (s+d)/2;
        Merge_Sort(v, s, m);
        Merge_Sort(v, m+1, d);
        interclaseaza(v, s, m, d);
    }
}
int main() {
    int v[] = {5, 9, 1, 4, 6,2,7,3,8};
    int n = 8;
    Merge_Sort(v, 0, n);
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
