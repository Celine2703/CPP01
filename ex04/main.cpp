#include <iostream>
#include <fstream>
#include <string>

void replaceStringInFile(const std::string& filename, const std::string& s1, const std::string& s2) {

    if (s1.empty()) {
        std::cerr << "Erreur: s1 ne doit pas être vide." << std::endl;
        return;
    }

    std::ifstream inputFile(filename.c_str()); //ouvre fichier
    if (!inputFile) {
        std::cerr << "Erreur lors de l'ouverture du fichier d'entrée." << std::endl;
        return;
    }

    // Création du nom de fichier pour le fichier de sortie
    std::string outputFilename = filename + ".replace";

    std::ofstream outputFile(outputFilename.c_str()); // ouvre fichier .replace ou creer
    if (!outputFile) {
        std::cerr << "Erreur lors de la création du fichier de sortie." << std::endl;
        return;
    }

    // Lit fichier d'entrée et remplace occurrences de s1 par s2
    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
		pos = line.find(s1, pos);
        while (pos != std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length(); // on se met à la fin de s2
			pos = line.find(s1, pos); // cherche s1
        }
        outputFile << line << std::endl; // écrit la ligne dans fichier .replace car s1 pas ou plus dedans
    }

    // Fermeture fichiers
    inputFile.close();
    outputFile.close();

    std::cout << "Remplacement effectué avec succès. Le nouveau fichier est : " << outputFilename << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Lancer comme suit: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceStringInFile(filename, s1, s2);

    return 0;
}
