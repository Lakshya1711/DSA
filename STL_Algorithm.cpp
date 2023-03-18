#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<binary_search(v.begin(),v.end(),4)<<endl;


    int a=5,b=3;
    string s = "ABCD";

    cout<<"Max ->"<<max(a,b)<<endl; 
    cout<<"Min ->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a ->"<<a<<endl;

    reverse(s.begin(),s.end());
    cout<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
cout<<endl;
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
}