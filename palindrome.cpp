#include<iostream>
using namespace std;

char tolowercase(char ch){
  if(ch >='a' && ch<='z'){
    return ch;
  }
  else{
    char temp= ch-'A'+'a';
  }
}

bool checkpalindrome(char a[], int n){
  int s=0;
  int e=n-1;
  while(s<=e){
    if (tolowercase( a[s]) != tolowercase (a[e]) ){
      return 0;
    }
    else{
      s++;
      e--;
    }
  }
  return 1;
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

  cout<<"palindrome or not"<<checkpalindrome(name,n)<<endl;
 // reverse(name,n);
  cout<<"now name"<<name<<endl;
return 0;
}