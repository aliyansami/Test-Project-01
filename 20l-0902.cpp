#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int StringLenght(char* mystr) {
	int counter = 0;
	for (int i = 0; mystr[i] != '\0'; i++) {
		counter++;
	}

	return counter;
}

char* StringConcatenante(char* string1, char* string2) {

	cout << "Testing String Concatination: " << "\n";
	cout << "\n";

	int sizestring1 = 0;
	int sizestring2 = 0;

	cout << "String1: " << string1 << "\n";
	cout << "String2: " << string2 << "\n";
	cout << "\n";

	sizestring1 = StringLenght(string1);
	sizestring2 = StringLenght(string2);

	int totalsize = sizestring1 + sizestring2;

	char* Concatentedstring = new char[totalsize + 1];

	int x = 0;

	for (int i = 0; i < sizestring1; i++) {
		Concatentedstring[x] = string1[i];
		x++;
	}

	Concatentedstring[x] = ' ';
	x++;

	for (int i = 0; i < sizestring2; i++) {
		Concatentedstring[x] = string2[i];
		x++;
	}
	Concatentedstring[x] = '\0';


	string1 = new char[totalsize + 1];
	int y = 0;
	for (int i = 0; i < totalsize + 1; i++) {
		string1[y] = Concatentedstring[i];
		y++;
	}

	string1[y] = '\0';

	cout << "After Concatination: " << "\n";
	cout << "String1: " << string1 << "\n";
	cout << "String2: " << string2 << "\n";

	return string1;
}

char* StringConcatenante1(char* string1, char* string2) {

	int sizestring1 = 0;
	int sizestring2 = 0;

	sizestring1 = StringLenght(string1);
	sizestring2 = StringLenght(string2);

	int totalsize = sizestring1 + sizestring2;

	char* Concatentedstring = new char[totalsize + 1];

	int x = 0;

	for (int i = 0; i < sizestring1; i++) {
		Concatentedstring[x] = string1[i];
		x++;
	}

	Concatentedstring[x] = ' ';
	x++;

	for (int i = 0; i < sizestring2; i++) {
		Concatentedstring[x] = string2[i];
		x++;
	}
	Concatentedstring[x] = '\0';


	string1 = new char[totalsize + 1];
	int y = 0;
	for (int i = 0; i < totalsize + 1; i++) {
		string1[y] = Concatentedstring[i];
		y++;
	}

	string1[y] = '\0';
	return string1;
}

char* GetStringFromBuffer(char* buffer)
{
	int strLen = StringLenght(buffer);
	char* str = 0;

	if (strLen > 0)
	{
		str = new char[strLen + 1];
		char* tempDest = str;

		for (char* tempSrc = buffer; *tempSrc != '\0'; tempSrc++, tempDest++)
		{
			*tempDest = *tempSrc;
		}
		*tempDest = '\0';
	}
	return str;
}

void print(char** list, int size) {
	for (int i = 0; i < size; i++) {
		cout << list[i] << "\n";
	}
}

char** StringTokens(char* string) {

	cout << "Testing String Tokens: " << "\n";
	cout << "\n";

	int totalwords = 0;
	int sizeofstring = 0;
	sizeofstring = StringLenght(string);

	for (int i = 0; i < sizeofstring; i++) {
		if (string[i] == ' ') {
			totalwords++;
		}
	}

	totalwords++;
	char** Token = new char* [totalwords];

	int counter = 0;
	for (int i = 0; i < totalwords; i++) {

		char temp[10];
		int sizeofword = 0;
		int j = 0;

		while (string[counter] != ' ' && counter < sizeofstring) {
			temp[j] = string[counter];
			counter++;
			j++;
		}

		counter++;
		temp[j] = '\0';

		sizeofword = StringLenght(temp);

		char* word = 0;
		word = GetStringFromBuffer(temp);

		Token[i] = new char[sizeofword + 1];
		Token[i] = word;

	}

	return Token;
}

void InterchangeRows(char*& row1, char*& row2) {
	char* temp = 0;

	temp = row1;
	row1 = row2;
	row2 = temp;
}

