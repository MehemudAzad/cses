#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    //next_permutation return a boolean if it has reached the lexicographically largest number so we have to sort the string 
    sort(s.begin(), s.end());
    vector<string> ans;
    
    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(), s.end())); //next_permutation gives the new permutation that is possible 
    


    //printing the answer
    cout << ans.size() << endl;
    for(auto s : ans) {
        cout << s <<endl;
    }
}