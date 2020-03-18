#include "Project.h"
#include <iostream>
#include <string.h>

//Constructor
//in: -
//out: an empty object of type project
Project::Project() {
	gitPath = NULL;
	noOfBranches = 0;
	totalNoOfCommits = 0;
}

//Constructor with parameters
//IN: a gitPath(string), a number of branches (int) and total number of commits (int);
//OUT: an object of type Project that contains the given info
Project::Project(const char* gitPath, int noOfBranches, int totalNoOfCommits) {
	this->gitPath = new char[strlen(gitPath) + 1];
	strcpy_s(this->gitPath, strlen(gitPath)+1, gitPath);
	this->noOfBranches = noOfBranches;
	this->totalNoOfCommits = totalNoOfCommits;
}

// Copy constructor
// In: an object s of type Project
// Out: another object of type Project that contains the same info as p
Project::Project(const Project& p) {
	this->gitPath = new char[strlen(p.gitPath) + 1];
	strcpy_s(this->gitPath, strlen(p.gitPath)+1, p.gitPath);
	this->noOfBranches = p.noOfBranches;
	this->totalNoOfCommits = p.totalNoOfCommits;
}


// getter
// In: an object of type Project
// Out: gitPath of a project
char* Project::getGitPath() {
	return gitPath;
}

// getter
// In: an object of type Project
// Out: number of branches of a project
int Project::getNoOfBranches() {
	return noOfBranches;
}

// getter
// In: an object of type Project
// Out: total number of commits of a project
int Project::getNoOfCommits() {
	return totalNoOfCommits;
}

// setter
// In: an object of type Project and a new gitPath (string)
// Out: the same object with a new gitPath
void Project::setGitPath(char* gitPath) {
	if (gitPath) {
		delete[] gitPath;
	}
	gitPath = new char[strlen(gitPath) + 1];
	strcpy_s(this->gitPath, strlen(gitPath)+1, gitPath);
}

// setter
// In: an object of type Project and a number of branches (integer)
// Out: the same object with a new number of branches
void Project::setNoOfBranches(int a) {
	noOfBranches = a;
}

// setter
// In: an object of type Project and a number of commits (integer)
// Out: the same object with a new number of commits
void Project::setNoOfCommits(int b) {
	totalNoOfCommits = b;
}

// assignment operator
// In: two objects of type Project (the current one, this, and p)
// Out: the new state of the current object (this)
Project& Project::operator=(const Project& p) {
	if (this == &p) return *this;
	if (gitPath) delete[] gitPath;
	gitPath = new char[strlen(p.gitPath) + 1];
	strcpy_s(gitPath, strlen(p.gitPath) + 1, p.gitPath);
	noOfBranches = p.noOfBranches;
	totalNoOfCommits = p.totalNoOfCommits;
	//this->setGitPath(p.gitPath);
	//this->setNoOfBranches(p.noOfBranches);
	//this->setNoOfCommits(p.totalNoOfCommits);
	return *this;
}

// comparator
// In: two objects of type Project (this and p)
// Out: true or false
bool Project::operator==(const Project& p) {
	return ((strcmp(this->gitPath, p.gitPath) == 0) && (this->noOfBranches == p.noOfBranches) && (this->totalNoOfCommits == p.totalNoOfCommits));
}

// Desonstructor
// In: an object of type Project
// Out: -
Project::~Project() {
	if (gitPath) {
		delete[] gitPath;
		gitPath = NULL;
		noOfBranches = -1;
		totalNoOfCommits = -1;
	}
}