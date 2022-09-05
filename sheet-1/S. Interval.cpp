#include <bits/stdc++.h>
using namespace std;

int main() {
	long double x;
	int y, m, d;
	cin>>x;
	y=(x/365);
	m=(x-(y*365))/30;
	d=x-((y*365)+(m*30));
	cout<<y<<" years"<<endl;
	cout<<m<<" months"<<endl;
	cout<<d<<" days"<<endl;


}
