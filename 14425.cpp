#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {

    unordered_set<string> s1;
    vector<string> s2;

    int N,M;

    cin>>N>>M;

    for (int i = 0; i < N; i++) {
        string s;
        cin>>s;
        s1.insert(s);
    }
    for (int i = 0; i < M; i++) {
        string s;
        cin>>s;
        s2.push_back(s);
    }
    int count =0;
    for (string target : s2) {
        if (s1.find(target)!=s1.end()) {count++;}
    }
    cout<<count;
    return 0;

}