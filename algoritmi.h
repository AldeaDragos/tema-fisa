#pragma once
#include <iostream>
#include <string.h>
using namespace std;

void afisareVec(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}

}

void stergereElement(int v[], int& dim, int p) {

	for (int i = p; i < dim; i++) {

		v[i] = v[i + 1];
	}
	dim--;
}

void inserareElemPoz(int v[], int& dim, int p, int elem) {

	for (int i = dim - 1; i>=p; i--) {

		v[i + 1] = v[i];

	}
	v[p] = elem;
	dim++;
}


bool prim(int n) {

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void stergerePrime(int v[], int& dim) {

	int ct = 0;
	for (int i = 0; i < dim; i++) {

		if (prim(v[i])) {
			ct++;
			if (ct == 3) {
				stergereElement(v, dim, i);
				i--;
			}
		}
	}
}

void stergereNr2Cifre(int v[], int& dim) {

	int primaCifra = 0;
	int ultimaCifra = 0;
	for (int i = 0; i < dim; i++) {

		int numar = v[i];

		if (numar >=10 ) {

			int primaCifra = numar/10;
			int ultimaCifra = numar%10;


			stergereElement(v, dim, i);
			i--;
		}
	}
}

void stergereNule(int v[], int& dim) {

	for (int i = 0; i < dim; i++) {

		if (v[i] == 0) {

			stergereElement(v, dim, i);
			i--;
		}
	}
}

bool patratPerfect(int n) {

	for (int i = 1; i * i <= n; i++) {
		if (i * i == n) {
			return true;
		}
	}
	return false;
}

void stergereCifraPP(int v[], int& dim) {

	for (int i = 0; i < dim; i++) {
		
		int n = v[i];

		while (n != 0) {
			int cifra = n % 10;
			if (patratPerfect(cifra*cifra)) {
				stergereElement(v, dim, i);
				i--;
			}
			n = n / 10;
		}

	}
}

int cmmd(int a, int b) {

	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;

}

void stergerePrimIntreEle(int v[], int& dim) {

	for (int i = 0; i < dim; i++) {
		
		if (cmmd(v[i], v[i + 1]) == 1) {
			stergereElement(v, dim, i);
			i--;
		}
	}

}

void inserareCubNeg(int v[], int& dim) {

	for (int i = 0; i < dim; i++) {
		int cub = v[i] * v[i] * v[i];
		if (v[i] < 0) {
			inserareElemPoz(v, dim, i, cub);
			i++;
		}
	}

}

bool crescator(int n) {

	while (n != 0) {
		if (n / 10 % 10 > n % 10) {
			return false;
		}
		n = n / 10;
	}
	return true;
}

int rasturnatNumar(int n) {

	int rasturnat = 0;

	while (n != 0) {
		int cifra = n % 10;
		rasturnat = rasturnat * 10 + cifra;
		n = n / 10;
	}
	return rasturnat;
}


void inserareRasturnatElem(int v[], int& dim) {

	for (int i = 0; i < dim; i++) {
		int rasturnat = rasturnatNumar(v[i]);
		if (crescator(v[i])) {
			inserareElemPoz(v, dim, i, rasturnat);
			i++;
		}
	}

}

void inserareCifreIdentice(int v[], int& dim) {


	for (int i = 0; i < dim; i++) {

		int n = v[i];

		if (n >= 10) {

			int primaCifra = n / 10;
			int ultimaCifra = n % 10;

			if (primaCifra == ultimaCifra) {
				inserareElemPoz(v, dim, i,primaCifra);
				inserareElemPoz(v, dim, i+2, ultimaCifra);
				i+=2;
			}
			
		}
	}
}

int nrDiv(int n) {

	int ct = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			ct++;
		}
	}
	return ct;
}

int sumaDiv(int n) {
	
	int sumaDiv = 0;
	for (int i = 1; i<= n; i++) {
		if (n % i == 0) {
			sumaDiv += i;
		}
	}
	return sumaDiv;
}


void inserareSumaDiv(int v[], int& dim) {

	for (int i = 0; i < dim; i++) {
		int sumadiv = sumaDiv(v[i]);
		if (nrDiv(v[i])==3) {
			inserareElemPoz(v, dim, i+1, sumadiv);
			i++;
		}
	}
}

int prodCifre(int n) {

	int p = 1;
	while (n != 0) {
		int cifra = n % 10;
		p *= cifra;
		n = n / 10;
	}
	return p;
}

void inserareProdCifre(int v[], int& dim) {

	for (int i = 0; i < dim; i++) {
		int prod = prodCifre(v[i]);
		int n = v[i];
		while (n != 0) {
			int cifra = n % 10;
			if (patratPerfect(cifra * cifra)) {
				inserareElemPoz(v, dim, i, prod);
				i++;
				break;
			}
			n = n / 10;
		}
	}

}