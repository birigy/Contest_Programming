#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		n*=567;
		n/=9;
		n+=7492;
		n*=235;
		n/=47;
		n-=498;
		n/=10;
		cout<<abs(n%10)<<endl;
		}
	return 0;
	}
