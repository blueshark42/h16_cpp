// ## blueshark ## 
// Tu mate ulohy na trenovanie alebo na pisomky ;) 

#define _USE_MATH_DEFINES

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>
#include <time.h>
#include <math.h>

// Jednoduche zadania na vystupy
void Vypis_1();	
void Vypis_2();	
void Vypis_3();	
void Udaje_ziak();
void Automobil();	
void Trieda();

// Jednoduche zadania
int Sucet(int, int);
int Rozdiel(int, int);
int Sucin(int, int);
float Objem_kv(float, float, float);
float Obsah_ob(float, float);
float Obsah_kv(float, float, float);
float Tovar(int, const float);
float Mzda(int, const float);
float Kurz_1(int);
float Sila(float, float);
float Hybnost(float, float);
float Draha_1(float, float);
float Draha_2(float, float);
void Zamena(char, char);

// Zlozitejsie vypocty
float Podiel_1(float, float);
float Dlzka_kr(float);
float Obsah_kr(float);
float Objem_va(float, float);
float Objem_gu(float);
int Zvysok(int, int);
int Cislica(int);
void Podiel_2(float, float);
float Kurz_2(int);
float C_na_F(float);
float F_na_C(float);
float Spotreba(float, float);
float Priemer(int, int, int, int, int);	// Alebo int[5]
double Radian(double stupen);	// Deg2Rad
double Stupen(double radian);	// Rad2Deg
float BMI(float, float);


// Matematicke funkcie
float Odmocnina(float);
float Polomer(float);
float Mocnina(float);
float Plot(float, float);
float Pad(float, const float);
float Sinus(float);
float Tangens(float);
float Kladne(float);


// Znakove a retazcove premenne
char Znak(char);
void Znaky_1(char);
void Slovo(std::string);
void Vysledky();
void Firmy();
void Automobil_2();
void Zmaz_cast_1(std::string, int, int);
void Zmaz_cast_2(std::string);
void Zmaz_cast_3(std::string);
void Dopln_cast(std::string, std::string, int);
std::string Vymena(std::string);


// Ukazovatele a dynamicky pridelovana pamat
int Sucet_pt(int, int);
float Podiel_pt(float, float);
void Sucet_pocet_pt(int[]);	// Neviem x)



// Podmieneny prikaz if else
void Kladne_1a(int);
void Kladne_1b(int);
void Parne_1(int); 
void Parne_2(int);
void Heslo(std::string, std::string);
void Interval(std::vector<int>, int);
bool Delitelnost(int, int);
int Vacsie(int, int);
bool Del_tromi(int);
bool Parne_2(int, int);
bool Rovnake(std::string, std::string);
bool Kladne_2(int, int);
void Interval_2(std::vector<int>, int);
void Poradie(int[], size_t);	// Argument size_t vypocitas "sizeof(array) / sizeof(*array)" pomocou Byte-ov
void Des_cast_2(float);
void Najvacsie(int[]);
void Najmensie(int[]);
void Kladne_3(int[]);
void Parne_3(int[]);
void Kv_rovnica(float, float, float);
void Prienik();
void PrienikPrehod(int& x, int& y);


// Podmieneny prikaz switch
void Tyzden_1(int);
void Operacia_1(int, int);
void Operacia_2(int, int);
void Vypis_retazca(std::string);


// Cykly
void Pozdrav_1();
void Slovo_2(std::string, int);
void Od_1_do_10();
void Od_a_do_b(int, int);
void Parne_4(std::vector<int>);
void Neparne_1(std::vector<int>);
void Parne_5(std::vector<int>);
void Neparne_2(std::vector<int>);
float Sucet_2(float[], size_t);
int Sucet_parne(int[], size_t);
int Suc_poc_neparne(int[], size_t);
void Najvacsie_2(int[], size_t);
void Mocniny(int[], size_t);
int Sucet_int(int[], std::vector<int>, size_t);
void ASCII();	// 33, 126
void Ciastocny_sucet();
void Nah_cislo_1();
void Nah_cislo_2(std::vector<int>, int);
void Sucet_NC(std::vector<int>, int);
void Tri_najvacsie(std::vector<int>);
float Faktorial(float);
void Sucet_K_1(int);
void Sucet_K_2(std::vector<int>, int);
void Kreslenie_obdlznik(char, int, int);
void Kreslenie_trojuholnik(char, int);
void Kocka(int);
void Nahodna_chodza(int, int, int);
// Tieto stretnutia a tieto sa mi fakt nechce je to proste to iste ako Nahodna_chodza

