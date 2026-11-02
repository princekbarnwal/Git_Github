#include<iostream>
using namespace std;
int function(int a, int b){
    return a + b;
}
int main(){
    int a, b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    int res = function(a, b);
    cout<<"The value of a and b is : "<<res;
    return 0;
}