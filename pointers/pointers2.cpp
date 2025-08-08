#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={0};
    //// 4*10 bytes memory
    int *ptr = arr; 
    cout<<*ptr<<endl;
    cout<<arr<<endl;
    cout<<*arr + 1<<endl; // 0+1=1
    cout<<*(arr+1)<<endl; // arr[1]= 0
    cout<<arr[1]<<endl; // 0
    cout<<*(arr+1)<<endl; // 0
    cout<<1[arr]<<endl; // 0 valid here arr[i] == *(arr + i) == *(i + arr) == i[arr]
    cout<<*(1+arr)<<endl; // 0
    int a[20] = {1,2,3,4, 5};
    cout<<a[0]<<endl; // 1
    cout<<&a[0]<<endl; // address of a[0]
    cout<<&a<<endl; // address of a[0] and a is same ok // byt type is different
    cout<<a<<endl; // address of a[0]
    cout<<&a[1]<<endl; // addrerss increases by 4 bytes for next value
    cout<<*(a+1)<<endl;
    cout<<*a+10<<endl; 
    cout<<&a+1<<endl; // no what is this value 
    // a = pointer to first int
    // &pointer to whole array type: int(*)[20]
    // so &a+1 skips entire array of 20 ints = moves 80 bytes ahead
    // also everytime i run again pointer value chnages whyyy
    // memory is allocated at runtime so it chnages everytime
    int *p = &a[0];
    cout<<p<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl; // and what is this value
    p+=1;
    cout<<p<<endl; //and what is now, ok ig we increased by 1 no so 4 bytes increased
    //char c[6] = "abcdef"; // why an error here??
    // trying to fit 6 chars + null terminator \0 into 6 slots
    char c[7] = "abcdef";
    cout<<c<<endl;
    char *k = &c[0];
    cout<<k<<endl; // why same thing and not address here??
    /*
    This is special behavior in C++.

If k is a char*, and you do cout << k, then it does not print the address.

Instead, cout assumes k
 points to a null-terminated string (like "abcdef\0"), and 
 it prints characters starting from that address until it hits \0.*/
    cout<<*k<<endl; // and here im getting c[0] ok
    cout << (void*)k << endl;
    /*
    You’ll get an address, not the actual numbers, because cout doesn't treat int* like it treats char*.
*/


}