bool Palindrome(std::string input);	
int Parne(int inval[5]);
float AritPriemer(float a, float b);

// Viac informacii: ASCII, ARRAY, MEMORY MANAGEMENT, CASTING
void Sifrovanie(char text[], char key[], bool bEncrypt, bool bSetMemoryToModifiedValue);

// SIFROVANIE - Hodnoty musia byt pristupne pre (bSetMemoryToModifiedValue); POZOR! Toto prepise klucove udaje!
char inText[] = "Ifmmp"; // 0 1 2 0 1 | *GNNQ | Hello || Ifmmp | Hello -> Bit Offset | Encr. | Decr. || Encr. | Decr.
char inKey[] = "ABC";


// Jednoduche zadania na vystupy
int main()
{
	// Run functions here



	return 0;
}

void Vypis_1()
{
	std::cout << "Programujeme v jazyku C++\nToto, je program v jazyku C++\n" << 598;
}

void Vypis_2()
{
	std::cout << "Jan Novy\nBezrucova 26\n945 45 Bratislava\n";
}

void Vypis_3()
{
	std::cout << "Jan Novy\nI.B\n56\nMAT - 2, SJL - 3, PRO/API - 1\n";
}

void Udaje_ziak()
{
	int vek, vyska, vaha;
	std::cout << "Zadajte Vas vek, vysku a vahu:";
	std::cin >> vek >> vyska >> vaha;
	std::cout << "Mate " << vek << " rokov\nVasa vyska je " << vyska << " cm\nVasa hmotnost je " << vaha << " kg\n";
}

void Automobil()
{
	int rokVyroby, najazdeneKm, spotreba;
	std::cout << "Zadajte rok vyroby, najazdene km a spotrebu:";
	std::cin >> rokVyroby >> najazdeneKm >> spotreba;
	std::cout << "Rok vyroby: " << rokVyroby << "\nPocet najazdenych km: " << najazdeneKm << "Spotreba: " << spotreba << " l/100km";
}

void Trieda()
{
	int pocetZiakov, vymeskaneH, ziakVyzn, ziakDobre, ziakProsp, ziakNepros;
	std::cout << "Zadajte pocet ziakov, vymeskane hodiny, pocet ziakov ktori prospeli s vyznamenanim, prospeli velmi dobre, prospeli a neprospeli: ";
	std::cin >> pocetZiakov >> vymeskaneH >> ziakVyzn >> ziakDobre >> ziakProsp >> ziakNepros;
	std::cout << "Pocet Ziakov: " << pocetZiakov << "\nVymeskane Hodiny: " << vymeskaneH << "\nZ. Vyznamenanim: " << ziakVyzn << "\nZ. Velmi Dobre: " << ziakDobre << "\nZ. Prospel: " << ziakProsp
			  << "\nZ. neprospel: " << ziakNepros;

}


// Jednoduche zadania
int Sucet(int a, int b)
{
	return a + b;
}

int Rozdiel(int a, int b)
{
	return a - b;
}

int Sucin(int a, int b)
{
	return a * b;
}

float Objem_kv(float a, float b, float c)
{
	return a * b * c;
}

float Obsah_ob(float a, float b)
{
	return a * b;
}

float Obsah_kv(float a, float b, float c)
{
	return 2 * (a * b + b * c + a * c);
}

float Tovar(int ks, const float CENA)
{
	return ks * CENA;
}

float Mzda(int odprHod, const float HOD_MZDA)
{
	return odprHod * HOD_MZDA;
}

float Kurz_1(int koruna)
{
	const float KURZ = 0.0370f;
	return koruna * KURZ;
}

float Sila(float hmotnost, float zrychlenie)
{
	return hmotnost * 9.8f * zrychlenie;	// 1kg = 9.8N Ale nechapem co tu chcu
}

float Hybnost(float hmotnost, float rychlost)
{
	return hmotnost * rychlost;
}

float Draha_1(float rychlost, float cas)
{
	// Predpokladame rychlost je v m/s 
	return rychlost * cas;
}

float Draha_2(float zrychlenie, float cas)
{
	return 1 / 2 * (zrychlenie * cas) * cas;
}

void Zamena(char a, char b)
{
	std::cout << "Pred premenou: a = " << a << "\nb = " << b;

	char temp = a;
	a = b;
	b = temp;

	std::cout << "Po premene: a = " << a << "\nb = " << b;
}


// Zlozitejsie Vypocty
float Podiel_1(float a, float b)
{
	return a / b;
}

