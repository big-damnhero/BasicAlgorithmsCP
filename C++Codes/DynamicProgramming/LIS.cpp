#include <bits/stdc++.h>
#define ll long long
using namespace std;
 



int main()
{
 
    ll n;
    cin>>n;
    ll ar[n],ans[n];
    for(int i=0;i<n;i++)
    {
    	cin>>ar[n];

    }

    vector <int> seq;
    seq.push_back(ar[0]);
    for(int i=1;i<n;i++)
    {
    	if(ar[i]>seq.back())
    		seq.push_back(ar[i]);
    	else
    	{
    		int idx = lower_bound(seq.begin(),seq.end(),ar[i])-seq.begin();
    		seq[idx] = ar[i];
    	}
    }

    cout<<seq.size(); 
    
    return 0;
}