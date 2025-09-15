#include <iostream>
#include <vector>
using namespace std;
void findsubstring(string str, string substr){
    int n = str.length();
    int m = substr.length();
     if(substr == ""){
            cout<< "Empty substring";return ;
           }
    for(int i=0; i<=n-m; i++){
       if(str.substr(i,m) == substr){ //parameters are starting index and length
            cout<< "Substring found at index: " << i << endl;return;
        }
            
}}
int main(){
 string text, pattern;
    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter pattern: ";
    getline(cin, pattern);
     findsubstring(text, pattern);
    return 0;
}