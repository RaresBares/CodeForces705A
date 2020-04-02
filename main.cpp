#include <iostream>
#include <string>
using namespace std;
const std::string trim( const std::string& s)
{
    std::string::size_type first = s.find_first_not_of( ' ');
    if( first == std::string::npos) {
        return std::string();
    }
    else {
        std::string::size_type last = s.find_last_not_of( ' '); /// must succeed
        return s.substr( first, last - first + 1);
    }
}
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
    trim(st);
    cout << st;

    return 0;
}