char** InverseStringTokens(char* string) {

	cout << "Testing Reverse String Tokens: " << "\n";
	cout << "\n";

	int totalwords = 0;
	int sizeofstring = 0;
	sizeofstring = StringLenght(string);

	for (int i = 0; i < sizeofstring; i++) {
		if (string[i] == ' ') {
			totalwords++;
		}
	}

	totalwords++;
	char** Token = new char* [totalwords];

	int counter = 0;
	for (int i = 0; i < totalwords; i++) {

		char temp[10];
		int sizeofword = 0;
		int j = 0;

		while (string[counter] != ' ' && counter < sizeofstring) {
			temp[j] = string[counter];
			counter++;
			j++;
		}

		counter++;
		temp[j] = '\0';

		sizeofword = StringLenght(temp);

		char* word = 0;
		word = GetStringFromBuffer(temp);

		Token[i] = new char[sizeofword + 1];
		Token[i] = word;

	}

	char** tempmatrix = 0;
	int iterator = totalwords / 2;
	int s = 0, t = 0, l = 0;

	for (s = 0, t = totalwords - 1; s < iterator, t >= iterator; s++, t--) {
		InterchangeRows(Token[s], Token[t]);
	}


	return Token;
}

char* ReverseSentence(char* string) {

	cout << "Testing Reverse String: " << "\n";
	cout << "\n";

	int totalwords = 0;
	int sizeofstring = 0;
	sizeofstring = StringLenght(string);

	for (int i = 0; i < sizeofstring; i++) {
		if (string[i] == ' ') {
			totalwords++;
		}
	}

	totalwords++;
	char** Token = new char* [totalwords];

	int counter = 0;
	for (int i = 0; i < totalwords; i++) {

		char temp[10];
		int sizeofword = 0;
		int j = 0;

		while (string[counter] != ' ' && counter < sizeofstring) {
			temp[j] = string[counter];
			counter++;
			j++;
		}

		counter++;
		temp[j] = '\0';

		sizeofword = StringLenght(temp);

		char* word = 0;
		word = GetStringFromBuffer(temp);

		Token[i] = new char[sizeofword + 1];
		Token[i] = word;

	}

	char** tempmatrix = 0;
	int iterator = totalwords / 2;
	int s = 0, t = 0, l = 0;

	for (s = 0, t = totalwords - 1; s < iterator, t >= iterator; s++, t--) {
		InterchangeRows(Token[s], Token[t]);
	}

	char* ReverseArray = new char[sizeofstring];

	ReverseArray = *Token;

	for (int i = 1; i < totalwords; i++) {
		ReverseArray = StringConcatenante1(ReverseArray, Token[i]);
	}

	cout << ReverseArray << "\n";

	return ReverseArray;
}

int main() {

	ifstream myfile;

	myfile.open("Data.txt");

	char mystring[100];
	char mystring1[100];

	myfile.getline(mystring, 100);
	myfile.getline(mystring1, 100);
	
	char myStr1[] = "Hello World";
	char myStr2[] = "This world is shit";
	char myStr3[] = "Iam a student of OOP in FAST NUCES";
	
	char* concatenatedstring=0;

	concatenatedstring=StringConcatenante(mystring, mystring1);

	cout << concatenatedstring << "\n";

	cout << "-----------------------------------------" << "\n";
	cout << "\n";

	int sizeofstring = 0;
	sizeofstring = StringLenght(concatenatedstring);
	int totalwords = 0;
	for (int i = 0; i < sizeofstring; i++) {
		if (concatenatedstring[i] == ' ') {
			totalwords++;
		}
	}
	totalwords++;
	char** Token = 0;
	Token = StringTokens(concatenatedstring);

	print(Token, totalwords);
	cout << "\n";

	cout << "-----------------------------------------" << "\n";
	cout << "\n";

	Token = InverseStringTokens(concatenatedstring);
	print(Token, totalwords);

	cout << "\n";
	cout << "-----------------------------------------" << "\n";
	cout << "\n";
	ReverseSentence(concatenatedstring);

	cout << "\n";

	system("pause");
	return 0;
}