#include "RepositoryArray.h"

RepositoryArray::RepositoryArray() { size = 0; }

void RepositoryArray::addElem(Project s) {
	elem[size++] = s;
}

int RepositoryArray::findElem(Project s) {
	int i = 0;

	while (i < size) {
		if (elem[i] == s) return i;
		i++;
	}
	return -1;
}

void RepositoryArray::delElem(Project s) {
	int i = findElem(s);
	if (i != -1)
		elem[i] = elem[size - 1];
	size--;
}

void RepositoryArray::updateElem(Project s, char* n, int v, int u) {
	int i = findElem(s);
	elem[i].setGitPath(n);
	elem[i].setNoOfBranches(v);
	elem[i].setNoOfCommits(u);
}

//returneaza toate elementele din vector
Project* RepositoryArray::getAll() {
	return elem;
}
int RepositoryArray::dim() {
	return size;
}

//destructor
RepositoryArray::~RepositoryArray() {
}

//returneaza elementul de pe pozitia i.
Project RepositoryArray::getItemFromPos(int i) {
	return elem[i];
}
