#include <cmath>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int u,v,a,s;
	    cin>>u>>v>>a>>s;
	    cout<<(v < sqrt((u*u)-(2*a*s)) ? "NO" : "YES")<<endl;
	}
	return 0;
}
