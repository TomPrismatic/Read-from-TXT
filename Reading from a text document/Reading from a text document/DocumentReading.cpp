#include "DocumentReading.h"



void DocumentReading::setFilePath(std::string filePath)
{
	this->filePath = filePath;
}

std::string DocumentReading::getFilePath()
{
	return filePath;
}

void DocumentReading::openFile()
{
	inputFile.open(filePath);
}

int DocumentReading::readFileForInt()
{
	openFile();
	int sum = 0;
	int x;

	if (!inputFile)
	{
		std::cout << "Unable to open file";
	}

	while (inputFile >> x) 
	{
		sum = sum + x;
	}

	inputFile.close();

	return sum;
}

DocumentReading::DocumentReading()
{
}


DocumentReading::~DocumentReading()
{
}
