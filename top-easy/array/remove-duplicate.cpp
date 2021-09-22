#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {0,0,1,1,1,2,2,3,3,4};
    int cur = 0;
    for(int dup = 1; dup < v.size(); dup++){

        if(v[dup] != v[cur]){
            v[cur + 1] = v[dup];
            cur++;
        }
    }
    for(auto item: v){
        cout << item << endl;
    }
    return 0;
}

