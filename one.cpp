#include <iostream>
using namespace std;

int main() {
    char s[] = {'h', 'o', 'l', 'l', 'a', '\0'};

    int st = 0;
    int e = sizeof(s) / sizeof(s[0]) - 1;

    while(st<e) {
        swap(s[st],s[e]);
        st++;
        e--;
    }

    for(char ch: s) {
        cout<<ch<<" ";
    }
    cout<<endl;

    
    return 0;
}