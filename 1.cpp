#include <iostream>
#include <string>
using namespace std;

int main() {
  int a[5] = {1,2,3,4,5};
  int i;
  for(i=0;i<=4;i++)
  {
        cout << a[i]<<endl;
  }
  cout<<"End Loop";
   for(i=0;i<=4;i++)
  {
        a[i]=a[i+1];
        cout << a[i]<<endl;
  }
  cout<<"End Loop";
    for(i=4;i>=0;i--)
  {
        cout << a[i]<<endl;
  }
  cout<<"End Loop";
    for(i=4;i>=0;i--)
  {
        a[i]=a[i+1];
        cout << a[i]<<endl;
  }

  return 0;
}
