#include <iostream>
#include <cstring>

using namespace std;
bool anagrame(char v[],char u[]){
    for(int i=0;i<strlen(v);i++)
        for(int j=0;j<strlen(v);j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    for(int i=0;i<strlen(u);i++)
        for(int j=0;j<strlen(u);j++)
            if(u[i]>u[j])
                swap(u[i],u[j]);
    for(int i=0;i<strlen(v);i++)
        if(v[i]!=u[i])
            return false;
    return true;
}
int main()
{
    char v[1000][1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            unsigned int n1=strlen(v[i]),n2=strlen(v[j]);
            char aux1[strlen(v[i])], aux2[strlen(v[j])];
            strcpy(aux1,v[i]);
            strcpy(aux2,v[j]);
            int rez=anagrame(v[i],v[j]);
            strcpy(v[i],aux1);
            strcpy(v[j],aux2);
            if(n1==n2 && rez==1)
                swap(v[i+1],v[j]);
        }

    for(int i=0;i<n;i++)
        cout<<v[i]<<endl;
    return 0;
}