float Dlzka_kr(float polomer)
{
	const float PI = 3.1415f;
	return 2 * PI * polomer;
}

float Obsah_kr(float polomer)
{
	const float PI = 3.1415f;
	return PI * polomer * polomer;
}

float Objem_va(float polomer, float vyska)
{
	const float PI = 3.1415f;
	return PI * polomer * polomer * vyska;
}

float Objem_gu(float polomer)
{
	const float PI = 3.1415f;
	return 4 / 3 * PI * polomer * polomer * polomer;
}

int Zvysok(int a, int b)
{
	return a % b;
}

int Cislica(int a)
{
	return a % 10;
}

void Podiel_2(float a, float b)
{
	std::cout << (int)(a / b) << std::endl;
	std::cout << (int)a % (int)b;
}

float Kurz_2(int koruna)
{
	const float KURZ = 30.0f;
	return koruna * KURZ;
}

float C_na_F(float c)
{
	return (c * 9 / 5) + 32;
}

float F_na_C(float f)
{
	return (f - 32) * 5 / 9;
}

float Spotreba(float km, float spotreba)
{
	return spotreba / km * 100;
}

float Priemer(int a, int b, int c, int d, int e)
{
	return (float)(a + b + c + d + e) / 5;
}

double Radian(double stupen)
{
	// 1deg * PI / 180
	return stupen * M_PI / 180;
}

double Stupen(double radian)
{
	// 1rad * 180 / PI
	return radian * 180 / M_PI;
}

float BMI(float hmotnost, float vyska)
{
	return hmotnost / vyska;
}


// Matematicke funkcie
float Odmocnina(float a)
{
	return sqrt(a);
}

float Polomer(float plocha)
{
	const float PI = 3.1415f;
	return PI / plocha * 2;
}

float Mocnina(float a)
{
	return pow(a, 2);
}

float Plot(float plocha, float cena)
{
	return sqrt(plocha) * 4 * cena;
}

float Pad(float vyska, const float zrych = 9.81f)
{

	return 1 / 2 * zrych * sqrt(2 * vyska / zrych);
}

float Sinus(float uhol)
{
	const float PI = 3.1415f;
	return sin(uhol * PI / 180);
}

float Tangens(float uhol)
{
	const float PI = 3.1415f;
	return tan(uhol * PI / 180);
}

float Kladne(float a)
{
	return fabs(a);
	// Alebo a - a - a;
}


// Znakove a retazcove premenne
char Znak(char a)
{
	return a;
}

void Znaky_1(char a)
{

	for (int i = 0; i < 3; i++)
	{
		std::cout << a;
	}
}

void Slovo(std::string a)
{
	std::cout << a;
}

void Vysledky()
{
	std::string meno, priezvisko, adresa;
	std::string predmet[5];		// Alebo predmet1, predmet2 ...
	int znamka[5];				// Alebo znamka1, znamka2 ...

	std::cout << "Zadajte svoje meno, priezvisko, adresu, skratky piatich predmetov a znamky z uvedenych predmetov:";
	std::cin >> meno >> priezvisko >> adresa;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> predmet[i];
		std::cin >> znamka[i];
	}

	std::cout << meno << " " << priezvisko << std::endl << adresa;

	for (int i = 0; i < 5; i++)
	{
		std::cout << predmet[i] << " " << znamka[i];
	}

	// Alebo
	// cin >> meno >> priezvisko >> adresa >> predmet1 >> znamka1 >> predmet2 >> znamka2...
	// cout << meno << priezvisko << endl << adresa << endl << predmet1 << znamka1 << endl << ...


}

// FIRMY
class Firma
{
private:
	std::string nazov;
	std::string adresa;
	int rokZalozenia;
	int obrat;
public:
	Firma(std::string nazov, std::string adresa, int rokZalozenia, int obrat)
	{
		this->nazov = nazov;
		this->adresa = adresa;
		this->rokZalozenia = rokZalozenia;
		this->obrat = obrat;
	}

	void VypisUdaje()
	{
		std::cout << nazov << std::endl << adresa << std::endl << rokZalozenia << std::endl
			<< obrat << std::endl << 2019 - rokZalozenia;
	}

};

void Firmy()
{
	Firma* Toffifee = new Firma("Toffifee", "Halova Strasse 16", 1957, 6);
	Toffifee->VypisUdaje();
}
// ----------------------

