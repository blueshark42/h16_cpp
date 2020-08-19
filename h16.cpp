#define _USE_MATH_DEFINES

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>
#include "time.h"
#include "math.h"
#include <array>

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
float Priemer(int, int, int, int, int);
double Radian(double);
double Stupen(double);
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
void Sucet_pocet_pt(const std::vector<int> &);
int Priemer_pt(const std::vector<int> &);
int Sucet_new(int, int);
float Podiel_new(float, float);
void Max_new(const std::vector<float> &);

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
void Poradie(int[], unsigned);
void Des_cast_2(float);
void Najvacsie(const int[]);
void Najmensie(const int[]);
void Kladne_3(const int[]);
void Parne_3(const int[]);
void Kv_rovnica(float, float, float);
void Prienik();
void PrienikPrehod(int &x, int &y);

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
void Parne_4(std::vector < int > );
void Neparne_1(std::vector < int > );
void Parne_5(std::vector < int > );
void Neparne_2(std::vector < int > );
float Sucet_2(const float[], unsigned);
int Sucet_parne(int[], unsigned);
int Suc_poc_neparne(int[], unsigned);
void Najvacsie_2(int[], unsigned);
void Mocniny(int[], unsigned);
int Sucet_int(int[], std::vector<int>, unsigned);
void ASCII();    // 33, 126
void Ciastocny_sucet();
void Nah_cislo_1();
void Nah_cislo_2(std::vector<int>, int);
void Sucet_NC(std::vector<int>, int);
void Tri_najvacsie(std::vector < int > );
float Faktorial(float);
void Sucet_K_1(int);
void Sucet_K_2(std::vector<int>, int);
void Kreslenie_obdlznik(char, int, int);
void Kreslenie_trojuholnik(char, int);
void Kocka(int);
void Nahodna_chodza(int, int, int);
void Stretnutie(int);
void Najst_pociatok(int, int);
void Cestovanie(int, int, int, int);
void Preteky();

bool Palindrome(std::string input);
int Parne(const int inval[5]);
float AritPriemer(float a, float b);

// Jednoduche zadania na vystupy
int main() {
  // Run functions here


  return 0;
}

void Vypis_1() {
  std::cout << "Programujeme v jazyku C++\nToto, je program v jazyku C++\n" << 598;
}

void Vypis_2() {
  std::cout << "Jan Novy\nBezrucova 26\n945 45 Bratislava\n";
}

void Vypis_3() {
  std::cout << "Jan Novy\nI.B\n56\nMAT - 2, SJL - 3, PRO/API - 1\n";
}

void Udaje_ziak() {
  int vek, vyska, vaha;
  std::cout << "Zadajte Vas vek, vysku a vahu:";
  std::cin >> vek >> vyska >> vaha;
  std::cout << "Mate " << vek << " rokov\nVasa vyska je " << vyska << " cm\nVasa hmotnost je " << vaha << " kg\n";
}

void Automobil() {
  int rokVyroby, najazdeneKm, spotreba;
  std::cout << "Zadajte rok vyroby, najazdene km a spotrebu:";
  std::cin >> rokVyroby >> najazdeneKm >> spotreba;
  std::cout << "Rok vyroby: " << rokVyroby << "\nPocet najazdenych km: " << najazdeneKm << "Spotreba: " << spotreba
			<< " l/100km";
}

void Trieda() {
  int pocetZiakov, vymeskaneH, ziakVyzn, ziakDobre, ziakProsp, ziakNepros;
  std::cout
	  << "Zadajte pocet ziakov, vymeskane hodiny, pocet ziakov ktori prospeli s vyznamenanim, prospeli velmi dobre, prospeli a neprospeli: ";
  std::cin >> pocetZiakov >> vymeskaneH >> ziakVyzn >> ziakDobre >> ziakProsp >> ziakNepros;
  std::cout << "Pocet Ziakov: " << pocetZiakov << "\nVymeskane Hodiny: " << vymeskaneH << "\nZ. Vyznamenanim: "
			<< ziakVyzn << "\nZ. Velmi Dobre: " << ziakDobre << "\nZ. Prospel: " << ziakProsp
			<< "\nZ. neprospel: " << ziakNepros;

}

// Jednoduche zadania
int Sucet(const int a, const int b) {
  return a + b;
}

