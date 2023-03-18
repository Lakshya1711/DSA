#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[1]="Lakshya";
    m[2]="Srivastava";
    m[5]="Hello";

    m.insert( {6,"World"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }

    cout<<"Finding 6 -> "<<m.count(6)<<endl;
}