// Automobil
class Vozidlo
{
private:
	std::string nazov, farba;
	int najazdeneKm;
	float spotreba;

public:
	Vozidlo(std::string nazov, std::string farba, int najazdeneKm, float spotreba)
	{
		this->nazov = nazov;
		this->farba = farba;
		this->najazdeneKm = najazdeneKm;
		this->spotreba = spotreba;
	}


	void VypisUdaje()
	{
		std::cout << nazov << "\t" << farba << "\t" << najazdeneKm << "\t" << spotreba << std::endl;
	}

	int GetNajazdene()
	{
		return najazdeneKm;
	}

	float GetSpotreba()
	{
		return spotreba;
	}

};

void Automobil_2()
{

	Vozidlo* BMW = new Vozidlo("BMW", "Cierna", 12000, 8.5f);
	Vozidlo* Opel = new Vozidlo("Opel", "Cervena", 89000, 6.3f);
	Vozidlo* Mazda = new Vozidlo("Mazda", "Modra", 110000, 7.6f);
	Vozidlo* Peugeot = new Vozidlo("Peugeot", "Zelena", 100000, 8.7f);

	std::cout << "Nazov\tFarba\tNaj.\tSpotreba na 100km\n";
	BMW->VypisUdaje();
	Opel->VypisUdaje();
	Mazda->VypisUdaje();
	Peugeot->VypisUdaje();
	int priemerKm = (BMW->GetNajazdene() + Opel->GetNajazdene() + Mazda->GetNajazdene() + Peugeot->GetNajazdene()) / 4;
	float priemerSpotreba = (BMW->GetSpotreba() + Opel->GetSpotreba() + Mazda->GetSpotreba() + Peugeot->GetSpotreba()) / 4;
	std::cout << "\tPRIEMER: " << priemerKm << "\t" << priemerSpotreba;


}
// ----------------------

void Zmaz_cast_1(std::string text, int poz, int pocet)
{
	std::cout << text.erase(poz, pocet);
}

void Zmaz_cast_2(std::string text)
{
	if (text.length() % 2 == 0)
	{
		std::cout << text.erase(text.length() / 2, text.length() / 2);
	}
	else
	{
		std::cout << text.erase(0, (text.length() + 1) / 2);
	}
}

void Zmaz_cast_3(std::string text)
{
	if (text.length() % 2 == 0)
	{
		std::cout << text.erase(text.length() / 2, text.length() / 2);
	}
	else
	{
		std::cout << text.erase((text.length() + 1) / 2, text.length() / 2);
	}
}

void Dopln_cast(std::string text, std::string doplnText, int poz)
{
	text.insert(text.begin() + poz, doplnText.begin(), doplnText.end());
	std::cout << text;
}

std::string Vymena(std::string text)
{
	reverse(text.begin(), text.end());
	return text;
}


// Ukazovatele a dynamicky pridelovana pamat
int Sucet_pt(int a, int b)
{
	int *c, *d;
	c = &a;
	d = &b;
	return *c + *d;
}

float Podiel_pt(float a, float b)
{
	float *c, *d;
	c = &a;
	d = &b;
	return *c / *d;
}

void Sucet_pocet_pt(int a[])
{
	// k - kladne; z - zaporne
	int *k[10], *z[10];
	*k = 0;
	*z = 0;
	int availableIndexK = 0, availableIndexZ = 0;

	for (int i = 0; i < 10; i++)
	{
		if (a[i] >= 0)
		{
			//*k[availableIndexK++] = a[i];
		}
		else
		{
			//*z[availableIndexZ++] = a[i];
		}
	}

	int *sucetK = nullptr, *sucetZ = nullptr;
	int x, y;
	x = availableIndexK;
	y = availableIndexZ;
	for (int i = 0; i < --x; i++)
	{
		sucetK += *k[i];
	}
	for (int i = 0; i < --y; i++)
	{
		sucetZ += *z[i];
	}

	std::cout << "Pocet kladnych cisel: " << availableIndexK;
	std::cout << "\nPocet zapornych cisel: " << availableIndexZ;
	std::cout << "\nSucet kladnych cisel: " << sucetK; 
	std::cout << "\nSucet zapornych cisel: " << sucetZ;

}



// Podmieneny prikaz if else
void Kladne_1a(int a)
{
	std::cout << (a > 0 ? "Zadali ste kladne cislo" : NULL);
}

void Kladne_1b(int a)
{
	if (a > 0)
		std::cout << "Zadali ste kladne cislo;\n";
	else if (a == 0)
		std::cout << "Zadali ste nulu";
	else
		std::cout << "Zadali ste zaporne cislo";
}

