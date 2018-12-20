#include <iostream>

using namespace std;

int main () {
	int sentinela;
	int golInter;
	int golGremio;
	int vitoriaInter = 0;
	int vitoriaGremio = 0;
	int empate = 0;	
	int grenais = 0;
	do {
		grenais++;
		cin >> golInter;
		cin >> golGremio;
		
		if (golInter > golGremio)
			vitoriaInter++;
		else if (golInter == golGremio) 
			empate++;
		else 
			vitoriaGremio++;
		
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> sentinela;
	} while (sentinela == 1);
	
	cout << grenais << " grenais" << endl;
	cout << "Inter:" << vitoriaInter << endl;
	cout << "Gremio:" << vitoriaGremio << endl;	
	cout << "Empates:" << empate << endl;

	if (vitoriaGremio < vitoriaInter) 
		cout << "Inter venceu mais" << endl;
	if (vitoriaGremio > vitoriaInter)
		cout << "Gremio venceu mais" << endl;
	if (empate > vitoriaGremio && empate > vitoriaInter)
		cout <<"Nao houve vencedor" << endl;
	
	return 0;
}