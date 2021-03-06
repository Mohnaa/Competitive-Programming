// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int t;cin>>t;
//   while(t--){
//     int n;cin>>n;
//     string str;cin>>str;
//     for (int i=0; i<n-1;i+=2){
//       swap(str[i],str[i+1]);
//     }
//     for (int i=0; i<n;i++){
//       str[i]=97+97-str[i]+25;
//     }
//     cout<<str<<endl;
//   }
//   return 0;
// }


// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n,m;
//         cin>>n>>m;
//         char arr[n][m];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cin>>arr[i][j];
//             }
//             sort(arr[i],arr[i]+m);
//         }
//         string s;
//         cin>>s;
//         ll count=0;
//         for(int i=0;i<s.length();i++){
//             for(int j=0;j<m;j++){
//                 if(arr[i%n][j]==s[i]){
//                     count++;
//                     arr[i%n][j]='0';
//                     break;
//                 }
//             }
//         }
//         if(count==s.length())cout<<"Yes"<<endl;
//         else cout<<"No"<<endl;
//   }
// }

/*#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll t;cin>>t;
  while (t--){
    string a,b;
    cin>>a>>b;
    reverse (a.begin(),a.end());
    reverse(b.begin(),b.end());
    ll x= stoi(a);
    ll y =stoi(b);
    ll sum = x+y;
    string org =to_string(sum);
    reverse (org.begin(),org.end());
    cout<<org<<endl;
  }
  return 0;
}*/
#pragma region TEMPLATE
#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
 
typedef pair<int, int> pii;
 
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<string, string> mss;
 
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef vector<bool> vb;
typedef vector<string> vs;
 
#define MOD1 1000000007
 
#define MOD2 1000000009
 
#define all(v) v.begin(),v.end() // to be tested
 
#define OUT0(x) cout<<(x)<<" " 
#define OUT1(x) cout<<(x)<<endl 
#define OUT2(x,y) cout<<(x)<<" "<<(y)<<endl 
#define TRACE1(x) cout<<(#x)<<" "<<(x)<<endl
#define TRACE2(x,y) cout<<(#x)<<" "<<(x)<<", "<<(#y)<<" "<<(y)<<endl
#define TRACE3(x,y,z) cout<<(#x)<<" "<<(x)<<", "<<(#y)<<" "<<(y)<<", "<<(#z)<<" "<<(z)<<endl
 
#define MIN3(x,y,z) min(x,min(y,z))
#define MAX3(x,y,z) max(x,max(y,z))
 
#define IN1(x) cin>>(x)
#define IN2(x,y) cin>>(x)>>(y)
#define IN3(x,y,z) cin >>(x)>>(y)>>(z)
 
#define HR cout<<"\n-------------------------\n"
#define LINE cout<<"\n" 
 
 
void i_o() {
}
 
 
template <typename T> void inpA      (T arr[], int n){ 
    for(int i=0; i<n; i++) cin >> arr[i];  
}
 
template <typename T> void inpV         (vector<T> &vec, int n) { 
    vec.resize(n);
    for(int i=0; i<n; i++) cin >> vec[i] ;
}
template <typename T> void outV      (const vector<T> &vec) { 
    for(int i=0; i<vec.size(); i++) cout << vec[i] << " " ;
    cout << endl ;
}
template <typename T> inline T sumV      (const vector<T> &vec) { 
    T res=0;
    for(int i=0; i<vec.size(); i++) res +=vec[i] ;
    return res;
 
}
 
template <typename T> inline int maxIndexV      (const vector<T> &vec) { 
    return max_element(vec.begin(), vec.end()) - vec.begin();
}
 
 
template <typename T> inline int minIndexV      (const vector<T> &vec) { 
    return min_element(vec.begin(), vec.end()) - vec.begin();
}
 
template <typename T> inline void sortV        (vector<T> &vec)            { sort(vec.begin(), vec.end() ) ; }
template <typename T> inline void rSortV       (vector<T> &vec)            { sort(vec.begin(), vec.end(), greater<T>()) ; }
 
// make it return index or -1 // test it
template <typename T> inline int bSearchV      (vector<T> &vec, T key)     
{
    auto itr = lower_bound(vec.begin(), vec.end(), key);
    if(itr == vec.end() || *itr != key){
        return -1;
    }
    else{
        return (itr - vec.begin()) ;
    }
}
 
#pragma endregion 
 
 
//----------------------------------------------------
//---------START OF SOLUTION--------------------------
//----------------------------------------------------
 
 
// global var
 
void pre(){
 
}
 
 
int main(){
  //   #ifndef ONLINE_JUDGE
  //       clock_t clock_begin = clock();
  // #endif
 
    i_o();
    pre();
 
    // ----- START
 
    lli t;
    lli ans;
    // define all variables
 
    cin>>t ;
    while(t--){
        /*
        process --->
        1/Ai < 1/Aj
        Ai >Aj
        Ai != Aj 

        no of pairs with Ai != Aj */

        lli n;cin>>n;
        vlli a;
        inpV(a,n);

        map<lli, lli> freq;
 
        for(lli i:a){
            freq[i]++;
        }
 
        ans = n*(n-1);
 
        for(auto p : freq){
            if(p.second > 1){
                ans -= (p.second*(p.second-1));
            }
        }
        
        // print ans
        cout << ans << endl ;
    }
 
 
    // ---- END
    return 0 ;
 
}