void Parne_1(int a)
{
	std::cout << (a % 2 == 0 ? "Zadali ste parne cislo" : NULL);
}

void Parne_2(int a)
{
	std::cout << (a % 2 == 0 ? "Zadali ste parne cislo" : "Zadali ste neparne cislo");
}

void Heslo(std::string zadaneHeslo, std::string heslo)
{
	std::cout << (zadaneHeslo.compare(heslo) == 0 ? "Zadali ste spravne heslo" : "Zadali ste nespravne heslo");
}

void Interval(std::vector<int>interval, int zadane)
{
	std::cout << ((interval[0] <= zadane && interval[1] >= zadane) == true ? "Zadane cislo je z intervalu" : "Zadane cislo nie je z intevalu");
}

bool Delitelnost(int a, int b)
{
	return a % b == 0;
}

int Vacsie(int a, int b)
{
	return a > b ? a : b;
}

bool Del_tromi(int a)
{
	return a % 3 == 0;
}

bool Parne_2(int a, int b)
{
	return (a + b) % 2 == 0;
}

bool Rovnake(std::string a, std::string b)
{
	return a.compare(b) == 0;
}

bool Kladne_2(int a, int b)
{
	return (a * b) >= 0;
}

void Interval_2(std::vector<int>interval, int a)
{
	int vzdialenost = a > interval[1] ? a - interval[1] : -(a - interval[0]);
	bool x = interval[0] <= a && interval[1] >= a;
	if (x)
	{
		std::cout << "Zadane cislo " << a << " je z intervalu <" << interval[0] << ", " << interval[1] << ">";
	}
	else
	{
		std::cout << "Zadane cislo " << a << " nie je z intervalu <" << interval[0] << ", " << interval[1] << ">\nJeho vzdialenost od intervalu je " << vzdialenost;
	}
}

void Poradie(int a[], size_t sz)
{
	std::sort(a, a + sz);
	for (unsigned int i = 0; i < sz; ++i)
	{
		std::cout << a[i] << " ";
	}
}

void Des_cast_2(float a)
{

	std::cout << a - (int)a;
}

void Najvacsie(int a[])
{
	int najvacsieCislo = a[0];
	for (int i = 0; i < 5; i++)
	{
		if (a[i] > najvacsieCislo)
			najvacsieCislo = a[i];
	}

	std::cout << najvacsieCislo;
}

void Najmensie(int a[])
{
	int najmensie = a[0];
	for (int i = 0; i < 7; i++)
	{
		if (najmensie < a[i])
			najmensie = a[i];
	}
	std::cout << najmensie;

}

void Kladne_3(int a[])
{
	int kladne = 0;
	for (int i = 0; i < 5; i++)
	{
		kladne = a[i] >= 0 ? kladne++ : NULL;
	}
	std::cout << kladne;
}

void Parne_3(int a[])
{
	int parne = 0;
	for (int i = 0; i < 5; i++)
	{
		parne += a[i] % 2 == 0;
	}
}

void Kv_rovnica(float a, float b, float c)
{
	float x1, x2, realPart, imaginarypart;
	float diskriminant = b * b - 4 * a * c;

	if (diskriminant > 0)
	{
		x1 = (-b + sqrt(diskriminant)) / 2;
		x2 = (-b - sqrt(diskriminant)) / 2;
		std::cout << "Roots are real and different\nx1 = " << x1 << "\nx2 = " << x2;
	}
	else if (diskriminant == 0)
	{
		x1 = x2 = -b / (2 * a);
		std::cout << "Roots are real and same\nx1 = " << x1 << "\nx2 = " << x2;
	}
	else if (diskriminant < 0)
	{
		realPart = -b / (2 * a);
		imaginarypart = sqrt(-diskriminant) / 2;
		x1 = realPart + imaginarypart;
		x2 = realPart - imaginarypart;
		std::cout << "Roots are complex and different\nx1 = " << x1 << "\nx2 =" << x2;
	}


}

// Prienik
void Prienik()
{
	std::vector<int> a = { 5, 10 };
	std::vector<int> b = { 8, 15 };

	if (b[0] < a[0])
	{
		PrienikPrehod(a[0], b[0]);
		PrienikPrehod(a[1], b[1]);
	}

	if (a[1] < b[0])
	{
		std::cout << "Nenachadza sa ziadny interval!\n";
	}
	else
	{
		std::cout << "Prienik je interval [" << b[0] << "," << (a[1] < b[1] ? a[1] : b[1]) << "]\n";
	}



}

