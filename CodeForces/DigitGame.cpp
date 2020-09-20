#include <bits/stdc++.h>
using namespace std;

bool solutionRazeWins(string number, int n){
    int oddPlaceOddNumber = 0;
    int evenPlaceEvenNumber = 0;

    for (size_t i = 0; i < n; i++){
        int currNumber = (int)number[i];
        if((i+1) % 2 != 0){
            if(currNumber % 2 != 0) oddPlaceOddNumber++;
        } else{
            if(currNumber % 2 == 0) evenPlaceEvenNumber++;
        }
    }

    if(number.size() % 2 == 0){
        if(evenPlaceEvenNumber == 0) return true;
        else return false;
    } else{
        if(oddPlaceOddNumber == 0) return false;
        else return true;
    }
}

int main () {
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string number = "";
        for (size_t i = 0; i < n; i++){
            char digit;
            cin >> digit;
            number += digit;
        }
        solutionRazeWins(number, n) ? cout << "1\n" : cout << "2\n";
        
    }
    
}