#include<iostream>
using namespace std;
int main(){
/*	
1. ***
   ***
   ***	
	
	int n;
	cin>>n;
	int i=1;
	while (i<=n){
	  int j=1;
	  	while (j<=n){
	  		cout<<"*";
	  		j++;
		  }
		  cout<<endl;
		  i++;
		
	}
*/

/*
2. 111
   222
   333
   
int n;
cin>>n;
int i=1;
while (i<=n){
	int j=1;
	while (j<=n){
		cout<<i;
		j++;
	}
	cout<<endl;
	i++;
}
*/

/*
3. 1234
   1234
   1234
   1234

int n;
cin>>n;
int i=1;
while(i<=n){
	int j=1;
	while(j<=n){
		cout<<j;
		j++;
	}
	cout<<endl;
	i++;
}
*/

/*
4. 321
   321 
   321

   
   int n;
   cin>>n;
   int i=1;
   while (i<=n){
   	int j=1;
   	while (j<=n){
   		cout<<n-j+1;
   		j++;
	   }
	   cout<<endl;
	   i++;
   }
*/

/*
5.  123
    456
	789

	int n;
	cin>>n;
	int i=1,count=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<count;
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}   
*/

/*
6. *
   **
   ***
   ****

int n;
cin>>n;
int i=1;
while(i<=n){
	int j=1;
	while(j<=i){
		cout<<"*";
		j++;
	}
	cout<<endl;
	i++;
}
*/

/*
7.  1
    22
	333
	4444
		
	int n;
cin>>n;
int i=1;
while(i<=n){
	int j=1;
	while(j<=i){
		cout<<i;
		j++;
	}
	cout<<endl;
	i++;
}
*/	

/*
8. 1
   23
   456
   78910
  
    int n;
cin>>n;
int i=1,count=1;
while(i<=n){
	int j=1;
	while(j<=i){
		cout<<count;
		count++;
		j++;
	}
	cout<<endl;
	i++;
} 
 */
 
 /*
 9. 1
    23
	345
	4567
	
	  int n;
cin>>n;
int i=1;
while(i<=n){
	int j=1,c=i;
	while(j<=i){
		cout<<c;
		c++;
		j++;
	}
	cout<<endl;
	i++;
} 
*/

/*
10. 1
    21
    321
    4321
    
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
    	int j=1,c=i;
    	while(j<=i){
    		cout<<c;
    		c--;
    		j++;
		}
		cout<<endl;
		i++;
	}
*/

/*
11. AAA
    BBB
    CCC
    
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
    	int j=1;
    	while(j<=n){
    		char ch = 'A'+i-1;
    		cout<<ch<<" ";
    		j++;
		}
		cout<<endl;
		i++;
	}
*/

/*
12. A B C
    A B C
	A B C

	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while (j<=n){
			char ch = 'A'+j-1;
			cout<<ch<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
*/
		
}