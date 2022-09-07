#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
        long long N, A[10000];
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
    cin >> A[i];
    }
    
    while (N--) {
    cout << A[N] << ' ';
    }
    
      
    return 0;
}
