#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int t[1100*1000];

int main() {
int n;
cin>>n;
int count=0;
for(int i=1;i<=n;i++){
    cin>>t[i];
    while(t[i]%2 == 0){ t[i]/=2; }
    while(t[i]%3 == 0){ t[i]/=3; }
}
    for(int i=2;i<=n;i++){
    if(t[i] != t[1]){
    cout<<"No";

    count++;
    break;
    }
  }
  if(count==0){
  cout<<"Yes";
  }

return 0;
}
