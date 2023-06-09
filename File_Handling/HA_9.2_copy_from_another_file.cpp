// C++ to demonstrate copying
// the contents of one file
// into another file
#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	// filestream variables
	fstream f1;
	fstream f2;

	string ch;

	// opening first file to read the content
	f1.open("file1.txt", ios::in);

	// opening second file to write
	// the content copied from
	// first file
	f2.open("file2.txt", ios::out);

	while (!f1.eof()) {

		// extracting the content of
		// first file line by line
		getline(f1, ch);

		// writing content to second
		// file line by line
		f2 << ch << endl;
	}

	// closing the files
	f1.close();
	f2.close();

	// opening second file to read the content
	f2.open("file2.txt", ios::in);
	while (!f2.eof()) {
		// extracting the content of
		// second file line by
		// line
		getline(f2, ch);

		// displaying content
		cout << ch << endl;
	}

	// closing file
	f2.close();

	return 0;
}
