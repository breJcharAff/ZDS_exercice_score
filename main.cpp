#include <iostream>
#define NOMINMAX
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1252);

	std::cout << "Quel est votre score : ";
	int score{ 0 };
	
	// Gestion des erreurs
	while (!(std::cin >> score)) {
		std::cout << "Merci de saisir un score valide.\n";
		std::cin.clear();
		std::cin.ignore(255, '\n');
		std::cout << "\nQuel est votre score : ";
	}

	std::cout << "\nVotre score est de " << score << std::endl;

	if (score < 2000) {
		std::cout << "C'est la catastrophe !\n";
	}
	else if (score < 5000) {
		std::cout << "Tu peux mieux faire !\n";
	}
	else if (score < 9000) {
		std::cout << "Tu es sur la bonne voie !\n";
	}
	else {
		std::cout << "Tu es le meilleur !\n";
	}
  
}