int Rozdiel(const int a, const int b) {
  return a - b;
}

int Sucin(const int a, const int b) {
  return a * b;
}

float Objem_kv(const float a, const float b, const float c) {
  return a * b * c;
}

float Obsah_ob(const float a, const float b) {
  return a * b;
}

float Obsah_kv(const float a, const float b, const float c) {
  return 2 * (a * b + b * c + a * c);
}

float Tovar(const int ks, const float cena) {
  return ks * cena;
}

float Mzda(const int odpr_hod, const float mzda) {
  return odpr_hod * mzda;
}

float Kurz_1(const int koruna) {
  const float kurz = 0.0370f;
  return koruna * kurz;
}

float Sila(const float hmotnost, const float zrychlenie) {
  return hmotnost * 9.8f * zrychlenie;    // 1kg = 9.8N Ale nechapem co tu chcu
}

float Hybnost(const float hmotnost, const float rychlost) {
  return hmotnost * rychlost;
}

float Draha_1(const float rychlost, const float cas) {
  // Predpokladame rychlost je v m/s
  return rychlost * cas;
}

float Draha_2(const float zrychlenie, const float cas) {
  return 1 / 2 * (zrychlenie * cas) * cas;
}

void Zamena(char a, char b) {
  std::cout << "Pred premenou: a = " << a << "\nb = " << b;

  const char temp = a;
  a = b;
  b = temp;

  std::cout << "Po premene: a = " << a << "\nb = " << b;
}

// Zlozitejsie Vypocty
float Podiel_1(const float a, const float b) {
  return a / b;
}

float Dlzka_kr(const float polomer) {
  const float pi = 3.1415f;
  return 2 * pi * polomer;
}

float Obsah_kr(const float polomer) {
  const float pi = 3.1415f;
  return pi * polomer * polomer;
}

float Objem_va(const float polomer, const float vyska) {
  const float pi = 3.1415f;
  return pi * polomer * polomer * vyska;
}

float Objem_gu(const float polomer) {
  const float pi = 3.1415f;
  return 4 / 3 * pi * polomer * polomer * polomer;
}

int Zvysok(const int a, const int b) {
  return a % b;
}

int Cislica(const int a) {
  return a % 10;
}

void Podiel_2(const float a, const float b) {
  std::cout << int(a / b) << std::endl;
  std::cout << int(a) % int(b);
}

float Kurz_2(const int koruna) {
  const float kurz = 30.0f;
  return koruna * kurz;
}

float C_na_F(const float c) {
  return (c * 9 / 5) + 32;
}

float F_na_C(const float f) {
  return (f - 32) * 5 / 9;
}

float Spotreba(const float km, const float spotreba) {
  return spotreba / km * 100;
}

float Priemer(const int a, const int b, const int c, const int d, const int e) {
  return float(a + b + c + d + e) / 5;
  // or
  // for(auto a : i)
}

double Radian(const double stupen) {
  // 1deg * PI / 180
  return stupen * M_PI / 180;
}

double Stupen(const double radian) {
  // 1rad * 180 / PI
  return radian * 180 / M_PI;
}

float BMI(const float hmotnost, const float vyska) {
  return hmotnost / vyska;
}

// Matematicke funkcie
float Odmocnina(const float a) {
  return sqrt(a);
}

float Polomer(const float plocha) {
  const float pi = 3.1415f;
  return pi / plocha * 2;
}

float Mocnina(const float a) {
  return a*a;
  // or
  // return pow(a, 2);
}

float Plot(const float plocha, const float cena) {
  return sqrt(plocha) * 4 * cena;
}

float Pad(const float vyska, const float zrych = 9.81f) {
  return 1 / 2 * zrych * sqrt(2 * vyska / zrych);
}

float Sinus(const float uhol) {
  const float pi = 3.1415f;
  return sin(uhol * pi / 180);
}

float Tangens(const float uhol) {
  const float pi = 3.1415f;
  return tan(uhol * pi / 180);
}

float Kladne(const float a) {
  // fabs - float abs; abs - int abs
  return fabs(a);
}

// Znakove a retazcove premenne
char Znak(const char a) {
  return a;
}

void Znaky_1(const char a) {
  for (int i = 0; i < 3; i++) {
	std::cout << a;
  }
}

