#include <iostream>
#include <string>
#include <cctype>

int	main(int ac, char **av){

	if (ac == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}	
	for (int i = 1; i < ac; i++){
		std::string s = av[i];
		for (std::size_t j = 0; j < s.size(); j++)
			s[j] = std::toupper(s[j]);
		std::cout << s;
		if (av[i + 1])
			std::cout << " ";
	}
	std::cout << std::endl;
}