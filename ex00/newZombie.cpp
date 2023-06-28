#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

//on garde le zombie pour l'utiliser en dehors de la fonction -> on l'alloue dynamiquement (heap)