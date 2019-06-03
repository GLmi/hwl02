#include <iostream>
#include <string>

int main(){
string username;
std::cout << "Paste your username:";
getline(cin, username);
std::cout << "Hello world from " << username;
}
