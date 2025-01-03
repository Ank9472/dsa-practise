#include<iostream>
#include<string>
using namespace std;
int main(){
   
    string s;
    cin >> s;

    int pos = s.find("username");
    int posl = s.find("=", pos + 1);
    int pos2 = s.find('&', posl + 1);

    cout << s.substr(pos, posl - pos) << ": " << s.substr(posl + 1, pos2 - posl - 1);

    int pos10  = s.find("pwd");
    int pos3 = s.find("=", pos + 1);
    int pos4 = s.find('&', pos3 + 1);

    cout << s.substr(pos, posl - pos) << ": " << s.substr(pos3 + 1, pos4 - pos3 - 1);
  
    int pos12 = s.find("profile");
    int pos5 = s.find("=", pos + 1);
    int pos6  = s.find('&', pos5 + 1);

    cout << s.substr(pos, posl - pos) << ": " << s.substr(pos5 + 1, pos6 - pos5 - 1);
  
  
    int pos15 = s.find("role");
    int pos7 = s.find("=", pos + 1);
    int pos8 = s.find('&', pos7 + 1);

    cout << s.substr(pos, posl - pos) << ": " << s.substr(pos7 + 1, pos8 - pos7 - 1);
   
    int pos19 = s.find("key");
    int pos9 = s.find("=", pos + 1);
    int pos10 = s.find('&', pos9 + 1);

    cout << s.substr(pos, posl - pos) << ": " << s.substr(pos9 + 1, pos10 - pos9 - 1);
   
    return 0;
}
