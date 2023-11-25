#include<iostream>
using namespace std;
main()
{
   int n;
   int arry[n];
   cout<<"Enter Length of Arry=";
   cin>>n;
   for(int i=0 ; i<n;i++)
   {
   	cout<<"Enter Index ["<<i<<"]=";
   	cin>>arry[i];
   }
//   swap value between two indexes
   for(int i=0;i<=n-1;i++)
   {
   	for(int j=0;j<n-i-1;j++)
     {
   		if(arry[j]>arry[j+1])
   		{
   		   int temp=arry[j];
			  arry[j]=arry[j+1];
			  arry[j+1]=temp;	
		}
	 }
    }
    cout<<"\tSorted ARRY >>>... ";
    for(int i=0;i<n;i++)
    {
    	cout<<arry[i]<<" ";
	}
} 

