#include <iostream>
using namespace std;
//int incrementAll(int *a){
//    for(auto i: a){
//        i += 10;
//    }
//}
//int main(){
//    int a[5]={1,2,3,4,5};
//    incrementAll(&a);
/* a is already the name of the array and it decays into a pointer to first element int*
&a is a pointer to the whole array which is of different type
*/
//}
//void incrementAll(int *a, int n){
//    for(int i=0; i<n; i++){
//        a[i] += 10;
//    }
//}
//void incrementAll(int *a, int n){
//    for(int i=0; i<n; i++){
//       *(a+i) += 10;
//    }
//}
//int main(){
//    int a[5] = {1,2,3,4,5};
//    incrementAll(a, 5);
//    for(int i=0; i<5; i++){
//        cout<<a[i]<<" ";
//    }
//}
// in cpp one can also do like
void incrementAll(int (&a)[5]){
    for(auto &x: a){
        x += 20;
    }
}
int main(){
    int a[5] = {1,2,3,4,5};
    incrementAll(a);
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
}