#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
int i=1;


while(i<=n){

int space = n-i;

while (space>0)
{
    cout<< " ";
    space--;

}
int incnum=1;

while (incnum<=i)
{
    cout<< incnum;
    incnum++;
}

int decnum = i-1;

while(decnum>0){

    cout<< decnum;
    decnum--;
}


i++;
cout << endl;

}
    return 0;
}