#include<stdio.h>
#include<stdlib.h>
double cels, fahr;
double celsPD, celsPG, krok;


int main(int argc, char** argv)
{

	if (argc < 4) //argc zawiera liczbę argumentów a sama nazwa programu też się 
		//liczy stąd 4 
	{
		printf("Zbyt mała liczba argumentow - podajemy recznie\n");
		
		printf("Podaj dolna wartosc zakresu temperatur (Celsjusz): ");
		scanf_s("%lf", &celsPD);
		printf("Podaj gorna wartosc zakresu temperatur (Celsjusz): ");
		scanf_s("%lf", &celsPG);
		printf("Podaj krok: ");
		scanf_s("%lf", &krok);
	}
	else
	{
		celsPD = atof(argv[1]);
		celsPG = atof(argv[2]);
		krok = atof(argv[3]);
	}

	

	if (celsPD > celsPG)
	{
		printf("Wartosc dolna jest wieksza od gornej\n");
		system("PAUSE");
		return -1; //przyjmuje się, że wartości mniejsze od 0 oznaczają błąd  
	}

	// while
	//cels = celsPD;
	//while (cels <= celsPG)
	//{
	//	fahr = (9.0 / 5) * cels + 32;
	//	printf("Wartosc stopni Fahrenheita %5.1f, dla stopni Celsiusza: %5.1f \n", fahr, cels);
	//	cels = cels + krok;
	//}
	// end while

	//for
	for (cels = celsPD; cels <= celsPG; cels += krok)
	{
		fahr = (9.0 / 5) * cels + 32;
		printf("wartosc stopni fahrenheita %5.1f, dla stopni celsiusza: %5.1f \n", fahr, cels);
	}
	
	system("pause");
	return 0;
}

  
