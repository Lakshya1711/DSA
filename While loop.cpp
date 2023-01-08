#include<iostream>
using namespace std;

int main(){

/* 1. Sum of no.	
int n,i=1,sum=0;
cin>>n;
while (i<=n){
	sum=sum+i;
	i++;
}
cout<<sum;
*/

/* 2. Sum of all Even no.
int n,i=1,sum=0;
cin>>n;
while(i<=n){
	if(i%2==0){
		sum=sum+i;
	}
	i++;
}
cout<<"Sum of Even no. is:"<<sum;
*/

/*3. Table
int n,i=1;
cin>>n;

while(i<=10){
	cout<<n<<"*"<<i<<"="<<n*i<<endl;
	i++;
}
*/

/* 4. Prime No.
int n,i=2,c=0;
cin>>n;

while(i<=n){
	if(n%i==0){
		c++;
	}
	i++;
}
if(c>1){
		cout<<"Not Prime No.";
	}
	else if (c=1){
		cout<<"Prime No.";
	}
*/	
}