#include <iostream>
using namespace std;
#define MAXN 100
#define ORDER 4

int main() {
    float ax[MAXN+1], ay[MAXN+1];
    float diff[MAXN+1][ORDER+1];
    float nr=1.0, dr=1.0, x, p, h, yp;
    int n, i, j, k;

    cout << "Enter the value of n\n";
    cin >> n;
    
    cout << "Enter the values in form x,y\n";
    for(i=0; i<=n; i++)
        cin >> ax[i] >> ay[i];
        
    cout << "Enter the value of x for which value of y is wanted\n";
    cin >> x;
    
    h = ax[1] - ax[0];
    
    // Making the difference table
    // Calculating the 1st order differences
    for(i=0; i<=n-1; i++)
        diff[i][1] = ay[i+1] - ay[i];
        
    // Calculating the second & higher order differences
    for(j=2; j<=ORDER; j++)
        for(i=0; i<=n-j; i++)
            diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
            
    // Finding x0
    i = 0;
    while(ax[i] <= x && i <= n)
        i++;
        
    // now ax[i-1] is x0 & ay[i-1] is y0
    i--;
    
    p = (x - ax[i])/h;
    yp = ay[i];
    
    // Carrying out interpolation
    for(k=1; k<=ORDER; k++) {
        nr *= (p - k + 1);
        dr *= k;
        yp += (nr/dr) * diff[i][k];
    }
    
    cout << "When x = " << fixed << setprecision(1) << x 
         << ", y = " << fixed << setprecision(2) << yp << endl;
    
    return 0;