void Slovo(const std::string a) {
  std::cout << a;
}

void Vysledky() {
  std::string meno, priezvisko, adresa;
  std::string predmet[5];
  int znamka[5];

  std::cout << "Zadajte svoje meno, priezvisko, adresu, skratky piatich predmetov a znamky z uvedenych predmetov:";
  std::cin >> meno >> priezvisko >> adresa;

  for (int i = 0; i < 5; i++) {
	std::cin >> predmet[i] >> znamka[i];
  }

  std::cout << meno << " " << priezvisko << std::endl << adresa;

  for (int i = 0; i < 5; i++) {
	std::cout << predmet[i] << " " << znamka[i];
  }
}

// FIRMY
class Firma {
 private:
  std::string nazov_;
  std::string adresa_;
  int rok_zalozenia_;
  int obrat_;
 public:
  Firma(const std::string nazov, const std::string adresa, const int rok_zalozenia, const int obrat) {
	nazov_ = nazov;
	adresa_ = adresa;
	rok_zalozenia_ = rok_zalozenia;
	obrat_ = obrat;
  }

  void VypisUdaje() {
	std::cout << nazov_ << std::endl << adresa_ << std::endl << rok_zalozenia_ << std::endl
			  << obrat_ << std::endl << 2019 - rok_zalozenia_;
  }

};

void Firmy() {
  Firma *toffifee = new Firma("Toffifee", "Halova Strasse 16", 1957, 6); // pointer
  toffifee->VypisUdaje();
  delete toffifee; // stop memory leak
}
// ----------------------

// Automobil
class Vozidlo {
 private:
  std::string nazov_, farba_;
  int najazdene_km_;
  float spotreba_;

 public:
  Vozidlo(const std::string nazov, const std::string farba, const int najazdeneKm, const float spotreba) {
	nazov_ = nazov;
	farba_ = farba;
	najazdene_km_ = najazdeneKm;
	spotreba_ = spotreba;
  }

  void VypisUdaje() {
	std::cout << nazov_ << "\t" << farba_ << "\t" << najazdene_km_ << "\t" << spotreba_ << std::endl;
  }

  int GetNajazdene() {
	return najazdene_km_;
  }

  float GetSpotreba() {
	return spotreba_;
  }
};

void Automobil_2() {

  Vozidlo *bmw = new Vozidlo("BMW", "Cierna", 12000, 8.5f);
  Vozidlo *opel = new Vozidlo("Opel", "Cervena", 89000, 6.3f);
  Vozidlo *mazda = new Vozidlo("Mazda", "Modra", 110000, 7.6f);
  Vozidlo *peugeot = new Vozidlo("Peugeot", "Zelena", 100000, 8.7f);

  std::cout << "Nazov\tFarba\tNaj.\tSpotreba na 100km\n";
  bmw->VypisUdaje();
  opel->VypisUdaje();
  mazda->VypisUdaje();
  peugeot->VypisUdaje();
  int priemerKm = (bmw->GetNajazdene() + opel->GetNajazdene() + mazda->GetNajazdene() + peugeot->GetNajazdene()) / 4;
  float
	  priemerSpotreba = (bmw->GetSpotreba() + opel->GetSpotreba() + mazda->GetSpotreba() + peugeot->GetSpotreba()) / 4;
  std::cout << "\tPRIEMER: " << priemerKm << "\t" << priemerSpotreba;

  delete bmw;
  delete opel;
  delete mazda;
  delete peugeot;
}
// ----------------------

void Zmaz_cast_1(std::string text, const int poz, const int pocet) {
  std::cout << text.erase(poz, pocet);
}

void Zmaz_cast_2(std::string text) {
  if (text.length() % 2 == 0)
	std::cout << text.erase(text.length() / 2, text.length() / 2);
  else
	std::cout << text.erase(0, (text.length() + 1) / 2);
}

void Zmaz_cast_3(std::string text) {
  if (text.length() % 2 == 0) {
	std::cout << text.erase(text.length() / 2, text.length() / 2);
  } else {
	std::cout << text.erase((text.length() + 1) / 2, text.length() / 2);
  }
}

