#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
double PI = acos(-1);
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define alla(arr, sz) arr, arr + sz
#define st(v) sort(all(v))
#define revrs(v) reverse(all(v))
#define sta(arr, sz) sort(alla(arr, sz))
#define revrsa(arr, sz) reverse(alla(arr, sz))
#define tc(t) while (t--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)   

#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
    cout<<"\n";
}
template <typename... T>
void read(T &...args) {
    ((cin >> args), ...);
}
template <typename... T>
void write(string delimiter, T &&...args) {
    ((cout << args << delimiter), ...);
}
template <typename T>
void readContainer(T &t) {
    for (auto &e : t) {
        read(e);
    }
}
template <typename T>
void writeContainer(string delimiter, T &t) {
    for (const auto &e : t) {
        write(delimiter, e);
    }
    write("\n");
}

int main(){
    fastio;
    int n,temp;cin>>n;
    set<int>sets;
    for (int i=0;i<n;i++){
        cin>>temp;
        sets.insert(temp);
    }
    cout<<sets.size()<<"\n";
    return 0;
}