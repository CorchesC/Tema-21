#pragma once
#include "functii.h"
#include "structuri.h"
using namespace std;

void sol1() {
	//Se considera un sir de n puncte, pentru fiecare cunoscudu-se cooronatele intregi (x,y).
	//Sa se realizeze un program care determina numarul de puncte care se afla in afara unui triunghi, pentru care se cunoucs coordonatele varfurilor sale.
	//Punctele aflate pe laturile triunghiului se vor considera in "interiorul" lui.

	coordPuncte a;
	a.coordX = 0;
	a.coordY = 1;

	coordPuncte b;
	b.coordX = 8;
	b.coordY = 1;

	coordPuncte c;
	c.coordX = 4;
	c.coordY = 2;

	coordPuncte d;
	d.coordX = 5;
	d.coordY = 3;

	coordPuncte e;
	e.coordX = 5;
	e.coordY = 8;

	coordPuncte f;
	f.coordX = 10;
	f.coordY = 3;

	coordVarfuri a1;
	a1.coordX = 1;
	a1.coordY = 1;

	coordVarfuri b1;
	b1.coordX = 5;
	b1.coordY = 10;

	coordVarfuri c1;
	c1.coordX = 10;
	c1.coordY = 1;

	coordVarfuri crd[3] = { a1,b1,c1 };

	coordPuncte pct[6] = { a,b,c,d,e,f };

	int nr = 0;

	for (int i = 0; i < 6; i++) {
		nr += punctInAfaraTriunghiurilor(crd, pct[i].coordX, pct[i].coordY, 3);
	}

	cout << "Numar de puncte din afara triunghiul este: " << nr << endl;
}
void sol2() {
	//Se considera un sir de n fractii identificate prin numitor si numarator. 
	//Sa se stearga din toate fractiile ireductibile.Fractiile reductibile vor fi afisate in ordinea crescatoare a valorilor.
	//Fractiile rezultate vor fi afisate in acelasi format in fisierul text out.txt

	fractii a;
	a.numarator = 10;
	a.numitor = 6;

	fractii b;
	b.numarator = 7;
	b.numitor = 8;

	fractii c;
	c.numarator = 5;
	c.numitor = 9;

	fractii d;
	c.numarator = 10;
	c.numitor = 10;

	fractii e;
	e.numarator = 4;
	e.numitor = 16;

	fractii frac[5] = { a,b,c,d,e };
	for (int i = 0; i < 5; i++) {
		esteFractieReductibile(frac, 5, i);
	}
	
}
void sol3() {
	//Se consideră două fișiere note.txt și nume.txt. Unul conține pe fiecare linie câte două numere reprezentând notele la chimie ale unor elevi, iar pe liniile corespunzătoare din celălalt fişier se află numele acestora. Să se creeze un nou fişier, final.txt, în care pe fiecare linie să se regăsească numele elevului şi media la chimie exprimată cu două zecimale.
	//Cele două valori vor fi despărțite în cadrul liniilor prin câte un spațiu. Elevii vor fi scrişi în ordinea descrescătoare a mediilor, iar la medii egale, crescător după nume.

	eleviChimie a;
	a.nume = "Ionescu";
	a.nota1 = 10;
	a.nota2 = 8;

	eleviChimie b;
	b.nume = "Mincu";
	b.nota1 =7;
	b.nota2 = 8;

	eleviChimie c;
	c.nume = "Voicu";
	c.nota1 = 5;
	c.nota2 = 9;

	eleviChimie d;
	d.nume = "Micu";
	d.nota1 = 10;
	d.nota2 = 10;

	eleviChimie e;
	e.nume = "Urdea";
	e.nota1 = 6;
	e.nota2 = 8;

	eleviChimie f;
	f.nume = "Dan";
	f.nota1 = 5;
	f.nota2 = 9;
	
	eleviChimie chim[6] = { a,b,c,d,e,f };

	sortareEleviChimie(chim, 6);
}
void sol4() {
	//. Într-o şcoală există n clase de a XII-a, fiecare cu câte m elevi. Pentru fiecare dintre aceştia se cunosc: numele şi prenumele, clasa din care face parte(identificată printr-o majusculă) şi mediile semestriale.
	//Realizați un program care afişează :
	//	-numele şi prenumele şefului de promoţie;
	//	-lista pe clase a elevilor care nu vor susține examenul de bacalaureat, ordonati după nume şi prenume
	
	elevi12 a;
	a.nume = "Ionescu";
	a.prenume = "Fagaras";
	a.media1 = 10;
	a.media2 = 10;

	elevi12 b;
	b.nume = "Andrei";
	b.prenume = "Franc";
	b.media1 = 4;
	b.media2 = 3;

	elevi12 c;
	c.nume = "Dan";
	c.prenume = "Teopent";
	c.media1 = 8;
	c.media2 = 9;

	elevi12 d;
	d.nume = "Andrian";
	d.prenume = "Dragan";
	d.media1 = 4;
	d.media2 = 1;

	elevi12 elv[4] = { a,b,c,d };

	sefDePromorie(elv, 4);
	noBac(elv, 4);
}
void sol5() {
	//Se cunoaşte numărul de sportivi participanți la o competiție oarecare. Pentru Dan, Popescu Ion fiecare dintre ei se cunoaşte data naşterii (luna şi anul). Cunoscându-se data (luna şi anul) la care se desfăşoară competiția, să se afişeze media de vârstă a sportivilor, exprimată în acelaşi mod. Afişați și lista datelor de naştere ale sportivilor cu vârsta mai mică decât cea medie.
	dataSportivi a;
	a.nume = "Ionescu";
	a.prenume = "Fagaras";
	a.luna = 10;
	a.an = 2005;

	dataSportivi b;
	b.nume = "Andrei";
	b.prenume = "Franc";
	b.luna = 4;
	b.an = 2003;

	dataSportivi c;
	c.nume = "Dan";
	c.prenume = "Teopent";
	c.luna = 8;
	c.an = 2006;

	dataSportivi d;
	d.nume = "Andrian";
	d.prenume = "Dragan";
	d.luna = 8;
	d.an = 2004;

	dataSportivi sprtv[4] = { a,b,c,d };

	medieVarsta(sprtv,4);
}
void sol6() {
	// Se citesc de la tastatură datele referitoare la m elevi: nume, prenume, numărul de membri ai familiei şi venitul net lunar al familiei. Un elev primeşte bursă dacă venitul pe fiecare membru al familiei nu depăşeste o valoare limită L. Realizați un program care afişează elevii ce nu au dreptul la bursă.
	bursaElevi a;
	a.nume = "Ionescu";
	a.prenume = "Fagaras";
	a.nrMembrii = 3;
	a.venitLunar = 12005;

	bursaElevi b;
	b.nume = "Andrei";
	b.prenume = "Franc";
	b.nrMembrii = 5;
	b.venitLunar = 20303;

	bursaElevi c;
	c.nume = "Dan";
	c.prenume = "Teopent";
	c.nrMembrii = 3;
	c.venitLunar = 32006;

	bursaElevi d;
	d.nume = "Andrian";
	d.prenume = "Dragan";
	d.nrMembrii = 4;
	d.venitLunar = 52000;

	bursaElevi burs[4] = { a,b,c,d };

	cout << "Introduceti limita: " << endl;
	int l;
	cin >> l;

	eleviFaraDreptLaBursa(burs, 4, l);
}
void sol7() {
	// Se consideră un şir de n fracții (numitor, numărător). Afişați numărul de fracții echivalente cu ultima citită.

	fractii a;
	a.numarator = 3;
	a.numitor = 4;

	fractii b;
	b.numarator = 36;
	b.numitor = 60;

	fractii c;
	c.numarator = 2;
	c.numitor = 4;

	fractii d;
	d.numarator = 12;
	d.numitor = 20;

	fractii frac[4] = { a,b,c,d };

	numarFractiiEchivalenteCuUltimul(frac, 4);

}
void sol8() {
	// Pentru o clasă de n elevi se cunosc următoarele date: numele, prenumele, vîrsta şi înălțimea. Se doreşte realizarea unui tabel care să cuprindă doar elevii care au împlinit 14 ani şi care au înălțimea cuprinsă în intervalul [h1, h2]. Se va afişa pentru fiecare elev, numele, prenumele şi înălţimea
	inaltimeElevi a;
	a.nume = "Ionescu";
	a.prenume = "Fagaras";
	a.varsta = 13;
	a.inaltime = 200;

	inaltimeElevi b;
	b.nume = "Andrei";
	b.prenume = "Franc";
	b.varsta = 15;
	b.inaltime = 160;

	inaltimeElevi c;
	c.nume = "Dan";
	c.prenume = "Teopent";
	c.varsta = 16;
	c.inaltime = 175;

	inaltimeElevi d;
	d.nume = "Andrian";
	d.prenume = "Dragan";
	d.varsta = 17;
	d.inaltime = 154;

	inaltimeElevi inl[4] = { a,b,c,d };

	cout << "Introduceti a: " << endl;
	int x;
	cin >> x;

	cout << "Introduceti b: " << endl;
	int y;
	cin >> y;

	afisareEleviPesteNorma(inl, 4, x, y);
}
void sol9() {
	// Se consideră un şir de n puncte în plan, pentru fiecare cunoscal coordonatele întregi (x, y). Să se realizeze un program care identifică un pătrat de latură n, în interiorul căruia se află numărul maxim de puncte. Punctele aflate pe laturile pătratului se vor considera în „,interiorul" lui. Se vor afişa coordonatele colțului stînga-jos al pătratului determinat, care va fi obligatoriu unul dintre cele n puncte date

	//???
}
void sol10() {
	// Se consideră un şir de n puncte în plan, pentru fiecare cunoscându-se coordonatele întregi, (x, y). Să se realizeze un program care determină numărul OX.b maxim de puncte coliniare situate pe o dreaptă paralelă cu axa OX.
	coordPuncte a;
	a.coordX = 0;
	a.coordY = 3;

	coordPuncte b;
	b.coordX = -8;
	b.coordY = 1;

	coordPuncte c;
	c.coordX = 3;
	c.coordY = -2;

	coordPuncte d;
	d.coordX = -5;
	d.coordY = 3;

	coordPuncte e;
	e.coordX = -5;
	e.coordY = -3;

	coordPuncte f;
	f.coordX = -10;
	f.coordY = -38;

	coordPuncte cord[6] = { a,b,c,d,e,f };

	int nr = coordonatePeOX(cord, 6);

	cout << "Numarul maxim de puncte pe OX este: " << nr << endl;
}