void Dopln_cast(std::string text, std::string dopln_text, const int poz) {
  text.insert(text.begin() + poz, dopln_text.begin(), dopln_text.end());
  std::cout << text;
}

std::string Vymena(std::string text) {
  reverse(text.begin(), text.end());
  return text;
}

// Ukazovatele a dynamicky pridelovana pamat
int Sucet_pt(int a, int b) {
  int *c = &a;
  int *d = &b;
  return *c + *d;
}

float Podiel_pt(float a, float b) {
  float *c = &a;
  float *d = &b;
  return *c / *d;
}

void Sucet_pocet_pt(const std::vector<int> &a) {
  // k - kladne; z - zaporne

  int *ka = nullptr;
  int *za = nullptr;

  int *sk = nullptr;
  int *sz = nullptr;

  for (auto i : a) {
	if (i > 0 || i != 0) {
	  ka += i;
	  sk++;
	} else if (i < 0 || i != 0) {
	  za += i;
	  sz++;
	}
  }

  std::cout << "Pocet kladnych: " << sk << std::endl;
  std::cout << "Pocet zapornych: " << sz << std::endl;
  std::cout << "Sucet kladnych: " << ka << std::endl;
  std::cout << "Sucet zapornych: " << za << std::endl;

}

/* unik pamate -> memory leak
 * delete - aby sme uvolnili pamat, ktora uz nie je potrebna
 * unik pamate znizuje vykon pocitaca znizenim mnozstva dostupnej pamate
 * v najhorsom pripade kvoli uniku moze aplikacia zlyhat alebo cast zariadenia prestane spravne fungovat
 */
int Priemer_pt(const std::vector<int> &i) {
  int *s = nullptr;
  for (auto a : i) {
	s += a;
  }
  return static_cast<unsigned>(*s) / i.size();
}

int Sucet_new(const int a, const int b) {
  const auto c = new int;
  const auto d = new int;

  *c = a;
  *d = b;

  const int sucet = *c + *d;

  delete c;
  delete d;
  return sucet;
}

float Podiel_new(const float a, const float b) {
  const auto c = new float;
  const auto d = new float;

  *c = a;
  *d = b;

  const float podiel = *c / *d;

  delete c;
  delete d;
  return podiel;
}

void Max_new(const std::vector<float> &i) {
  // Sucet
  float *k = new float;
  float *z = new float;

  // Pocet
  int *ka = new int;
  int *za = new int;

  for (auto b : i) {
	if (b > 0 || b != 0) {
	  *k += b;
	  ka++;
	} else if (b < 0 || b != 0) {
	  *z += b;
	  za++;
	}
  }

  std::cout << "Pocet kladnych: " << ka << std::endl;
  std::cout << "Pocet kladnych: " << za << std::endl;
  std::cout << "Sucet kladnych: " << k << std::endl;
  std::cout << "Sucet zapornych: " << z << std::endl;
}

// Podmieneny prikaz if else
void Kladne_1a(const int a) {
  std::cout << (a > 0 ? "Zadali ste kladne cislo" : nullptr);
}

void Kladne_1b(const int a) {
  if (a > 0)
	std::cout << "Zadali ste kladne cislo;\n";
  else if (a == 0)
	std::cout << "Zadali ste nulu";
  else
	std::cout << "Zadali ste zaporne cislo";
}

void Parne_1(const int a) {
  std::cout << (a % 2 == 0 ? "Zadali ste parne cislo" : nullptr);
}

void Parne_2(const int a) {
  std::cout << (a % 2 == 0 ? "Zadali ste parne cislo" : "Zadali ste neparne cislo");
}

void Heslo(const std::string zadane_heslo, const std::string heslo) {
  std::cout << (zadane_heslo.compare(heslo) == 0 ? "Zadali ste spravne heslo" : "Zadali ste nespravne heslo");
}

void Interval(std::vector<int> interval, int zadane) {
  std::cout << ((interval[0] <= zadane && interval[1] >= zadane) == true
	  ? "Zadane cislo je z intervalu" : "Zadane cislo nie je z intevalu");
}

bool Delitelnost(const int a, const int b) {
  return a % b == 0;
}

int Vacsie(int a, int b) {
  return a > b ? a : b;
}

bool Del_tromi(const int a) {
  return a % 3 == 0;
}

