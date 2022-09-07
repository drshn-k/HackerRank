#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,x,a,b;
    vector<int> v;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int z;
    cin >> z;
    v.push_back(z);
    }
    
    cin >> a;
    
    v.erase(v.begin()+a-1);
    
    cin >> a >> b;
    
    v.erase(v.begin()+a-1,v.begin()+b-1);
       cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
     
    cout << v[i] << " ";
    }
    
    return 0;
}
