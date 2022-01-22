//Link Problem==>https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
int counter[1000001] = {};
int main()
{
    ahmed
        ll t, arr[10000], c = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + t);
    for (int i = 0; i < t; i++) {
        if (arr[i] != arr[i + 1])c++;
    }
    cout << c << endl;
  
}
//مهما الدنيا إتنيلت ضلمت لازم يبقى عندك زفت أمل و تعرف إن في نور في أخر أم النفق//

        //اهو بنتنيل نستمر ف السعي رغم فقدان الزفت الشغف