void PrienikPrehod(int &x, int &y)
{
	int temp = x;
	x = y; 
	y = temp;  
}
// ---------------------------


// Podmieneny prikaz switch
void Tyzden_1(int a)
{
	switch (a)
	{
	case 1:
		std::cout << "Pondelok";
		break;
	case 2:
		std::cout << "Utorok";
		break;
	case 3:
		std::cout << "Streda";
		break;
	case 4:
		std::cout << "Stvrtok";
		break;
	case 5:
		std::cout << "Piatok";
		break;
	case 6:
		std::cout << "Sobota";
		break;
	case 7:
		std::cout << "Nedela";
		break;
	default:
		std::cout << "?";
		break;


	}
}

void Operacia_1(int a, int b)
{
	char c;
	std::cout << "s - sucet\nr - rozdiel\nn - sucin\np - podiel\n";
	std::cin >> c;

	switch (c)
	{
	case 's':
		std::cout << a + b;
		break;
	case 'r':
		std::cout << a - b;
		break;
	case 'n':
		std::cout << a * b;
		break;
	case 'p':
		std::cout << a / b;
		break;
	default:
		std::cout << "?";
		break;
	}
}

void Operacia_2(int a, int b)
{
	char c;
	std::cout << "s - sucet\nr - rozdiel\nn - sucin\np - podiel\n";
	std::cin >> c;

	switch (c)
	{
	case 's':
		std::cout << a + b;
		break;
	case 'r':
		std::cout << a - b;
		break;
	case 'n':
		std::cout << a * b;
		break;
	case 'p':
		if (b != 0)
			std::cout << a / b;
		else
			std::cout << "Delit cislo nulou?";
		break;
	default:
		std::cout << "?";
		break;
	}
}

void Vypis_retazca(std::string text)
{
	char c;
	std::cin >> c;

	switch (c)
	{
	case 'c':
		std::cout << text;
		break;
	case 'z':
		std::cout << text.erase(0, text.length() / 2);
		break;
	case 'k':
		std::cout << text.substr(text.length() / 2, std::string::npos);
		break;
	default:
		break;
	}

}


// Cykly
void Pozdrav_1()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Ahoj\n";
	}
}

void Slovo_2(std::string slovo, int krat)
{
	for (int i = 0; i < krat; i++)
	{
		std::cout << slovo;
	}
}

void Od_1_do_10()
{
	int a = 1;
	for (int i = 0; i < 10; i++)
	{
		std::cout << a++ << " ";
	}
}

void Od_a_do_b(int od, int max)
{

	for (od; od <= max; od++)
	{
		std::cout << od << " ";
	}
}

void Parne_4(std::vector<int>interval)
{
	int cislo = interval.front();
	for (int i = 0; i < interval.back() - interval.front(); i++)
	{
		if (++cislo % 2 == 0)
			std::cout << cislo << ' ';
	}
}

void Neparne_1(std::vector<int>interval)
{
	int cislo = interval.front();
	for (int i = 0; i < interval.back() - interval.front(); i++)
	{
		if (++cislo % 2 != 0)
			std::cout << cislo << ' ';
	}
}

void Parne_5(std::vector<int>interval)
{
	int cislo = interval.front();
	for (int i = 0; i < interval.back() - interval.front(); i++)
	{
		if (++cislo % 2 == 0)
			std::cout << cislo << ' ';
	}
}

void Neparne_2(std::vector<int>interval)
{
	int cislo = interval.front();
	for (int i = 0; i < interval.back() - interval.front(); i++)
	{
		if (++cislo % 2 != 0)
			std::cout << cislo << ' ';
	}
}

float Sucet_2(float a[], size_t sz)
{
	float vysledok = 0;
	for (unsigned int i = 0; i < sz; i++)
	{
		vysledok += a[i];
	}
	return vysledok;
}

int Sucet_parne(int a[], size_t sz)
{
	int vysledok = 0;
	for (unsigned int i = 0; i < sz; i++)
	{
		if (a[i] % 2 == 0)
			vysledok += a[i];
	}
	return vysledok;
}

int Suc_poc_neparne(int a[], size_t sz)
{
	int vysledok = 0;
	for (unsigned int i = 0; i < sz; i++)
	{
		if (a[i] % 2 != 0)
			vysledok += a[i];
	}
	return vysledok;
}

void Najvacsie_2(int a[], size_t sz)
{
	int najvacsieCislo = a[0];
	for (unsigned int i = 0; i < sz; i++)
	{
		if (a[i] > najvacsieCislo)
			najvacsieCislo = a[i];
	}

	std::cout << najvacsieCislo;
}

