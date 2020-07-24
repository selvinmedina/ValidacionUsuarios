#include <iostream>
#include <stdio.h>
#include <list>

using namespace std;

int main()
{
	system("COLOR F5");
	char condicion;

	// Ciclo 1: do while
	string animal;
	string amigoInfancia;
	bool esIncorrecto = true;

	do {
		cout << "Cual es mi animal favorito?";
		cin >> animal;
		cout << "¿Cual es el nombre de mi primer mejor amigo de infancia?";
		cin >> amigoInfancia;
		if (animal == "a" and amigoInfancia == "a")
		{
			esIncorrecto = false;
		}
		else {
			cout << "Te equivocas." << endl;
		}
	} while (esIncorrecto);

	// Ciclo 2: FOR
	printf("Felicidades Acertaste!! ");
	printf("\n \n");
	printf("Ahora Ingresa un numero para elevarlo a 3, multiplicandolo hata la cantidad indicada: ");
	int cantidadNumerosMultiplicar;
	scanf_s("%d", &cantidadNumerosMultiplicar);
	for (int i = 0; i <= cantidadNumerosMultiplicar; i != 0 ? i *= 3 : ++i *= 3)
	{
		cout << i << endl;
	}

	int primos_por_mostrar, n, d;
	int es_primo;

	printf("\n \n");
	printf("Felicidades, obtuviste los numeros multiplicados elevados a la 3 hasta la canatidad indicada. ");

	printf("\n \n");
	printf("Cuantos primos desea mostrar: ");
	scanf_s("%d", &primos_por_mostrar);

	n = 2;
	// Ciclo 3: While
	while (primos_por_mostrar > 0) {

		/* determinar si n es primo */
		es_primo = 1;
		for (d = 2; d < n; ++d) {
			if (n % d == 0) {
				es_primo = 0;
				break;
			}
		}

		/* mostrar el numero
		 * y actualizar el contador */
		if (es_primo) {
			printf("%d ", n);
			primos_por_mostrar--;
		}
		n++;
	}

	printf("\n");

	// Nombres
	int count = 0;
	list<string> listaNombres;
	printf("Escriba salir para mostrar el listado de nombres. ");

	// Ciclo 4: While true
	while (true) {
		string tempVal = "";
		cout << tempVal << " Ingrese un nombre:\n";
		cin >> tempVal;
		if (tempVal == "salir") {
			break;
		}

		listaNombres.push_back(tempVal);

	}

	// Ciclo 5: ForEach
	for (string nombre : listaNombres) {
		cout << nombre << endl;
	}
	cout << "\nSi desea continuar presione S sino N para detener: ";
	cin >> condicion;
	cout << "\n-----------------------------------------------------\n";
	system("cls"); //Limpia la pantalla de la consola.

	system("pause");
	return 0;
}