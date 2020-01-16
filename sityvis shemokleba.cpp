// sityvebis shemokleba
#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	string s;
	getline (cin,s);
	s+=" ";
	//space davumate bolos radgan forshi roca space ari marto mashin gamoak
	string t=""; // es nishnavs rom t unda iyos carieli
    string ans;
	for  (int i=0; i<s.size(); i++){
		 if (s[i]!=' ') 
		 t+=s[i];
		 else
		 
		 {
		
			int n=t.size();
			if (n<=4)
			cout<<t<<" ";
			else if (n%2==0)
			cout<<t[0]<<t[n/2-1]<<t[n/2]<<t[n-1]<<" ";
			else cout<<t[0]<<t[n/2]<<t[n-1]<<" ";
			 t="";
			
		}
	
	}
	
	return 0;
}
