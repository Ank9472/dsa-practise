// // #include<iostream>
// // using namespace std;

// // void func(int *p){
// //     *p = *p+25;
// // }
// // int main(){

// //     int m=25;
// //     int *p=&m;
// //     int **p2 =&p;
// //     func(p);
// //     cout<<m<<" ";
// // }

// // #include<iostream>
// // using namespace std;

// // int main(){
// //     char c[] = "GATE2024";
// //     char *p = c;
// //     cout<<p+p[3]-p[1]; 
// // }

// // yaha par jab tak null chracters naa jae tab tk print karata hain.

// // Explanation of the pointer arithmetic in the code above:
// // p is pointing to the start of array c[] which contains "GATE2024"
// // p[3] gives the value at index 3 which is 'E' (ASCII value 69)
// // p[1] gives the value at index 1 which is 'A' (ASCII value 65)
// // p[3] - p[1] = 69 - 65 = 4
// // p + 4 means pointer is moved 4 positions ahead
// // So it prints the string starting from index 4: "2024"

// //*********************** third question ********************

// // #include<iostream>
// // using namespace std;
// // void second(int*p1,int *p2){
// //     p1=p2;
// //     *p1=2;
// // }
// // int main(){
// //     int i=0,j=1;
// //     second(&i,&j);  // yaha par declare function void ke andar jata hain or adress pass hain n ki value;
// //     cout<<i<<j; // sahi hain
// //     return 0;
// // } //i think here 2,0 print kar 1

// // #include<iostream>
// // using namespace std;
// // int main(){
// // int a=5 ,b=10;
// // int&name=a;
// // int *ptr=&a;
// // (*ptr)++;
// // ptr = &b;
// // *ptr = *ptr+5;
// // name+=5;
 
// //  cout<<a<<b<<"";
// // }

// // #include<iostream>
// // using namespace std;

// // int  four(int x,int *py,int **ppz)
// // {
// //    int y,z;
// //     x=y=z=0;
// //     **ppz+=1;
// //     *py+=2;
// //     x+=3;
// //     y=*py;
// //     z=**ppz;
// //     // return x+y+z;

// // }

// // int main(){
// //     int c,*b,**a;
// //     c=4 , b=&c, a=&b;
// //     // cout<<four(c,b,a);
// // }
// // #include<iostream>
// // using namespace std;

// // int  four(int x,int *py,int **ppz)
// // {
// //    int y,z;
// //     x=y=z=0;
// //     **ppz+=1;
// //     *py+=2;
// //     x+=3;
// //     y=*py;
// //     z=**ppz;
// //     return x+y+z;

// // }

// // int main(){
// //     int c,*b,**a;
// //     c=4 , b=&c, a=&b;
// //     cout<<four(c,b,a);
// // }

// // #include<iostream>
// // using namespace std;

// // void five(char*str1 , char *str2)
// // {
// //     while (*str1=*str2)
// //     {
// //         str1 ++ ,str2++;
// //     }
    
// // }

// // int main()
// // {
// //     char first[] = "Mohit";
// //     char Second[] = "Rohan";
// // //     five(first,Second);
// // //     cout<<Second;
// // // }


// // #include<iostream>
// // using namespace std;

// // void five(char*str1 , char *str2)
// // {
// //     while (*str1=*str2)
// //     {
// //         str1 ++ ,str2++;
// //     }
    
// // }

// // int main()
// // {
// //     char first[] = "Mohit";
// //     char Second[] = "Rohan";
// //     five(first,Second);
// //     cout<<Second;
// // }


// //this is the deltion of memory in pointer 


// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int *ptr = new int ;
// //     *ptr = 5;
// //     cout<<*ptr<<endl;

// //     int n;
// //     cin>>n;

// //     int *p = new int[n] ;

// //     // value daalo 
// //     for(int i=0; i<n;i++)
// //     p[i]=i+1;

// //     //print kara do 
// //     for(int i=0; i<n;i++)
// //     cout<<p[i]<<endl;

// //     delete ptr;
// //     delete p[];
// // }

// #include<iostream>
// using namespace std;

// int main(){

//     //Array create karna hai ,jo store kregeaa adress
//     // int n,m;  // yaha par ham n rows and m column 
//     // cin>>n>>m;

// //  int **ptr = new int *[n]; //yaha ek 1d array create ka rahe hain jo ki pr ko denote kara rha hain 

// // create 2d array
// // for(int i=0;i<n;i++)
// //   {
// //     ptr[i] = new int[m];
// //   }


// // for (int  i = 0; i < n; i++)
// // for (int j = 0; j < m; j++)
// //     cin >> ptr[i][j];
    
   
// // for (int  i = 0; i < n; i++)
// //    {
// //        for (int j = 0; j < m; j++)
// //        {
// //           cout << ptr[i][j]<<" ";
// //           cout<<endl;
// //        }
       
// //    }
   
// //    for (int i = 0; i < n; i++)
// //    {
// //      delete[] ptr[i];
// //    }

// //    delete[] ptr;}
   

// #include<iostream>
// using namespace std;

// int main(){
//    int L,B,H;

//    cin>>L>>B>>H;

//   int ***ptr = new int **[L];

//    //crete 2d array and store its's adrees ptr

//    for (int i = 0; i < L; i++)
//    {
//      ptr[i] = new int*[B];
     
//      for (int  j = 0; j < B; j++)
//      {
//       ptr[i][j] = new int [H];
//      }
     
//     }
//       for (int i = 0; i <L; i++)
//       for (int j = 0; j < B; j++)
//       for (int k = 0; i < H; k++)
//       ptr[i][j][k] = i+j+k;  
       
//       for (int i = 0; i <L; i++)
//       for (int j = 0; j < B; j++)
//       for (int k = 0; i < H; k++)
//       {
//         cout<<ptr[i][j][k];
//         cout<<endl;
//       }


// }

//ham yaha par l b h ka use isliye kar rahe hain poiter helps to acess these values adress   

// #include <iostream>
// using namespace std;

// int main() {
//     int L, B, H;
//     cin >> L >> B >> H;
    
//     if (L == 0) {
//         return 0;
//     }

//     // Create 3D array and store its address in ptr
//     int ***ptr = new int**[L];
    
//     for (int i = 0; i < L; i++) {
//         ptr[i] = new int*[B];
        
//         for (int j = 0; j < B; j++) {
//             ptr[i][j] = new int[H];
//         }
//     }
    
//     // Fill the 3D array
//     for (int i = 0; i < L; i++) {
//         for (int j = 0; j < B; j++) {
//             for (int k = 0; k < H; k++) {
//                 ptr[i][j][k] = i + j + k;
//             }
//         }
//     }
    
//     // Print the 3D array
//     for (int i = 0; i < L; i++) {
//         for (int j = 0; j < B; j++) {
//             for (int k = 0; k < H; k++) {
//                 cout << ptr[i][j][k] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
    
//     // Deallocate memory
//     for (int i = 0; i < L; i++) {
//         for (int j = 0; j < B; j++) {
//             delete[] ptr[i][j];
//         }
//         delete[] ptr[i];
//     }
//     delete[] ptr;

//     return 0;
// }


// memory deletion always takes place most insider loop