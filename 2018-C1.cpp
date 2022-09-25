#include <iostream>
using namespace std;

int main() {
	int N;
	int A[100];
	int max;
	int countMax = 0;
	
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>A[i];
	}
	
	//Cari nilai terbesar
	max = A[0];
	for(int i=0; i<N; i++){
		if(A[i] >= max){
			max = A[i];
		}
	}
	
	cout<<"Angka Terbesar : "<<max<<endl;
	
	//Hitung jumlah nilai terbesar
	for(int j=0; j<N; j++){
		if(A[j]==max){
			countMax++;
		}
	}
	
	cout<<"Jumlah         : "<<countMax;
		
	return 0;
}


