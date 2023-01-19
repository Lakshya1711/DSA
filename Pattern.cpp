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

/*
13.  A B C
     D E F
	 G H I
	 
int n;
cin >>n;
int i=1;
char ch='A';
while(i<=n){
	int j=1;
	while (j<=n){		
		cout<<ch<<" ";
		ch++;
		j++;
	}
	cout<<endl;
	i++;
}
*/

/*
14. A B C
    B C D
	C D E
	 
int n;
cin>>n;
int i=1;
while(i<=n){
	int j=1;
	while(j<=n){
		char ch='A'+i+j-2;
		cout<<ch;
		j++;
	}
	cout<<endl;
	i++;
}
*/

/*
15. A
    B B
	C C C
	
int n;
cin>>n;
int i=1;

while(i<=n){
	int j=1;
	
	while(j<=i){
		char ch='A'+i-1;
		cout<<ch<<" ";
		ch++;
		j++;
	}
	cout<<endl;
	i++;
}
*/

/*
16.  A
     B C
	 D E F
	 G H I J

int n;
cin>>n;
int i=1;
char ch='A';
while(i<=n){
	int j=1;
	while(j<=i){
		
		cout<<ch<<" ";
		ch++;
		j++;
	}
	cout<<endl;
	i++;
}
*/

/*
17. A
    B C
	C D E 
	D E F G

int n;
cin>>n;
int i=1;
while(i<=n){
	int j=1;
	while(j<=i){
		char ch = 'A'+i+j-2;
		cout<<ch<<" ";
		ch++;
		j++;
	}
	cout<<endl;
	i++;
}
*/

/*
18. D
    C D
	B C D
	A B C D

int n;
cin>>n;
int i=1;
while(i<=n){
	int j=1;
	char ch = 'A'+n-i;
	while(j<=i){
		cout<<ch<<" ";
		ch++;
		j++;
	}
	cout<<endl;
	i++;
}
*/

/*
19.        *
         * *
	   * * *
	 * * * *

int n;
cin>>n;
int i=1;
while(i<=n){
	int k=n-i;
	while(k){
		cout<<" ";
		k--;
	}
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
20. * * * *
    * * *
	* * 
	*

int n;
cin>>n;
int i=1;
while(i<=n){
	int j=n-i+1;
	while(j){
		cout<<"*";
		j--;
	}
	cout<<endl;
	i++;
}
*/

/*
21. * * * *
      * * *
	    * *
		  *

int n;
cin>>n;
int i=1;
while(i<=n){
	int k=i-1;
	while(k){
		cout<<" ";
		k--;
	}
	int j=n-i+1;
	while(j){
		cout<<"*";
		j--;
	}
	cout<<endl;
	i++;
}
*/

/*
22. 1 1 1 1
      2 2 2 
	    3 3 
		  4

int n;
cin>>n;
int i=1;
while(i<=n){
	int k=i-1;
	while(k){
		cout<<" ";
		k--;
	}
	int j=n-i+1;
	while(j){
		cout<<i;
		j--;
	}
	cout<<endl;
	i++;
}
*/

/*
23.        1
         2 2
	   3 3 3
	 4 4 4 4  	 

int n;
cin>>n;
int i=1;
while(i<=n){
	int k=n-i;
	while(k){
		cout<<" ";
		k--;
	}
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
24. 1 2 3 4
      2 3 4 
	    3 4
		  4
		  
		  */
int n;
cin>>n;
int i=1;
while(i<=n){
	int k=i-1;
	while(k){
		cout<<" ";
		k--;
	}
	int j=n-i+1;
	while(j){
		cout<<j;
		j++;
	}
	cout<<endl;
	i++;
}		  	  		  		 			 			
}