bool Parne_2(const int a, const int b) {
  return (a + b) % 2 == 0;
}

bool Rovnake(const std::string a, const std::string b) {
  return a == b;
}

bool Kladne_2(const int a, const int b) {
  return (a * b) >= 0;
}

void Interval_2(std::vector<int> interval, const int a) {
  const int vzdialenost = a > interval[1] ? a - interval[1] : -(a - interval[0]);

  const bool x = interval[0] <= a && interval[1] >= a;

  if (x)
	std::cout << "Zadane cislo " << a << " je z intervalu <" << interval[0] << ", " << interval[1] << ">";
  else
	std::cout << "Zadane cislo " << a << " nie je z intervalu <" << interval[0] << ", " << interval[1]
			  << ">\nJeho vzdialenost od intervalu je " << vzdialenost;
}

void Poradie(int a[], const unsigned sz) {
  std::sort(a, a + sz);
  for (unsigned int i = 0; i < sz; ++i) {
	std::cout << a[i] << " ";
  }
}

void Des_cast_2(const float a) {

  std::cout << a - int(a);
}

void Najvacsie(const int a[]) {
  int najvacsie_cislo = a[0];

  for (int i = 0; i < 5; i++) {
	if (a[i] > najvacsie_cislo)
	  najvacsie_cislo = a[i];
  }

  std::cout << najvacsie_cislo;
}

void Najmensie(const int a[]) {
  int najmensie = a[0];

  for (int i = 0; i < 7; i++) {
	if (najmensie < a[i])
	  najmensie = a[i];
  }

  std::cout << najmensie;
}

void Kladne_3(const int a[]) {
  int kladne = 0;

  for (int i = 0; i < 5; i++) {
	kladne += a[i] >= 0 ? 1 : 0;
  }
  std::cout << kladne;
}

void Parne_3(const int a[]) {
  int parne = 0;

  for (int i = 0; i < 5; i++) {
	parne += a[i] % 2 == 0;
  }
  std::cout << parne;
}

void Kv_rovnica(const float a, const float b, const float c) {
  float x1, x2;

  const float diskriminant = b * b - 4 * a * c;

  if (diskriminant > 0) {
	x1 = (-b + sqrt(diskriminant)) / 2;
	x2 = (-b - sqrt(diskriminant)) / 2;
	std::cout << "Roots are real and different\nx1 = " << x1 << "\nx2 = " << x2;
  } else if (diskriminant == 0) {
	x1 = x2 = -b / (2 * a);
	std::cout << "Roots are real and same\nx1 = " << x1 << "\nx2 = " << x2;
  } else if (diskriminant < 0) {
	const float real_part = -b / (2 * a);
	const float imaginary_part = sqrt(-diskriminant) / 2;
	x1 = real_part + imaginary_part;
	x2 = real_part - imaginary_part;
	std::cout << "Roots are complex and different\nx1 = " << x1 << "\nx2 =" << x2;
  }

}

// Prienik
void Prienik() {
  std::vector<int> a = {5, 10};
  std::vector<int> b = {8, 15};

  if (b[0] < a[0]) {
	PrienikPrehod(a[0], b[0]);
	PrienikPrehod(a[1], b[1]);
  }

  if (a[1] < b[0])
	std::cout << "Nenachadza sa ziadny interval!\n";
  else
	std::cout << "Prienik je interval [" << b[0] << "," << (a[1] < b[1] ? a[1] : b[1]) << "]\n";
}

void PrienikPrehod(int &x, int &y) {
  const int temp = x;
  x = y;
  y = temp;
}
// ---------------------------


// Podmieneny prikaz switch
void Tyzden_1(const int a) {
  switch (a) {
	case 1: std::cout << "Pondelok";
	  break;
	case 2: std::cout << "Utorok";
	  break;
	case 3: std::cout << "Streda";
	  break;
	case 4: std::cout << "Stvrtok";
	  break;
	case 5: std::cout << "Piatok";
	  break;
	case 6: std::cout << "Sobota";
	  break;
	case 7: std::cout << "Nedela";
	  break;
	default: std::cout << "?";
	  break;
  }
}

