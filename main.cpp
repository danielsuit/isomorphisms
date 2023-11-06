#include<iostream>
using namespace std;

int* init(int a[], int b[]){
  static int r[5];
  for(int i = 0; i<5; i++){
    r[i] = a[i]+b[i]; 
    r[i]*=2;
  }
  return r;
}

int main(){
  static int a[5] = {0, 1, 2, 3, 4};
  static int b[5] = {5, 6, 7, 8, 9};
  int* p;
  int i;
  p = init(a, b);
  for(i=0 ; i<5; i++){
    cout<<p[i]<<"\t";
  }
  return 0;
}