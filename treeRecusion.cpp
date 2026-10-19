#include<iostream>
using namespace std;

void treefun(int n){
    if(n>0){
        cout<<n<<" ";
        treefun(n-1);
        treefun(n-1);
    }
}

int main(){
    int n =3;
    treefun(n);
    return 0;
}