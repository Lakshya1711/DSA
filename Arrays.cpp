/*
 
array -->  Similar type of Data/item
           contiguous location.
           
Advantage of array ((WHY ?))
Can store multipl value at single variable.

Declration
int a[10];    array of 10 memory block. variable name a

*/ 

#include<iostream>
using namespace std;
/*
1.) Get Maximum and minimum from the array.


int getmax(int max[], int n){	
	int maxx = INT_MIN;
	for(int i=0;i<n;i++){
		if(maxx<= max[i]){
			maxx=max[i];
		}
	}
 	return maxx;
}
int getmin(int min[], int n){
	int minn = INT_MAX;
	for(int i=0;i<n;i++){
		if(minn>= min[i]){
			minn=min[i];
		}
	}
 	return minn;
}
int main(){
	
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Maximum no. in an array is : "<< getmax(arr, n)<<endl;
	cout<<"Minimum no. in an array is : "<< getmin(arr, n)<<endl;	
}
*/

/*
2.) Scope of an arrary

void update(int arr[],int n){
	arr[0]=120;
		for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

int main(){
	int arr[3]={1,2,3};
	update(arr,3);
//	for(int i=0;i<3;i++){
	//	cout<<arr[i]<<" ";
//	}
}
*/

/* 
3.) Print Sum of an array.

void sum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum = sum + arr[i];
	}
	cout<<"Sum of an array is : "<<sum<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sum(arr,n);
}
*/

/*
4.) Linear Search

linear_search(int arr[],int n,int key){
	for(int i=0;i<10;i++){
		if(arr[i]==1){
			cout<<"Found "<<key<<" at index : "<<i<<endl;
		}
	}
	return 0;
}
int main(){
	int arr[10]={5,20,-8,5,6,2,10,85,1,36};
	int key;
	cin >>key;
	linear_search(arr,10,key);
}
*/

/*
5.) Reverse array

reverse(int arr[],int n){
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	return 0;
}
int main(){
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	reverse(arr,n);
}
*/

/*
6.) Swap Alternative

swap(int arr[],int n){
	int temp;
	for(int i=0;i<n;i=i+2){
		if(i+1<n){
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
int main(){
	int n,arr[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	swap(arr,n);
}
*/

/*
7.) Find Unique

Unique(int arr[],int n){
	int remain=0;
	for(int i=0;i<n;i++){
			remain=remain^arr[i];
		}		
	return remain;
}

int main(){
		int n,arr[100];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		Unique(arr,n);
	}
*/

/*
8.) Array Intersaction

intersaction(int arr1[],int arr2[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=n;j++){
			if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<" ";
			}
		}
	}
	return 0;
}

int main(){
	int n,arr1[100],arr2[100];
cin>>n;
for(int i=0;i<n;i++){
	cin>>arr1[i];
}
for(int j=0;j<n;j++){
	cin>>arr2[j];
}
intersaction(arr1,arr2,n);
}
*/

/*
9.) Pair Sum
*/
pair(int arr[],int n,int sum){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==sum){
				cout<<arr[i]<<" "<<arr[j]<<endl;
			}
		}
	}
	return 0;
}
int main(){
	int n,arr[100];
	cin>>n;
	int sum;
	cout<<"Enter Pair Sum : ";
	cin>>sum;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	pair(arr,n,sum);
}