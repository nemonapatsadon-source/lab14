#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[], int N) {
    int pass = 1;
    
    for (int j = 1; j < N; j++) {
        T n = d[j]; 
        int i = j - 1;
        
        
        while (i >= 0 && d[i] < n) {
            d[i + 1] = d[i];
            i--;
        }
        d[i + 1] = n; 
        cout << "Pass " << pass << ":";
        for (int k = 0; k < N; k++) cout << d[k] << " ";
        cout << "\n";
        pass++;
    }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
