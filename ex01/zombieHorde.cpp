#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie	*result = new Zombie[N];

	for (int i = 0; i < N; i++)
		result[i].setName(name);
	return (result);
}
