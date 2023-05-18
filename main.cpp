#include<iostream>
#include<stdlib.h>
#include"sum.h"
int a = 10;
int b = 7;
using namespace std;
int main(){
	int c = tong(a,b);
	int d = hieu(a,b);
  cout << "Tong 2 so : " << c << endl;
  cout << "Hieu 2 so : " << d << endl;
  return 0;
}
