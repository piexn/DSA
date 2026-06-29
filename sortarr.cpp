#include <iostream>
using namespace std;

int main() {
    int ar[5];
    int i,j;
    
    for (int i = 0; i < 5; i++) {
        cin >> ar[i];
    } 
    
     for(i=0; i < 5; i++)
     { 
        for(j= i + 1; j < 5; j++)
         { 
            if(ar[i] > ar[j])
             { 
                swap(ar[i],ar[j]);
             }
         }
     }
     
     for(i = 0; i < 5; i++) {
        cout << ar[i] << " ";
    }
    return 0;
}
