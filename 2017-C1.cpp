#include<iostream>
#include<conio.h>
using namespace std;

int min(int x, int y){
	if(x > y){
		return y;
	}
	else{
		return x;
	}
}

//pembulatan ke atas (ceil division)
int cd(int x, int y){
	return (x+y-1) / y;
}

int main(){
	int n,m,x,y;
	
	cout<<"Welcome"<<endl<<endl;
	
	cin>>n>>m>>x>>y;
	
	if(x>cd(n, 2)){
		x = n - x + 1;
	}
	
	if(y>cd(m, 2)){
		y = m - y + 1;
	}
	
	cout<<min(x,y);

//	cout<<min(min(x, n-x+1), min(y, m-y+1));
	
	getch();
	
	return 0;
}
