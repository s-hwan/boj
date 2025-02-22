#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    unordered_set<string> s1;
    unordered_set<string> s2;

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
        s2.insert(s);
    }
    int count =0;
    for (string target : s1) {
        if (s2.find(target) != s2.end()) {count++;}
    }
    cout<<count<<endl;
    return 0;

}