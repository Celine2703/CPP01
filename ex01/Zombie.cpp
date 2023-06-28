#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << this->name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
	this->name = "default Michel";
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is dead" << std::endl;
}