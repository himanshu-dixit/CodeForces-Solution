#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
int group_total,i,k;

cin>>group_total;
//int* student_group = (int *) malloc(sizeof(int)*group_total); Use if want to DMAelse
int student_group[5]={0}; //intializing all elements with zero
for(i=0;i<group_total;i++){
cin>>k;
student_group[k]++;
}
int taxi=0;
taxi+=student_group[4];
taxi+=student_group[3];
student_group[1]=student_group[1]-student_group[3];
student_group[1]=student_group[1]<0?0:student_group[1];
if(student_group[1]<0){
student_group[1]=0;
}

taxi+=student_group[2]/2+student_group[2]%2;

student_group[2]=student_group[2]%2;

student_group[1] = student_group[1]-2*(student_group[2]);
if(student_group[1]>0){
taxi+=(student_group[1])/4;
if(student_group[1]%4>0){
taxi++;
}
}

cout<<taxi; //Output the no of taxi neesded by the group
return 0;
}
