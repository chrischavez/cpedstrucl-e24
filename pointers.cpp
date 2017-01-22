#include <iostream>
using namespace std;

void msgs(char *, char *);
void strCat(char *, char *);
void strCpy(char *, char *);
void strRev(char *, char *);
int strCmp(char*, char *);

void msgs(char *s1, char *s2){
	cout << "Enter first input: ";
	gets(s1);
	cout << "Enter second input: ";
	gets(s2);
}

void strCat(char *s1, char *s2){
	while(*s1)
		*s1++;
	while(*s1++ = *s2++);
}

void strCpy(char *s1, char *s2){
	while(*s1++ = *s2++);
}

void strRev(char *s1, char *s2){
	int i = 0;
	while(*s1){
		s1++;
		i++;
	}
	while(i >= 0){
		s1--;
		*s2 = *s1;
		s2++;
		--i;
	}
}

int strCmp(char *s1, char *s2){
	while(*s1 == *s2){
		if(*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	if(*s1 == '\0' && *s2 == '\0')
		return 1;
	return 0;
}

int main(){
	int choice;
	char str1[50];
	char str2[50];
	char str3[50];
	do{
		cout << "1. STRCAT" << endl;
		cout << "2. STRCPY" << endl;
		cout << "3. STRREV" << endl;
		cout << "4. STRCMP" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		system("cls");
		switch(choice){
			case 1:
				cin.ignore();
				cout << "1. STRCAT"<<endl;
				msgs(str1, str2);
				strCat(str1, str2);
				cout << "STRCAT: " << str1 << endl;
				system("pause");
				system("cls");
				break;
			case 2:
				cin.ignore();
				cout << "2. STRCPY"<<endl;
				msgs(str1, str2);
				strCpy(str3, str2);
				cout << "Second input STRCPY: " << str3 << endl;
				system("pause");
				system("cls");
				break;
			case 3:
				cin.ignore();
				cout << "3. STRREV"<<endl;
				msgs(str1, str2);
				strRev(str1, str2);
				cout << "First input STRREV: " << str2 << endl;
				system("pause");
				system("cls");
				break;
			case 4:
				cin.ignore();
				cout << "4. STRCMP"<<endl;
				msgs(str1, str2);
				strCmp(str1, str2);
				if(strCmp(str1, str2))
					cout << "Strings are both equal" << endl;
				else
					cout << "Strings are not equal" << endl;
				system("pause");
				system("cls");
				break;
			case 5:
				exit(1);
		}
	}
	while(1);
	return 0;
}
