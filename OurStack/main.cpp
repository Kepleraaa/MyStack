/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
#include "OurStack.h"
using namespace std;

int main()
{
    OurStack<int> ourstack;
    cout<<"enter OurStack:";
    cin>>ourstack;
    cout<<"the OurStack is: "<<ourstack<<endl;
    cout<<"OurStack.peek()= "<<ourstack.peek()<<endl;
    cout<<"OurStack.pop() "<<ourstack.pop()<<endl;
    int value;
    cout<<"push value: ";
    cin>>value;
    ourstack.push(value);
    cout<<"OurStack.push(value)="<<ourstack<<endl;

    OurStack<int> ourstack1;
    cout<<"enter OurStack1:";
    cin>>ourstack1;
    if(ourstack == ourstack1){
        cout<<"OurStack == OurStack1"<<endl;
    }
    else{
        cout<<"OurStack != OurStack1"<<endl;
    }
    if(ourstack.equals(ourstack1)){
        cout<<"OurStack is equal to OurStack1"<<endl;
    }
    else{
        cout<<"OurStack is not equal to OurStack1"<<endl;
    }
    return 0;
}
