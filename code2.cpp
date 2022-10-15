
#include <iostream>
using namespace std;
int flage=0;
void check(int n)
{
  
  for(int i=2;i<n;i++)
  {
  if (n%i==0)
  {
    
    cout<<"not a prime number "<<endl;
    flage=1;
    break;
  }
  }
  if(flage==0)
  {
    cout<<"prime number "<<endl;
  }

}


int main(){
  int number;
  cout<<"Enter your number :"<<endl;
  cin>>number;
  check(number);

  
  return 0;
}
