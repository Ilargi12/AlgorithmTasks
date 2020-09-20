#include <bits/stdc++.h>
using namespace std;

bool arrayContains(vector<int> arr, int k){
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] == k) return true;
    }
    return false;    
}

bool solution(vector<int> a){
    vector<int> distinctArray;
    for (size_t i = 0; i < a.size(); i++){
        if(!arrayContains(distinctArray, a[i]))
            distinctArray.push_back(a[i]);
        if(distinctArray.size() > 3 )
            return false;
    }
    sort(distinctArray.begin(), distinctArray.end());
    if(distinctArray.size() < 3 || distinctArray[2] - distinctArray[1] == distinctArray[1] - distinctArray[0])
        return true;
    else return false;
}

int main () {
    int n; 
    cin >> n;
    vector<int> a;
    for (size_t i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
        solution(a) ? cout << "YES" << endl : cout << "NO" << endl;
        
}
