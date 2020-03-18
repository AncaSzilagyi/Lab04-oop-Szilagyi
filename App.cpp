#include <iostream>
#include "Tests.h"
using namespace std;

int main() {
	cout << "Se verifica testele... " << endl;
	minimumNumberTest();
	minimumNumberTestWithRepoArray();
	repositoryArrayTests();

	cout << "Testele au fost verificate cu succes!" << endl;
	return 0;
}