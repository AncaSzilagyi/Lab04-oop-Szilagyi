/*
#include "RepositorySTL.h"

RepositorySTL::RepositorySTL()
{
}

void RepositorySTL::addElem(Project s) {
	elem.push_back(s);
	//va adauga la sf vectorului, elementul s;
}

void RepositorySTL::delElem(Project s) {
	vector<Project>::iterator it;
	//imi permite sa decuplez felul in care se parcurge o struct de date
	it = find(elem.begin(), elem.end(), s);
	//de la inceput pana la sfarsit il caut pe s
	//it va fi pozitia lui s daca exista. altfel - NULL.
	if (it != elem.end()) elem.erase(it);
	//daca il gasesc, il sterg

}

bool RepositorySTL::findElem(Project s) {
	vector<Project>::iterator it;
	it = find(elem.begin(), elem.end(), s);
	if (it != elem.end()) return true;
	return false;

}

int RepositorySTL::dim() {
	return elem.size();
}

Student RepositorySTL::getItemFromPos(int i) {
	return elem[i];
}

RepositorySTL::~RepositorySTL()
{}

vector<Student> RepositorySTL::getAll() {
	return elem;
}

void RepositorySTL::updateElem(Student s, char* gitPath, int v, int u) {
	for (int i = 0; i < elem.size(); i++)
		if (elem[i] == s) { elem[i].setGitPath(gitPath); elem[i].setNoOfBranches(v); elem[i].setNoOfCommits(u), return; }

}
*/
