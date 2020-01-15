// saaxalwlo sachuqari
#include <iostream>
#include <algorithm>
using namespace std;
	pair <int,string>a[30000];

int main (){
	int n,k;
	cin>>n>>k;
	for (int i=0; i<n; i++){
		string saxeli,gvari; int t;
		cin>>saxeli>>gvari>>t;
		a[i].second=saxeli+" "+gvari; 
		a[i].first=t;  
		// pairshi pirveli elementi ari ricxvi da mere sheertebuli saxeli da gvari
	}
    sort (a, a+n);  // lagdeba pirveli elementis mixedvit
	reverse (a, a+n);
	for (int i=0; i<k; i++)
	cout<<a[i].second<<" "<<endl;
	return 0;
}
