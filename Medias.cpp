#include <iostream>

using namespace std;

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	double media = (a+b+c)/3;
	cout.precision(2);
	if (media >= 5){
		cout << "Sua média é: " << fixed << media << "! Você foi aprovado :)" << endl;
	}
	else{
		cout << "Sua média é: " << fixed << media << "! Você foi reprovado :(" << endl;
	}
	return 0;
}

