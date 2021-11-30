#include<iostream>

using namespace std;

int adiff(int A, int B){
  while(A>360){
    A=A-360;
  }
  while(B>360){
    B=B-360;
  }
  int C = B-A;
  if(C<0){
    C=C*-1;
  }
  return C;

}


int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
