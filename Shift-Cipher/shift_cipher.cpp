#include <iostream>
using namespace std;

void encrypt_shift_cipher(string str, int key){
    int N = str.length();
    key = key % 27;

    for (int i = 0; i < N; i++) {
        char ch = str[i];
    //lower case letter     
        if(ch >= 'a' && ch <= 'z'){
            ch += key;
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            str[i] = ch;
        }         
    

    //upper case letter
        else if(ch >= 'A' && ch <= 'Z'){
            ch += key;
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
        str[i] = ch;
        }
    }
    cout<<"Encrypted Text \n"<<str<<endl;
}

void decryption_shift_cipher(string str , int key){
    int N = str.length();
    key = key % 27;

    for (int i = 0; i < N; i++) {
        char ch = str[i];
    //lower case letter     
        if(ch >= 'a' && ch <= 'z'){
            ch += key;
            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }
            str[i] = ch;
        }         
    

    //upper case letter
        else if(ch >= 'A' && ch <= 'Z'){
            ch += key;
            if(ch < 'A'){
                ch = ch + 'Z' - 'A' + 1;
            }
        str[i] = ch;
        }
    }
    cout<<"Decrypted Text \n"<<str<<endl;
}

int main(){
    string text;
    int key;

    cout<<"Insert Text : "; cin>>text;
    cout<<"Shift Key : "; cin>>key;

    encrypt_shift_cipher(text , key);
    decryption_shift_cipher(text , key);
}
