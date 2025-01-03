#include<iostream>
using namespace std;

int no_of_children(int row, int col) {
    int count = 0;
    int total = row * col;
    while(row && col) {
        count++;
        if(row > col)
            row = row - col;  //yeh jo code ka part hain gcd ke rem jaisa work kar raha hain
        else                      
            col = col - row;
    }
    return count;
}

int main() {
    int sum = 0;
    int minlen, maxlen, minwid, maxwid;
    cin >> minlen >> maxlen >> minwid >> maxwid;
    
    if(0 < minlen && minlen < 1501 && 0 < maxlen && maxlen < 1501 && 
       0 < minwid && minwid < 1501 && 0 < maxwid && maxwid < 1501) {
        
        for(int i = minlen; i <= maxlen; i++) {
            for(int j = minwid; j <= maxwid; j++) {
                sum = sum + no_of_children(i,j);
            }
        }
        cout << sum;
    }
    return 0;
}


// pehla galti mera hain function na sochna aur dusra ki 