#include "algoritmi.h"

void sol1() {

	int date[] = { 32,13,79,67,3,92,0,707 };

	cout << "a) " << " ";

	int dim = 8;

	stergerePrime(date, dim);
	afisareVec(date, dim);

	cout << endl;

	cout << "b) " << " ";

	stergereNr2Cifre(date, dim);
	afisareVec(date, dim);

	cout << "e)" << " ";
	stergereCifraPP(date, dim);
	afisareVec(date, dim);

}

void sol2() {

	int date[] = { 32,13,79,67,3,92,0,707 };

	int dim = 8;

	cout << "c) " << " ";


	stergereNule(date, dim);

	afisareVec(date, dim);

}

void sol3() {

	int date[] = { 32,13,79,67,3,92,0,707 };

	int dim = 8;


	cout << "e)" << " ";
	stergereCifraPP(date, dim);
	afisareVec(date, dim);

}

void sol4() {

	int date[] = { 32,13,79,67,3,92,0,707 };

	int dim = 8;


	cout << "e)" << " ";
	stergerePrimIntreEle(date, dim);
	afisareVec(date, dim);

}

//2

void sol5() {

	int date[] = { 23,53,-21,45,-6,-91,676,8,75 };

	int dim = 9;

	cout << "a)" << " ";

	inserareCubNeg(date, dim);
	afisareVec(date, dim);

}

void sol6() {

	int date[] = { 23,53,-21,45,-6,-91,676,4,75 };

	int dim = 9;

	cout << "b)" << " ";

	inserareRasturnatElem(date, dim);
	afisareVec(date, dim);

}

void sol7() {

	int date[] = { 23,53,-21,45,-6,-91,676,4,75 };

	int dim = 9;

	cout << "d)" << " ";

	inserareCifreIdentice(date, dim);
	afisareVec(date, dim);
}


void sol8() {

	int date[] = { 23,53,-21,45,-6,-91,676,6,75 };

	int dim = 9;

	cout << "d)" << " ";

	inserareSumaDiv(date, dim);
	afisareVec(date, dim);
}

void sol9() {

	int date[] = { 23,53,-21,45,-6,-91,676,6,75 };

	int dim = 9;

	cout << "e)" << " ";

	inserareProdCifre(date, dim);
	afisareVec(date, dim);
}