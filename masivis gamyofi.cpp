#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
	cin>>a[i];
	sort (a,a+n);
	int k=a[0]; //yvelaze patara elementi
	// tu masivshi romelime ricxvi sxva danarchens hyofs unashtod
	// es ricxvi unda iyos yvelaze patara
	for  (int i=1; i<n; i++){
		if (a[i]%k!=0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
