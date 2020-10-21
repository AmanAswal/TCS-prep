#include<iostream>
#include<string>
using namespace std;

void toggle(string s){

    for(int i=0; i<s.length(); i++){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] = s[i] - 32;
        }
        else{
            s[i] = s[i] + 32;
        }  
    }

    cout<<s<<endl;
}

int main()
{
    string s = "India";
    string s1 = "tCsNqT";
    toggle(s);
    toggle(s1);
    return 0;
}
