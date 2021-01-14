#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron {
public:
	double ileMaki(double wartosc) {
		return wartosc;
	}
};
// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(std::string& argument) {
	if (argument.front() == argument.back()) {
		return new Tagliatelle(3.14, 0.42, 0.1);
	}
	else {
		return new Penne;
	}
}
