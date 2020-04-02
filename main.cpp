#include <iostream>
#include <string>
using namespace std;

int main() {

    int a;
    cin >> a;
    string st = "";
    bool state = false;
    for (int i = 0; i < a; i++) {
        if(state){
            state = true;
            st += "I love it ";
        } else{
            state = false;
            st += "I hate it ";
        }
    }
    cout << st;

    return 0;
}
