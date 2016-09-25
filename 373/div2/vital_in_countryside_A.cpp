#include <iostream>
using namespace std;
int main(){
 int count;
  cin>>count;
  int *array=(int *) malloc(sizeof(int)*count);
  int i=0;
  while(i<count){
    cin>>array[i];
    i++;
  }
  if(count==1){
    if(array[0]==15){
      cout<<"DOWN";
    }
    else if (array[0]==0) {
     cout<<"UP";
    }
    else{
    cout<<-1<<endl;
  }
  }
  else{
    i=0;
    int last=0,diff;
    while(i<count){
      diff = array[i]-last;
      last = array[i];
      i++;
    }
    if((last<15&&diff>=0) || last==0){
      cout<<"UP"<<endl;
    }
    else if(last==1&&diff<0){
      cout<<"DOWN";
    }
    else{
      cout<<"DOWN";
    }

}
return 0;
}
