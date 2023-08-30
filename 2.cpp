#include <bits/stdc++.h>
using namespace std;
  int arr (int a){
int m;
m=a+1;
return m;
}
int arrr(int a){
return a-1;
}
int main(){
int a;
cin>>a;
cout<<"The next number for the number "<<a<<" is "<<arr(a)<<"."<<endl;
cout<<"The previous number for the number "<<a<<" is "<<arrr(a)<<".";
}
