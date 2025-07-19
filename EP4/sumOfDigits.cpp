#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int digit_sum=0;
	while(t--){
	    long long int a;
        cin>>a;
        if (a == 0) cout << 0;
	    while(a>0){
            int last_digit=a%10;
	        digit_sum+= last_digit;
	        a=a/10;
	    }
	    cout <<digit_sum;
	}

}
