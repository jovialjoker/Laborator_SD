/** varianta O(n*logm)

#include <iostream>
using namespace std;
int cautare_bin(int A[], int s, int d, int x){
    if(s > d)
        return s;
    else{
        int m = (s+d)/2;
        if(A[m] == x)
            return m;
        else if(A[m] > x)
            return cautare_bin(A, s, m-1, x);
        return cautare_bin(A, m+1, d, x);
    }
}
void shift_right(int A[], int n, int m, int x){
    for(int i = (n-m-1+x); i>x; i--)
        A[i] = A[i-1];
}
int main() {
    int A[] = {1, 3, 5, 7, 0, 0, 0}, B[] = {2, 4,6};
    int n = 7, m = 3;
    int i = 0, j = 0;
    while(i<n-m){
        int poz = cautare_bin(A, i, n-m-1, B[j]);
        shift_right(A, n, m, poz);
        A[poz] = B[j];
        i = poz;
        j++;
    }
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    return 0;
}
*/
///varianta o(m+n)
#include <iostream>
using namespace std;

int main(){
    int A[] = {1, 3, 5, 7, 0, 0, 0}, B[] = {2, 4,6};
    int n = 7, m = 3;
    int i = n-m-1, k = n-1, j = m-1;
    while(k>=0){
        if(A[i] > B[j])
            A[k--] = A[i], i--;
        else
            A[k--] = B[j], j--;
    }
    for(int i=0;i<n;i++)
        cout<<A[i]<< ' ';
    return 0;
}