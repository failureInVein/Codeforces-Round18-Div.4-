
//B
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        char square[3][3];
        int a=0,b=0,c=0;

        // Input Latin square
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> square[i][j];
                if (square[i][j]== 'A'){
                    a++;
                }
                else if (square[i][j]== 'B'){
                    b++;
                }
                else if (square[i][j]== 'C'){
                    c++;
                }
            }
        }
        if(a<3){
            cout << "A" << endl;
        }
        else if(b<3){
            cout << "B" << endl;
        }
        else if(c<3){
            cout << "C" << endl;
        }
    }

    return 0;
}
*/






// C
/*#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int num) {
    int squareRoot = sqrt(num);
    return squareRoot * squareRoot == num;
}
int main(){
    int t,n,i;
    int a[65536];
    cin >> t;
    while(t--){
        cin >> n;
        int sum=0;
        for(i=0;i<n;i++){
            cin >> a[i];
            sum = sum + a[i];
        }
     if (isPerfectSquare(sum)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
}*/


// D
/*
#include <bits/stdc++.h>
using namespace std;
#define II long long
int main(){
    int t;
    cin >> t;
    while (t--){
        II n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        map<int, int> m;
        m['a'] = 1;
        m['e'] = 1;
        m['i'] = 1;
        m['o'] = 1;
        m['u'] = 1;
        for (int i = 0; i < s.size(); i++){
            if (m[s[i]]){
                ans.push_back(s[i]);
                int j = i + 1;
                if (j == s.size() - 1){
                    // ans.push_back(s.back());
                    }
                else if (j + 1 <= s.size() - 1){
                    if (m[s[j]]==0&& m[s[j + 1]]==0){
                        ans.push_back(s[j]);
                        ans.push_back('.');
                         i = j; 
                    } 
                    else{ 
                        ans.push_back('.'); 
                    } 
                } 
            } 
            else{ 
                ans.push_back(s[i]);
            }
        }
     cout << ans << endl; 
    }
}*/




// E
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX_SIZE = 2e5 +5;
const int INF = 1e8;
const int MOD = 998244353;
ll n;
void solve(){
    cin >> n;
    vector<ll> v(n + 1);
    for(ll i = 1; i <= n; i++){
        cin >> v[i];
    }
    unordered_map<ll, ll> diff;
    ll evenSum = 0, oddSum = 0;
    string ans = "NO";
    for(ll i = 1; i <= n; i++){
        if (i & 1)
        oddSum += v[i];
        else
        evenSum += v[i];
        ll currDiff = oddSum - evenSum;
        if (currDiff == 0 || diff.find(currDiff) != diff.end()) {
            ans = "YES";
            break;
        }
        diff[currDiff] = i;
    }
    cout << ans << endl; 
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();//subs
    }
}*/



