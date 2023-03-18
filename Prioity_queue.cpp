#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> max;  //max heap
    priority_queue<int ,vector<int> , greater<int>> min;  // min heap

    max.push(3);
    max.push(4);
    max.push(1);
    max.push(0);

//    cout<<max.size()<<endl;
int n = max.size();
for(int i=0;i<n;i++){
    cout<<max.top()<<" ";
    max.pop();
}

    min.push(3);
    min.push(4);
    min.push(1);
    min.push(0);
cout<<endl;
    int a = min.size();
    for(int i=0;i<n;i++){
    cout<<min.top()<<" ";
    min.pop();
}

}