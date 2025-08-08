#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;
    cout<<num<<endl;
    /*
    memory = symbol table
    symbol table? created and maintained by the compiler in order to keep track of semantics of variables
    what is semantics tho?
    i.e it stores information about scope and bindinf information about names about instances of various entitiies such as
    variable and function name class objects etc*/
    /*
    int num=5; 
    let's say num address is 120 and it is mapped by symbol table
    */
   // address of operator
   cout<<"Address of num: "<<&num<<endl;
   // we get a hexadecimal value, why hexadecimal tho
   // memory is organised in bytes and hex is a compact way of expressing bianry?
   cout<<"Address of num: +1: "<<&num+1<<endl; // increases by 4 bytes so num address was 0x67905ff7f4 after adding 1 it is 0x67905ff7f8 4 -> 8
   // sorring address is a work of pointers so
   int *ptr = &num;
   // also here, ptr is a pointer of int datatype
   // and obviously ptr and num should be of the same datatype
   cout<<"pointer, printing ptr: "<<ptr<<endl; // printing ptr is same as printing &num 
   cout<<"pointer, printing *ptr: "<<*ptr<<endl; // * is used for derefencing so ptr points to address, * ddeferences it and gives out value
   cout<<"address of num, : "<<&num<<endl;
   cout<<"lets see what do we get at &ptr "<<&ptr<<endl; // ok this is new, what is it man???
   cout<<"&ptr is giving address of the pointer variable itself i.e where pointer is stored in memory s
   so evenn though ptr stores address of num
   ptr itself is stored somewhere in memory
   &ptr gives location"<<endl;
   cout<<"lets see what do we get at &*ptr  :"<<&*ptr<<endl; // ok this is also new what it is man
   cout<<"&*ptr :
   *ptr gives value at address which is num
   &*ptr gives address of the value i.e address of num 
   so &*ptr == &num and same for *&ptr as *and& cancel each other out"<<endl;
   cout<<"num: "<<num<<endl;
   //cout<<"pointer, printing *num: "<<*num<<endl; // sp this doesnt work, why?
   // above doesnt work cuz num is int and not address
   // u can only derefence something i.e a pointer 
   /*
   it is a very bad pracctice to do 
   int *ptr; 
   this stores garbage value and one should avoid
   always initialise first
   also, can i intialse pointer with same name everytime? like evrerytime im doing int *ptr= "whatver variable ive ok" */
   //int *p;
   //cout<<"garbage value didn't initialise p before :"<<p<<endl;
   /*
   int *p;
   cout<<"garbage value didn't initialise p before :"<<p<<endl;
   instead of getting garbage value as it was getting it to my instructor im getting 0 on printing idk why, pls explain*/
   //cout<<"garbage value didn't initialise p before :"<<*p<<endl;
   // and here i got nothing printed?? why my sir was getting segmentation fault or some garbage value

   // new 
   int i = 5;
   int *p = 0;
   p = &i;
   cout<<p<<endl; // address of i , got it by p
   cout<<&i<<endl; // address of i, got it by &i
   cout<<*p<<endl; // value of i, got it be derefencing *p
   cout<<i<<endl; // value of i by printing i
   i++;
   cout<<"i++: "<<i<<endl;
   cout<<"i++, *p:  seeing if after derefencing value increases or not"<<*p<<endl; // it did!
   cout<<"i++: seeing if address remains same or not: p :  "<<p<<endl; // address chnaged ig
   cout<<"i++: seeing if address remains same or not: &i :  "<<i<<endl;
   (*p)++;
   cout<<"(*p)++: "<<i<<endl;
   cout<<"(*p)++, *p:  seeing if after derefencing value increases or not"<<*p<<endl; 
   cout<<"(*p)++: seeing if address remains same or not: p :  "<<p<<endl; // address same after increasingg *p++ but not when i++ why???
   // *p++ increases i because *p referes to same memory as i
   // address not chnaged in both situtaion
   cout<<"(*p)++: seeing if address remains same or not: &i :  "<<i<<endl;

   // new
   // copying a pointer
   int *q = p;
   cout<<"*q: "<<*q<<endl;
   cout<<"*p: "<<*p<<endl;
   cout<<"q: "<<q<<endl;
   cout<<"p: "<<p<<endl;
   cout<<"&p: "<<&p<<endl; // what is this
   cout<<"&q: "<<&q<<endl; // what is this


}
