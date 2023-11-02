#include<bits/stdc++.h>
using namespace std;


bool is_prime(int x) {
    if (x <= 1) {
        return false;
    }
    if(x<=3)
    {
        return true;
    }
    if(x%2==0 || x%3==0)
    {
        return false;
    }
    for (int i = 5; i *i<= x; i+=6) {
        if (x %i ==0 || x%(i+2)==0) {
            return false;
        }
    }
    return true;
}

string find_winner(int N) {
    if (N % 2 == 0) {
        return "Bob";
    }
    
    if (is_prime(N)) {
        return "Alice";
    }
    for(int p=3; p<=N; p+=2)
    {
        if(N%p ==0 && is_prime(p))
        {
            return "Alice";
        }
    }
    return "Bob";
}

int main() {
    int T;
   cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        string winner = find_winner(N);
        cout << winner <<endl;
    }
    return 0;
}