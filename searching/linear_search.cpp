#include<iostream.h>
using namespace std;

int main()
{
  int arr[10];
  for(int i=0;i<10;i++)
  {
    cin>>arr[i];
  }
  int search_key;
  cin>>search_key;
  for(int i=0;i<10;i++)
  {
    if(search_key==arr[i])
    {
      cout<<"Search key "<<search_key<<" found at "<<i+1<<" location."<<endl;
      break;
    }
  }
  
  cout<<"Search key "<<search_key<<" is not present in given array."
  
  return 0;
}
