#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

class DocumentReading
{
public:

	void setFilePath(std::string filePath);
	
	std::string getFilePath();

	void openFile();

	int readFileForInt();

	DocumentReading();
	~DocumentReading();

private:
	std::string filePath;
	ifstream inputFile;
};

