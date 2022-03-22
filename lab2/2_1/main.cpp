#include <iostream>
using namespace std;
void heapify(int* v, int n, int i){
    int maxi = i, s = 2*i+1, d = 2*i+2;
    int aux1 = s*(s < n && v[s] > v[maxi]);
    int aux2 = d*(d < n && v[d] > v[maxi]);
    int aux;
    if(aux1 != 0 && aux2 != 0)
        aux = aux1 * (v[aux1]>v[aux2]) + aux2 * (v[aux1]<v[aux2]);
    else
        aux = maxi * !(aux1 + aux2) + aux1 + aux2;
    maxi = aux;
    if(maxi != i){
        swap(v[i], v[maxi]);
        heapify(v, n, maxi);
    }
}
void decapitare(int* v, int n){
    for(int i=n-1; i>=0; i--){
        swap(v[0], v[i]);
        heapify(v, i, 0);
    }
}

void Heap_Sort(int* v, int n){
    for(int i=n/2-1; i>=0; i--)
        heapify(v, n, i);
    decapitare(v, n);
}
int main() {
    int n;
    cin>>n;
    int *v;
    v = new int[n];
    for(int i=0; i < n; i++)
        cin>>v[i];
    Heap_Sort(v, n);
    for(int i=0;i<n;i++)
        cout<<v[i]<< " ";
    delete[] v;
    return 0;
}
