#include<iostream>      

using namespace std;

int main() {
  
char character;    
int ch;

cin >> character;
ch = character;

if( ch>=48 && ch<=57){

cout << "It is a digit" << endl;

}

else if( ch>=65 && ch<=90){

cout << "It is an uppercase letter" << endl;

}

else if( ch>=97 && ch<=122){

cout << "It is a lowercase letter" << endl;

}

else{
    cout << "Special character" << endl;
}

    return 0;
}