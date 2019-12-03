/*
* Ulohy:
* Spotreba, OdKonca, Prienik, 155 Palindrom, 82 Parne, 184 A_Priemer, 193 Zapis_Retazcov, 154. Sifrovanie_3 
* 
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>
#include <time.h>

float Spotreba();								
void OdKonca();

void Prienik();
void PrienikPrehod(int& x, int& y);

bool Palindrome(std::string input);	
int Parne(int inval[5]);
float AritPriemer(float a, float b);
void ZapisRetazcov(std::string inval[]);
std::string Password(int timeDelay);

void Sifrovanie(char text[], char key[], bool bEncrypt, bool bSetMemoryToModifiedValue);	// Na toto sa nepytajte ja to vam nevysvetlim



// CUSTOM
void PinCode();
void Ascii();

// SIFROVANIE - Hodnoty musia byt pristupne pre (bSetMemoryToModifiedValue); POZOR! Toto prepise klucove udaje!
char inText[] = "Ifmmp"; // 0 1 2 0 1 | *GNNQ | Hello || Ifmmp | Hello -> Bit Offset | Encr. | Decr. || Encr. | Decr.
char inKey[] = "ABC";

int main()
{
	//std::cout << Spotreba() << " l";
	//OdKonca();
	//Prienik();
	//std::cout << Palindrome("racecar");
	//Ascii();
	//PinCode();
	//int parneNum[5] = { 1, 2, 3, 4, 5 };
	//std::cout << Parne(parneNum);
	//std::cout << AritPriemer(5, 10);
	//std::string retazce[3] = { "Svieti slnko", "Hello, World!", "Halo" };
	//ZapisRetazcov(retazce);
	//srand(time(NULL));
	//std::cout << Password(0);
	Sifrovanie(inText, inKey, false, false);


}

float Spotreba()
{
	float km;
	float benzinL;

	std::cout << "Zadajte kolko KM ste presli: ";
	std::cin >> km;
	std::cout << "\nZadajte kolko litrov benzinu ste spotrebovali: ";
	std::cin >> benzinL;

	std::cout << "\n\nVasa spotreba na 100km je: ";
	return benzinL * 100 / km;
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

bool Palindrome(std::string input)
{
	for (unsigned int i = 0; i < input.size(); i++)
	{
		return input[i] != input[(input.size()) - i - 1] ? false : true;
	}
}

void Ascii()
{
	std::cout << R"(
_____/\\\\\\\\\________/\\\\\\\\\\\__________/\\\\\\\\\__/\\\\\\\\\\\__/\\\\\\\\\\\_       
 ___/\\\\\\\\\\\\\____/\\\/////////\\\_____/\\\////////__\/////\\\///__\/////\\\///__       
  __/\\\/////////\\\__\//\\\______\///____/\\\/_______________\/\\\_________\/\\\_____      
   _\/\\\_______\/\\\___\////\\\__________/\\\_________________\/\\\_________\/\\\_____     
	_\/\\\\\\\\\\\\\\\______\////\\\______\/\\\_________________\/\\\_________\/\\\_____    
	 _\/\\\/////////\\\_________\////\\\___\//\\\________________\/\\\_________\/\\\_____   
	  _\/\\\_______\/\\\__/\\\______\//\\\___\///\\\______________\/\\\_________\/\\\_____  
	   _\/\\\_______\/\\\_\///\\\\\\\\\\\/______\////\\\\\\\\\__/\\\\\\\\\\\__/\\\\\\\\\\\_ 
		_\///________\///____\///////////___________\/////////__\///////////__\///////////__        
)" << '\n';
}

void PinCode()
{
	int pin = 0;
	std::string pinS = "";

	std::cin >> pinS;
	pin = std::stoi(pinS);
	while (!(pin >= 1000 && pin <= 9999 || pinS.length() == 4))
	{
		std::cout << "Incorrect!\n";
		std::cin >> pinS;
	}

	std::cout << "Correct!";

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

void ZapisRetazcov(std::string inval[])
{
	std::fstream file;
	file.open("ZapisRetazcov.txt");

	if (!file.is_open()) 
		std::cout << "Error opening file!\n";

	
	for (int i = 0; i < sizeof(inval) / sizeof(*inval); i++)
	{
		std::cout << inval[i];
		if (inval[i].length() < 10)
		{
			file << inval[i];
		}
	}

	file.close();

}

std::string Password(int timeDelay)
{
	int password = 0;
	std::string passList[5] = { "a4DuF56", "k^%6gGj", "Ap56f55g", "s7%JFk58", "dKI6ml65" };
	if (timeDelay <= 0) // Cant really have a delay on a console but every engine etc. should have it
	{
		int password = rand() % passList->length() + 1; // 0 - size of passList+1 since last number is exclusive

		return passList[password];

	}
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



