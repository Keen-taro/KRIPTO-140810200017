#include <iostream>
using namespace std;

string encrypt_shift_cipher(string str, int key){
    int N = str.length();
    key = key % 26;

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
    return str;
}

void decryption_shift_cipher(string str , int key){
    int N = str.length();
    key = key % 26;

    for (int i = 0; i < N; i++) {
        char ch = str[i];
    //lower case letter     
        if(ch >= 'a' && ch <= 'z'){
            ch -= key;
            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }
            str[i] = ch;
        }         
    

    //upper case letter
        else if(ch >= 'A' && ch <= 'Z'){
            ch -= key;
            if(ch < 'A'){
                ch = ch + 'Z' - 'A' + 1;
            }
        str[i] = ch;
        }
    }
    cout<<"Decrypted Text \n"<<str<<endl;
}

int main(){
    string text, encry;
    int key;

    cout<<"Insert Text : "; cin>>text;
    cout<<"Shift Key : "; cin>>key;

    encry = encrypt_shift_cipher(text,key);
    cout<<"Encrypt : " << encry<<endl;
    decryption_shift_cipher(encry , key);
}
