#include "DocumentReading.h"

DocumentReading readingObject;
int x;

int main()
{
	readingObject.setFilePath("Dependencies/TextDocument.txt");
	x = readingObject.readFileForInt();
	cout << "Sum = " << x << endl;

}