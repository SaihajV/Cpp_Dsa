#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
int i=1;


while(i<=n){
  int j=1;
  int num=i;

while(j<=i){

    cout << num << " ";
    j++;
    num++;
}
cout << endl;
i++;

}

    return 0;
}