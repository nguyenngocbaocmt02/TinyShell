#include <bits/stdc++.h>
using namespace std;
void tt(vector<int> x) {
	x[0]=x[0]+1;
}
int main() {
	int* a= new int[20];
	int* b= a;
	for(int i=0;i<20;i++) {
		a[i]=2;
		b[i]=2;
	}
	b[4]=4;
	for(int i=0;i<20;i++) {
	cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<20;i++) {
	cout<<b[i]<<" ";
	}
	vector<int> t;
	t.push_back(0);
	tt(t);
	cout<<t[0];
	system("pause");
}