void Mocniny(int a[], size_t sz)
{
	for (unsigned int i = 0; i < sz; i++)
	{
		std::cout << pow(a[i], 2) << "\t" << pow(a[i], 3) << std::endl;
	}
}

int Sucet_int(int cisla[], std::vector<int>interval, size_t sz)
{
	int vysledok = 0;
	for (unsigned int i = 0; i < sz; i++)
	{
		if (cisla[i] >= interval.front() && cisla[i] <= interval.back())
			vysledok += cisla[i];
	}
	return vysledok;
}

void ASCII()
{
	for (int i = 33; i < 127; i++)
	{
		std::cout << i << " " << (char)i << std::endl;
	}
}

void Ciastocny_sucet()
{
	int input, vysledok = 0;
	std::cin >> input;
	vysledok += input;
	while (input != 0)
	{
		std::cin >> input;
		vysledok = (vysledok * 10) + input;
		std::cout << vysledok << std::endl;
	}
}

void Nah_cislo_1()
{
	int vysledok[100];
	srand(time_t(NULL));	// Ked nefunguje tak namiesto 'time_t' len 'time'

	for (int i = 0; i < 100; i++)
	{
		vysledok[i] = rand() % 101;
		std::cout << vysledok[i] << ' ';
	}

}

void Nah_cislo_2(std::vector<int>interval, int pocetRand)
{
	int vysledok[100];
	srand(time_t(NULL));	// Ked nefunguje tak namiesto 'time_t' len 'time' alebo opacne

	for (int i = 0; i < pocetRand; i++)
	{
		vysledok[i] = rand() % (interval[1] - interval[0] + 1) + interval[0];
		std::cout << vysledok[i] << ' ';
	}
}

void Sucet_NC(std::vector<int>interval, int pocetRand)
{
	int vysledok = 0;
	srand(time_t(NULL));	// Ked nefunguje tak namiesto 'time_t' len 'time' alebo opacne

	for (int i = 0; i < pocetRand; i++)
	{
		vysledok += rand() % (interval[1] - interval[0] + 1) + interval[0];

	}
	std::cout << vysledok;
}

void Tri_najvacsie(std::vector<int>interval)
{
	int cislo[5] = {};
	int najvacsie[3] = {};	// 0 najvacsie, 3 najmensie
	srand(time_t(NULL));	// Ked nefunguje tak namiesto 'time_t' len 'time' alebo opacne
	
	for (int i = 0; i < 5; i++)
	{
		cislo[i] = rand() % (interval[1] - interval[0] + 1) + interval[0];
		
		if (cislo[i] > najvacsie[0])
		{
			najvacsie[1] = najvacsie[0];
			najvacsie[2] = najvacsie[1];
			najvacsie[0] = cislo[i];
		}
		else if (cislo[i] > najvacsie[1])
		{
			najvacsie[2] = najvacsie[1];
			najvacsie[1] = cislo[i];
		}
		else if (cislo[i] > najvacsie[2])
		{
			najvacsie[2] = cislo[i];
		}

	}

	for (int i = 0; i < 3; i++)
	{
		std::cout << najvacsie[i] << ' ';
	}

}

float Faktorial(float pocet)
{
	float faktorial = 1;
	while (pocet--)
		faktorial *= pocet + 1;
	return faktorial;
}

void Sucet_K_1(int max)
{
	int input = 0, vysledok = 0;
	
	while (vysledok < max)
	{
		std::cin >> input;
		std::cout << std::endl;
		vysledok += input;
	}

}

void Sucet_K_2(std::vector<int>interval, int max)
{
	int vysledok = 0, pocetRand = 1;

	srand(time_t(NULL));

	while (vysledok < max)
	{
		vysledok += rand() % (interval[1] - interval[0] + 1) + interval[0];
		pocetRand++;
	}

	std::cout << "Pocet opakovani: " << pocetRand << "\nSucet: " << vysledok;

}

void Kreslenie_obdlznik(char c, int dlzka, int sirka)
{
	for (int i = 0; i < sirka; i++)
	{
		for (int j = 0; j < dlzka; j++)
		{
			std::cout << c;
		}
		std::cout << std::endl;
	}
}

void Kreslenie_trojuholnik(char c, int dlzka)
{
	int k = 0;
	for (int i = 0; i < dlzka; i++)
	{
		k++;
		for (int i = 0; i < k; i++)
		{
			std::cout << c;
		}
		std::cout << std::endl;
	}
}

