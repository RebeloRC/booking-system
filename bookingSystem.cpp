#include<string>
#include<iostream>
#include <iomanip>

using namespace std;

#define LIN 5
#define COL 40

int resposta;

void mostra_matriz(int **mat)
{

	int i;
	int j;
	int k;
	
	// Inicialização de cada "linha" do aray
	mat = new int*[5];
	
	for(i=0; i<LIN; ++i) // Percorre as linhas
	{
		mat[i] = new int[40]; // Inicialização de cada coluna
	}
	// Fim da declaração do array
	
	k = 0;
	for(i=0; i<LIN; ++i)
	{
		for(j = 0; j<COL; ++j)
		{
			mat[i][j] = 0;
		}
	}
	
	for(i=0; i<LIN; ++i)
	{	
		for(j = 0; j<COL; ++j)
		{
			cout << setw(1) << (mat[i][j]==0?".":"#")  << " | ";
		}
		cout << endl;
	}
}

void reserva_de_lugares(int **x)
{
	int i;
	int j;
	int coluna;
	int fileira;


	cout << "Digite a fileira da poltrona de sejada: ";
	cin >> fileira;

	cout << "Digite o número da poltrona desejada";
	cin >> coluna;

	if (coluna <= COL)
	{
		if (x[coluna][fileira] == 0)
		{
			/* code */
		}
		
	}
}



int main()
{

		do
	{
	
		int **teste;
		int **r;
		int resposta;


	    cout<<"0. Finalizar\n1. Reservar Poltrona\n2. Mapa de ocupaçãp\n3. Faturamento\n";
        cin >> resposta;

		switch(resposta)
			{
				case 0:
				return 0;
				case 1:
					cout << "=======================" << endl;
				reserva_de_lugares(r);
				break;
				case 2:
					cout << "=======================" << endl;
				mostra_matriz(teste);
				break;
				case3:
				cout << "Teste3";
				break;
			}

	} while (resposta =! 0);


}
