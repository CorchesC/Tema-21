#pragma once
#include"structuri.h"
using namespace std;

int punctInAfaraTriunghiurilor(coordVarfuri crd[], int x, int y, int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (crd[i].coordX >= x && crd[i].coordY >= y) {
			nr++;
		}
	}
	return nr;
}
void esteFractieReductibile(fractii frac[], int d, int i) {
		bool aff = false;
		for (int n = 1; n < 10; n ++) {
			if (frac[i].numarator % n == 0 && frac[i].numitor % n == 0) {
				aff = true;
			}
			
		}
		if (aff == true) {
			cout << frac[i].numarator << "/" << frac[i].numitor << endl;
		}
}
void sortareEleviChimie(eleviChimie chim[], int d) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < d - 1; j++) {
			if (chim[j].media() < chim[j + 1].media()) {
				eleviChimie aux = chim[j];
				chim[j] = chim[j + 1];
				chim[j + 1] = aux;
				aff = false;
			}
		}
	} while (aff == false);
	for (int i = 0; i < d; i++) {
		cout << chim[i].nume << " " << chim[i].media() << endl;
	}
}
void sefDePromorie(elevi12 elev[], int d) {
	cout << "Sefii de promotie sunt: " << endl;
	for (int i = 0; i < d; i++) {
		if (elev[i].mediaFinala() == 10) {
			cout << elev[i].nume << " " << elev[i].prenume << endl;
		}
	}
}
void noBac(elevi12 elev[], int d) {
	cout << "Elevii care nu dau bacul sunt: " << endl;
	for (int i = 0; i < d; i++) {
		if (elev[i].mediaFinala() < 5) {
			cout << elev[i].nume << " " << elev[i].prenume << endl;
		}
	}
}
void medieVarsta(dataSportivi sptv[], int d) {
	double s = 0;
	double nr = 0;
	for (int i = 0; i < d; i++) {
		s += sptv[i].varsta();
		nr++;
	}
	double ma = s / nr;

	cout << "Varrsta mediei este: " << ma << "si lista elevilor cu varsta sub medie este: " << endl;

	for (int j = 0; j < d; j++) {
		if (sptv[j].varsta() < ma) {
			cout << sptv[j].nume << " " << sptv[j].prenume << endl;
		}
	}
}
void eleviFaraDreptLaBursa(bursaElevi bursa[], int d, int l) {
	cout << "Elevii fara drept de bursa sunt: " << endl;
	for (int i = 0; i < d; i++) {
		if (bursa[i].venitMedie() > l) {
			cout << bursa[i].nume << " " << bursa[i].prenume << endl;
		}
	}
}
void numarFractiiEchivalenteCuUltimul(fractii frac[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (frac[i].numitor != 0 && frac[i].numarator != 0) {
			if (frac[i].numitor % frac[d - 1].numitor == 0 && frac[i].numarator % frac[d - 1].numarator == 0) {
				nr++;
			}
		}
	}
	cout << nr << endl;
}
void afisareEleviPesteNorma(inaltimeElevi inl[], int d, int a, int b) {
	for (int i = 0; i < d; i++ ) {
		if (inl[i].varsta >= 14 && inl[i].inaltime > a && inl[i].inaltime < b) {
			cout << inl[i].nume << " " << inl[i].prenume << " " << inl[i].inaltime << " cm" << endl;

		}
	}
}
int coordonatePeOX(coordPuncte cord[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (cord[i].coordY >= 0) {
			nr++;
		}
	}
	return nr;
}