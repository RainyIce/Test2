#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
char alphabet[8][8];
int z;
char y;
void showAlphabet();
int randomAlphabet();

int main(){
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
	return 0;
}

void showAlphabet(){
	
	char a[z] = y;
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			
			y = alphabet[i][j];
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}

int randomAlphabet(){
	z = rand()%26;
	return z;
}

