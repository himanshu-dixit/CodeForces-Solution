#include <iostream>
using namespace std;
int max(int a,int b){
if(a<b){
return b;
}
else{
return a;
}
}

int min(int a,int b){
if(a>b){
return b;
}
else{
return a;
}
}

int main(){
  int count,key=0;
  cin>>count;
  char *array = (char *)malloc(sizeof(char)*count);
  int i=0,a1=0,a2=0,b1=0,b2=0;
  while(i<count){
    cin>>array[i];
    i++;
  }

  for(i=0;i<count;i+=2){
    if(array[i]=='r'){
    a1++;
    }
    else{
    a2++;
    }
  }
  for(i=1;i<count;i+=2){
    if(array[i]=='r'){
    b1++;
    }
    else{
    b2++;
    }
  }

    cout<<max(min(a1,b1),min(a2,b2));

return 0;
}