void Kocka(int n)
{
	int hody[6] = {};
	srand(time_t(NULL));
	for (int i = 0; i < n; i++)
	{
		int hod = rand() % 6 + 1;
		hody[--hod]++;
	}
	

	int k = 0;
	
	for (int i = 0; i < 6; i++)
	{
		int percentage = hody[i] * 100 / n;
		std::cout << ++k << ". cislo padlo (krat): " << hody[i] << " | " << percentage << "%" << std::endl;
	}

}

void Nahodna_chodza(int startPosX, int startPosY, int n)
{
	int x, y, rozdielX, rozdielY;
	x = startPosX;
	y = startPosY;
	rozdielX = startPosX;
	rozdielY = startPosY;
	


	srand(time(NULL));
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		int plusAleboMinus = (rand() % 2 == 0 ? 1 : -1);
		rand() % 2 ? x += plusAleboMinus : y += plusAleboMinus;
		rozdielY += y;
		std::cout << ++k << ". krok - pozicia [" << x << ", " << y << "]\n";

	}
	
	if (rozdielX < x)
		rozdielX = x - rozdielX;
	else if (rozdielX > x)
		rozdielX = rozdielX - x;


	std::cout << "Vzdialenost: [" << rozdielX << ", " << rozdielY << "]";

}






void OdKonca()
{
	std::string text;
	int len;

	std::cout << "Zadajte vetu: ";
	std::cin >> text;
	len = text.length();

	for (int i = 0; i < len / 2; i++)
	{
		std::swap(text[i], text[len - i - 1]);
	}
	std::cout << text;

}

bool Palindrome(std::string input)
{
	for (unsigned int i = 0; i < input.size(); i++)
	{
		return input[i] != input[(input.size()) - i - 1] ? false : true;
	}
}

int Parne(int inval[5])
{
	int retval = 0;
	for (int i = 0; i < 5; i++)
	{
		retval += inval[i] % 2 == 0 ? 1 : 0;
	}
	return retval;
}

float AritPriemer(float a, float b)
{
	return (a + b) / 2;
}

void Sifrovanie(char text[], char key[], bool bEncrypt, bool bSetMemoryToModifiedValue) // Error: Pri decl. funkcii
{
	unsigned int keyLen = (unsigned)strlen(key);
	unsigned int txtLen = (unsigned)strlen(text);
	if (bEncrypt)
	{
		if (txtLen < keyLen)
		{
			std::cout << "Encryption key too long!\nPlease enter a key smaller than the text.";
			std::cout << "TEXT LENGTH: " << txtLen << " | KEY LENGTH: " << keyLen;
			return;
		}
		std::cout << "\n\nDefault Text: " << text;
		unsigned int j = 0;
		for (unsigned int i = 0; i < txtLen; i++)
		{
			if (j == keyLen) 
			{
				j = 0;
			}
			//text[i] += static_cast<int>(key[j]);
			int offset = (text[i] > 90 ? 97 : 65);
			text[i] = (char)(offset + (((text[i] + 1) - offset) % 26));	
			j++;

		}

		std::cout << "\nEncrypted text: " << text;

		if (bSetMemoryToModifiedValue)
		{
			for (unsigned int i = 0; i < txtLen; i++)
			{
				memset(inText, text[i], (unsigned)strlen(text));
			}
			for (unsigned int i = 0; i < keyLen; i++)
			{
				memset(inKey, key[i], (unsigned)strlen(key));
			}
		}
		
		return;

	}
	else // DECRYPTION
	{
		if (txtLen < keyLen)
		{
			std::cout << "Encryption key too long!\nPlease enter a key smaller than the text.";
			std::cout << "TEXT LENGTH: " << txtLen << " | KEY LENGTH: " << keyLen;
			return;
		}

		std::cout << "\nEncrypted Text: " << text;
		unsigned int j = 0;
		for (unsigned int i = 0; i < txtLen; i++)
		{
			if (j == keyLen)
			{
				j = 0;
			}
			int offset = (text[i] > 90 ? 97 : 65);
			text[i] = (char)(offset - (((text[i] - 1) + offset) % 26));

		}

		std::cout << "\nDecrypted Text: " << text;

		if (bSetMemoryToModifiedValue)
		{
			for (unsigned int i = 0; i < txtLen; i++)
			{
				memset(inText, text[i], (unsigned)strlen(text));
			}
			for (unsigned int i = 0; i < keyLen; i++)
			{
				memset(inKey, key[i], (unsigned)strlen(key));
			}
		}

		return;

	}


	return;

}