#include<iostream>
using namespace std;
void reverse(char name[],int n)
{
  int s=0;
  int e=n-1;
  while(s<=e)
  {
    swap(name[s++],name[e--]);
  }
}
int getlength(char name[])
{
  int count=0;
  for(int i=0;name[i]!= '\0';i++){
    count++;
  }
  return count;
}
int main()
{
  int n=0;
  char name[20];
  cout<<"enter ur name"<<endl;
  cin>> name;
  

  cout<<"your name is";
  cout<<name<<endl;
  n=getlength(name);
  cout<<"length"<< n<< endl;
  reverse(name,n);
  cout<<"now name"<<name<<endl;
return 0;
}