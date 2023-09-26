#include <iostream>
using namespace std ;

int main() {
int arr [5];
  for (int i=0 ; i<5; i++)
    {
        cout<<"enter input ";
      cin>>arr[i];
    }

  int sum=0;
  for (int i = 0 ; i <5; i++)
      sum= arr[i]+sum ;
        cout<<"sum is :"<<sum<<endl ;
}


#include <iostream>
using namespace std ;

int main() {
int arr [5]= {2,4,6,8,10};
  int target =10;
  int n =5;

  bool flag =0;

  for (int i =0; i <n ; i++)
    {
      if (arr[i]==target ){
        flag=1;
        break ;
      }
    }
  if (flag == 1){
    cout<<"target found "<<endl ;
  }
  else {
    cout<<"target not found "<<endl ; 
  }
  return 0;
}