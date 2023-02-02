#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	/*
	int n,d,rev=0;
	cin>>n;
	while(n!=0){
	d=n%10;
	rev=rev*10+d;
	n=n/10;
	}
	cout<<rev<<endl;
	*/
	
	int n,x=0;
	while(n/2){
		if(pow(2,x)==n){
			return true;
		}
		else{
			return false;
		}
		x++;
		n--;
	}
}