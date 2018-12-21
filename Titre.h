#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Titre {
public:
	string getTitre();
	void getTitreViaScript(string filename);
private:
	string _titre;
}
