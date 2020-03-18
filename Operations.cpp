#include "Operations.h"

//list of projects that have at least k branches and at least l commits
//a list of projects, len=the lenght of the list (int), k=minimum number of branches(int), l=minimum nr of commits(int)
//the list with the info we are looking for;
void minimumNumbers(Project projects[], int len, int k, int l, Project finalList[], int&m) {
    m = 0;
    for (int i=0; i<len; i++)
        if ((projects[i].getNoOfBranches() >= k) && (projects[i].getNoOfCommits() >= l)) {
            finalList[m] = projects[i];
            m++;
        }
}

//list of projects that have at least k branches and at least l commits
//a list of projects, len=the lenght of the list (int), k=minimum number of branches(int), l=minimum nr of commits(int)
//the list with the info we are looking for
void minimumNumbersWithRepoArray(RepositoryArray& repo, int k, int l, Project finalList[], int& m) {
    for (int i = 0; i < repo.dim(); i++) {
        Project crtProject = repo.getItemFromPos(i);

        if ((crtProject.getNoOfBranches()>=k) && (crtProject.getNoOfCommits() >= l)) {
            finalList[m++] = crtProject;
        }
    }
}

/*
//list of projects that have at least k branches and at least l commits
//a list of projects, len=the lenght of the list (int), k=minimum number of branches(int), l=minimum nr of commits(int)
//the list with the info we are looking for
void minimumNumbersWithRepoSTL(RepositorySTL& rep, int k, int l, vector<Project>& finalList){
    for (int i = 0; i < rep.dim(); i++) {
        Project crtProject = rep.getItemFromPos(i);

        if ((crtProject.getNoOfBranches() >= k) && (crtProject.getNoOfCommits() >= l)) {
            finalList.push_back(rep.getItemFromPos(i));
        }
    }
    
}*/

//eliminarea proiectelor care au noOfBranches*noOfCommits=0
//lista de poiecte, lungimea listei (int)
void eliminareProiecte(Project projects[], int len) {
    for (int i = 0; i < len; i++)
        if (projects[i].getNoOfBranches() * projects[i].getNoOfCommits() == 0) {
            for (int j = i; j < len - 1; j++) projects[j] = projects[j + 1];
            projects[len].~Project();
        }
}