void Operacia_1(const int a, const int b) {
  char c;
  std::cout << "s - sucet\nr - rozdiel\nn - sucin\np - podiel\n";
  std::cin >> c;

  switch (c) {
	case 's': std::cout << a + b;
	  break;
	case 'r': std::cout << a - b;
	  break;
	case 'n': std::cout << a * b;
	  break;
	case 'p': std::cout << a / b;
	  break;
	default: std::cout << "?";
	  break;
  }
}

void Operacia_2(const int a, const int b) {
  char c;
  std::cout << "s - sucet\nr - rozdiel\nn - sucin\np - podiel\n";
  std::cin >> c;

  switch (c) {
	case 's': std::cout << a + b;
	  break;
	case 'r': std::cout << a - b;
	  break;
	case 'n': std::cout << a * b;
	  break;
	case 'p':
	  if (b != 0)
		std::cout << a / b;
	  else
		std::cout << "Delit cislo nulou?";
	  break;
	default: std::cout << "?";
	  break;
  }
}

void Vypis_retazca(std::string text) {
  char c;
  std::cin >> c;

  switch (c) {
	case 'c': std::cout << text;
	  break;
	case 'z': std::cout << text.erase(0, text.length() / 2);
	  break;
	case 'k': std::cout << text.substr(text.length() / 2, std::string::npos);
	  break;
	default: break;
  }

}

// Cykly
void Pozdrav_1() {
  for (int i = 0; i < 10; i++)
	std::cout << "Ahoj\n";
}

void Slovo_2(const std::string slovo, const int krat) {
  for (int i = 0; i < krat; i++)
	std::cout << slovo;
}

void Od_1_do_10() {
  int a = 1;
  for (int i = 0; i < 10; i++)
	std::cout << a++ << " ";
}

void Od_a_do_b(int od, const int max) {
  for (; od <= max; od++)
	std::cout << od << " ";
}

void Parne_4(std::vector<int> interval) {
  int cislo = interval.front();
  for (int i = 0; i < interval.back() - interval.front(); i++)
	if (++cislo % 2 == 0)
	  std::cout << cislo << ' ';

}

void Neparne_1(std::vector<int> interval) {
  int cislo = interval.front();
  for (int i = 0; i < interval.back() - interval.front(); i++)
	if (++cislo % 2 != 0)
	  std::cout << cislo << ' ';
}

void Parne_5(std::vector<int> interval) {
  int cislo = interval.front();
  for (int i = 0; i < interval.back() - interval.front(); i++)
	if (++cislo % 2 == 0)
	  std::cout << cislo << ' ';
}

void Neparne_2(std::vector<int> interval) {
  int cislo = interval.front();
  for (int i = 0; i < interval.back() - interval.front(); i++)
	if (++cislo % 2 != 0)
	  std::cout << cislo << ' ';
}

float Sucet_2(float a[], const unsigned sz) {
  float vysledok = 0;
  for (unsigned int i = 0; i < sz; i++)
	vysledok += a[i];
  return vysledok;
}

int Sucet_parne(int a[], const unsigned sz) {
  int vysledok = 0;
  for (unsigned int i = 0; i < sz; i++)
	if (a[i] % 2 == 0)
	  vysledok += a[i];
  return vysledok;
}

int Suc_poc_neparne(int a[], unsigned sz) {
  int vysledok = 0;
  for (unsigned int i = 0; i < sz; i++) {
	if (a[i] % 2 != 0)
	  vysledok += a[i];
  }
  return vysledok;
}

void Najvacsie_2(int a[], const unsigned sz) {
  int najvacsieCislo = a[0];
  for (unsigned int i = 0; i < sz; i++)
	if (a[i] > najvacsieCislo)
	  najvacsieCislo = a[i];

  std::cout << najvacsieCislo;
}

void Mocniny(int a[], const unsigned sz) {
  for (unsigned int i = 0; i < sz; i++)
	std::cout << pow(a[i], 2) << "\t" << pow(a[i], 3) << std::endl;
}

int Sucet_int(int cisla[], std::vector<int> interval, const unsigned sz) {
  int vysledok = 0;
  for (unsigned int i = 0; i < sz; i++)
	if (cisla[i] >= interval.front() && cisla[i] <= interval.back())
	  vysledok += cisla[i];
  return vysledok;
}

void ASCII() {
  for (int i = 33; i < 127; i++) {
	std::cout << i << " " << char(i) << std::endl;
  }
}

