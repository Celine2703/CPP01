#include "Zombie.hpp"

int main(void) {
	Zombie zombie("Foo");
	zombie.announce();

	randomChump("Clement");

	Zombie *zombie2 = newZombie("Michel");
	zombie2->announce();
	delete zombie2;
	
	return (0);
}