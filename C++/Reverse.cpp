#include <iostream>  
using namespace std;  
int main()  
{  
int n, rev=0, rem;    
cout<<"Enter the number: ";    
cin>>n;    
  while(n!=0)    
  {    
     rem=n%10;      
     rev=rev*10+rem;    
     n/=10;    
  }    
 cout<<"After Reversal: "<<rev<<endl;     
return 0;  
}  