void Ciastocny_sucet() {
  int input, vysledok = 0;

  std::cin >> input;
  vysledok += input;

  while (input != 0) {
	std::cin >> input;
	vysledok = (vysledok * 10) + input;
	std::cout << vysledok << std::endl;
  }
}

void Nah_cislo_1() {
  int vysledok[100];
  srand(time_t(NULL));    // Ked nefunguje tak prepis 'time_t' na 'time'

  for (int i = 0; i < 100; i++) {
	vysledok[i] = rand() % 101;
	std::cout << vysledok[i] << ' ';
  }

}

void Nah_cislo_2(std::vector<int> interval, const int pocet_rand) {
  int vysledok[100];
  srand(time_t(NULL));

  for (int i = 0; i < pocet_rand; i++) {
	vysledok[i] = rand() % (interval[1] - interval[0] + 1) + interval[0];
	std::cout << vysledok[i] << ' ';
  }
}

void Sucet_NC(std::vector<int> interval, const int pocet_rand) {
  int vysledok = 0;
  srand(time_t(NULL));

  for (int i = 0; i < pocet_rand; i++) {
	vysledok += rand() % (interval[1] - interval[0] + 1) + interval[0];

  }
  std::cout << vysledok;
}

void Tri_najvacsie(std::vector<int> interval) {
  int cislo[5] = {};
  int najvacsie[3] = {};    // 0 najvacsie, 3 najmensie
  srand(time_t(NULL));

  for (int i = 0; i < 5; i++) {
	cislo[i] = rand() % (interval[1] - interval[0] + 1) + interval[0];

	if (cislo[i] > najvacsie[0]) {
	  najvacsie[1] = najvacsie[0];
	  najvacsie[2] = najvacsie[1];
	  najvacsie[0] = cislo[i];
	} else if (cislo[i] > najvacsie[1]) {
	  najvacsie[2] = najvacsie[1];
	  najvacsie[1] = cislo[i];
	} else if (cislo[i] > najvacsie[2]) {
	  najvacsie[2] = cislo[i];
	}

  }

  for (int i : najvacsie)
	std::cout << i << ' ';
}

float Faktorial(float pocet) {
  float faktorial = 1;

  while (pocet--)
	faktorial *= pocet + 1;
  return faktorial;
}

void Sucet_K_1(const int max) {
  int input = 0, vysledok = 0;

  while (vysledok < max) {
	std::cin >> input;
	std::cout << std::endl;
	vysledok += input;
  }
}

void Sucet_K_2(std::vector<int> interval, const int max) {
  int vysledok = 0, pocetRand = 1;

  srand(time_t(NULL));

  while (vysledok < max) {
	vysledok += rand() % (interval[1] - interval[0] + 1) + interval[0];
	pocetRand++;
  }

  std::cout << "Pocet opakovani: " << pocetRand << "\nSucet: " << vysledok;
}

void Kreslenie_obdlznik(const char c, const int dlzka, const int sirka) {
  for (int i = 0; i < sirka * dlzka; i++) {
	std::cout << c << (i % dlzka == 0 ? "\n" : "");
  }
}

void Kreslenie_trojuholnik(const char c, const int dlzka) {
  int k = 0;
  for (int i = 0; i < dlzka; i++) {
	k++;
	for (int i = 0; i < k; i++)
	  std::cout << c;
	std::cout << std::endl;
  }
}

void Kocka(const int n) {
  int hody[6] = {};
  srand(time_t(NULL));
  for (int i = 0; i < n; i++) {
	int hod = rand() % 6 + 1;
	hody[--hod]++;
  }

  int k = 0;

  for (int i : hody) {
	const int percentage = i * 100 / n;
	std::cout << ++k << ". cislo padlo (krat): " << i << " | " << percentage << "%" << std::endl;
  }

}

