#include <iostream>
using namespace std;
int b[1000000];
int main (){
	int n;
	cin>>n;
	int a[n];
	for (int i=1; i<=n; i++)
	cin>>a[i];
	int z=1;
	
	for (int i=1; i<=n; i++){
		
		for (int j=i+1; j<=n; j++){
			int s=a[i]+a[j];
			int ind=0;
			for (int r=1; r<=z; r++){
				if (s==b[r])
				ind++;
			}
			if (ind==0){
				b[z]=s;
				z++;
			}
		}
	}
	cout<<z-1;
	
	
	return 0;
}
