#include <bits/stdc++.h>
using namespace std;
int soat (int minute){

    return minute/60%24;
}
int minitu (int minute){
    return minute%60;
}

int main(){
int a;
cin>>a;
cout<<soat(a)<<" "<<minitu(a);
}