void Nahodna_chodza(const int start_pos_x, const int start_pos_y, const int n) {
  int x = start_pos_x;
  int y = start_pos_y;
  int rozdiel_x = start_pos_x;
  int rozdiel_y = start_pos_y;

  srand(time(nullptr));
  int k = 0;
  for (int i = 0; i < n; i++) {
	const int plus_alebo_minus = (rand() % 2 == 0 ? 1 : -1);
	rand() % 2 ? x += plus_alebo_minus : y += plus_alebo_minus;
	rozdiel_y += y;
	std::cout << ++k << ". krok - pozicia [" << x << ", " << y << "]\n";

  }

  if (rozdiel_x < x)
	rozdiel_x = x - rozdiel_x;
  else if (rozdiel_x > x)
	rozdiel_x = rozdiel_x - x;

  std::cout << "Vzdialenost: [" << rozdiel_x << ", " << rozdiel_y << "]";
}

void Stretnutie(int kroky) {
  srand(time(nullptr));
  int stretnutie = -1;
  int vzdialenost = -1;

  int bob = rand() % 20 + 1;
  int alica = rand() % 20 + 1;

  for (int i = 0; i < kroky; i++) {
	int o = rand() % 2 ? 1 : -1;
	bob += o;
	o = rand() % 2 ? 1 : -1;
	alica += o;

	if (bob == alica)
	  stretnutie = bob;
	vzdialenost = abs(bob - alica);
  }

  if (stretnutie != -1)
	std::cout << stretnutie;
  else
	std::cout << vzdialenost;
}

void Najst_pociatok(int x, int y) {
  while (x != 0 && y != 0) {
	if (x > 0)
	  x--;
	else if (x < 0)
	  x++;
	else if (y > 0)
	  y--;
	else if (y < 0)
	  y++;
	std::cout << x << " " << y << std::endl;
  }
}

// startx, starty, endx, endy
void Cestovanie(int sx, int sy, const int ex, const int ey) {
  while (sx != ex && sy != ey) {
	if (sx > ex)
	  sx--;
	else if (sx < ex)
	  sx++;
	else if (sy > ey)
	  sy--;
	else if (sy < ey)
	  sy++;
	std::cout << sx << " " << sy << std::endl;
  }
}

// PRETEKY
struct Sutaziaci {
  std::string meno = "";
  int x = 0;
  int y = 0;
  int poz = 0;
};

void Preteky() {
  int ciel_x, ciel_y;
  int d = 0;
  Sutaziaci sut[10];
  srand(time_t(NULL));

  std::cout << "Zadajte meno sutaziacich" << std::endl;

  for (int i = 0; i < 10; i++)    // Meno
  {
	std::cout << "Sutaziaci #" << i + 1 << ": ";
	std::cin >> sut[i].meno;
	std::cout << std::endl;
  }

  for (auto &i : sut) // Pozicia
  {
	i.x = rand() % 100 + 1; // 1 - 100
	i.y = rand() % 100 + 1;
  }

  std::cout << "Zadajte kam sa maju sutaziaci sa dostat (X, Y)" << std::endl;
  std::cin >> ciel_x >> ciel_y;

  while (d < 10) {
	for (auto &i : sut) {
	  if (i.y == ciel_y && i.x == ciel_x && i.poz == 0) {
		i.poz = ++d;
		break;
	  }

	  if (i.y != ciel_y) {
		if (i.y < ciel_y)
		  i.y++;

		else if (i.y > ciel_y)
		  i.y--;
	  }

	  if (i.x != ciel_x) {
		if (i.x < ciel_x)
		  i.x++;

		else if (i.x > ciel_x)
		  i.x--;
	  }
	}
  }

  for (int i = 1; i <= 10; ++i) {
	for (auto &j : sut) {
	  if (j.poz == i) {
		std::cout << std::endl << i << ". Sutaziaci -> " << j.meno << std::endl;
		break;
	  }
	}
  }
}

void OdKonca() {
  std::string text;

  std::cout << "Zadajte vetu: ";
  std::cin >> text;
  int len = text.length();

  for (int i = 0; i < len / 2; i++)
	std::swap(text[i], text[len - i - 1]);
  std::cout << text;

}

bool Palindrome(std::string input) {
  for (unsigned int i = 0; i < input.size(); i++)
	return input[i] != input[(input.size()) - i - 1] ? false : true;
}

int Parne(const int inval[5]) {
  int retval = 0;
  for (int i = 0; i < 5; i++)
	retval += inval[i] % 2 == 0 ? 1 : 0;
  return retval;
}

float AritPriemer(const float a, const float b) {
  return (a + b) / 2.0f;
}

