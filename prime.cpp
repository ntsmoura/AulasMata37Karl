#include<iostream>
using namespace std;
int main(){
  int count,primo,num1,num2;
  cin >> count;
  int *start = new int [count], *end = new int[count];
  for (int f = 0; f < count; f++){
    cin >> num1 >> num2;
    start[f] = num1;
    end[f] = num2;
  }
  for (int a = 0; a < count; a++){
  for (int b = start[a]; b <= end[a]; b++){
    for (int c = 1; c <= b; c++){
      if (b%c==0){
        primo++;
      }
    }
    if (primo == 2){
      cout << b << endl;
    }
    primo = 0;
  }
    cout << endl;
}
  return 0;
}
