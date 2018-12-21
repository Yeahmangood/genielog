#include "Titre.h"

void Titre::getTitreViaScript(string intermediaryFileName, string finalFileName, ) {
	ifstream iFile, fFile ;
	iFile.open(intermediaryFileName, ios::out);
	fFile.open(finalFileName, ios::in);

	// Check si le fichier a été ouvert avec succès
	if (!fFile || !iFile) {
		cerr << "Echec dans l'ouverture des fichiers passés en paramètres";
		exit(1); // Appel l'arrêt du système
	}

	fFile << iFile;
	
	iFile.close();	
	fFile.close();
}

String Titre::getTitre() {
	return this._titre;
}
