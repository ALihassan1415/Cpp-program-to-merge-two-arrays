//Write a program to merge two unsorted arrays of different length...

#include<iostream>
using namespace std;
int main()
{
	int arr1[10] , arr2[10] , Merge[20];
	int n,m,i;
	cout<<"Enter ther size of 1st array : "<<endl;
	cin>>n;
	cout<<"Enter ther size of 2nd array : "<<endl;
	cin>>m;
			cout<<"Enter "<<n<<" values of Array 1 : "<<endl;
		    for( i=0;i<n;i++)
		    {
		 	cout<<"Enter value "<<i+1<<" : ";
 	        cin>>arr1[i];
		 	Merge[i]=arr1[i];
		    }
			 
			cout<<"Enter "<<m<<" values of Array 2 : "<<endl;
			  for( i=0; i<m; i++)
		    {  
		    cout<<"Enter value "<<i+1<<" : ";
         	cin>>arr2[i];
		 	Merge[i+5] = arr2[i];
		
	     	 }
			  cout<<"\nThe merged array is : "<<endl;	
			for( i=0; i<n+m; i++) 
			{
				cout<<Merge[i]<<"\t";

			}
			return 0;
}






















