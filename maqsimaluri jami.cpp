// maqsimaluri cifrta jami

#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int max=0, ans;
	for  (int i=0; i<n; i++){
		int z; cin>>z;
		int k=z%10+z/10;
		if (k>max){
			max=k;
			ans=z;
		}
	}
	cout<<ans;
	return 0;
}
