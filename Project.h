#pragma once
//#include <iostream>
//#include <string.h>

class Project {
private:
    char* gitPath;
    int noOfBranches;
    int totalNoOfCommits;
public:
    Project();
    Project(const char*, int, int);
    Project(const Project&);
    Project& operator=(const Project& p);

    char* getGitPath();
    int getNoOfBranches();
    int getNoOfCommits();
    void setGitPath(char* n);
    void setNoOfBranches(int a);
    void setNoOfCommits(int b);
    bool operator==(const Project& p);
    ~Project(); //destructor - elibereaza toate resursele alocate de constructor
};

//constructorul poate sa aloce dinamic ceva in memorie;
//constr poate sa deschida/inchida fisiere; etc.
