#include <bits/stdc++.h>
using namespace std;
using ll = long long int;



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll p;
        cin >> p;
        int n = s.length();
        vector<pair<int,int>> a;
        for (int i = 0; i < n; i++)
        {
            a.push_back(make_pair(s[i]-'a'+1,i));
           
        }

        int pr = 0;
    for (int i = 0; i < n; i++)
    {
        pr += a[i].first;
    }
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            if(sum<(pr-p))
            {
                sum+=a[i].first;
                a.pop_back();
            }
            else
            {
                break;
            }
        }
        for(int i=0;i<a.size();i++)
        {
            int temp=a[i].first;
            a[i].first=a[i].second;
            a[i].second=temp;
        }
       sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            cout << (char)(a[i].second+96) ;
        }
        cout << endl;

       
    }
    return 0;
}
