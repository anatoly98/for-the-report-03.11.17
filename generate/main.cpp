#include "iostream"
#include "words.h"
#include <ctime>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	GEN ty;
	ty.gen();
	system("PAUSE");
	return 0;
}

void GEN::gen(){
	cout << adjectives[rand() % 4];
	cout << " ";
	cout << verbs[rand() % 4];
	cout << " ";
	cout << nouns[rand() % 4] << endl;
}