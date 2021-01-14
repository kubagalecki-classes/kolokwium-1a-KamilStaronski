#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template <typename typ>
std::size_t polejSosem(Tagiatelle& t, typ &sos) {
	return polej(sos, t);
}
