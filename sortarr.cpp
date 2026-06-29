#include <iostream>
using namespace std;

int main() {
    int ar[5] = {1,90,40,2,34};
    int i,j;
    
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
