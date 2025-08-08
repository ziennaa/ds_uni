#include <bits/stdc++.h>
using namespace std;
int swapno(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return *a, *b;
}
int main(){
    int a=3, b=5;
    cout<<"before swapping"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    swapno(&a, &b);
    cout<<"after swapping"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}