problem-1
https://codeforces.com/contest/1770/problem/C
  
  
problem-2(Divsub)
https://www.codechef.com/problems/DIVSUBS?tab=statement

    #include <bits/stdc++.h>
    using namespace std;
    int main() {
       int t;
       cin>>t;
       while(t--)
       {
           int n;
           cin>>n;
          long long int a[n];
           map<int,int>mp;
           for(int i=0;i<n;i++)
           {
               cin>>a[i];
           }
            for(int i=0;i<n;i++)
           {
               mp[a[i]]++;
           }
           vector<int>v;
           bool ans=true;
            for(int j=2;j<n;j++)
           {
               map<int,int>m;
                for(int i=0;i<n;i++)
              {
                  m[a[i]%j]++;
              }
                int k=0;
              for(auto it:m)
              {
                  if(it.second>=2)
                  {
                      k++;
                  }
                  if(k==j)
                  {
                      ans=false;
                      break;
                  }
              }
           }
           for(auto it:mp)
           {
               if(it.second>=2)
               {
                   ans=false;
               }
           }
           if(ans)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
           
       }
    }

problem-3(gray similar code)
  https://www.codechef.com/JULY12/problems/GRAYSC/

#include <bits/stdc++.h>
using namespace std;

int main() {
     long long int n;
	    cin>>n;
	    if(n>=130)
	    {
	        cout<<"Yes"<<endl;
	        return 0;
	    }
	    	vector<unsigned long long> v;
	for(int i = 0;i<n;i++){
	    unsigned long long int temp;
	    cin>>temp;
	    v.push_back(temp);
	}
	        for(int i = 0;i<n;i++){
	        for(int j = i+1;j<n;j++){
	            for(int k = j+1;k<n;k++){
	                for(int l = k+1;l<n;l++){
	                    if((v[i]^v[j]^v[k]^v[l]) == 0){           
	                            cout<<"Yes"<<endl;
	                            return 0;     
	                    }
	                }
	            }
	        }
	    }
	   
	   cout<<"No"<<endl;
        
          return 0;
}
