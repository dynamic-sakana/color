#include "color.h"

color::color(std::string a_content) { content = a_content; }
color::color(const char* a_content) { content = a_content; }

void red::print() const {
	printf("\033[0m\033[1;31m%s\033[0m", content.c_str());
}

void green::print() const {
	printf("\033[0m\033[1;32m%s\033[0m", content.c_str());
}


void yellow::print() const {
	printf("\033[0m\033[1;33m%s\033[0m", content.c_str());
}

void blue::print() const {
	printf("\033[0m\033[1;34m%s\033[0m", content.c_str());
}


void pink::print() const {
	printf("\033[0m\033[1;35m%s\033[0m", content.c_str());
}

void cyan::print() const {
	printf("\033[0m\033[1;36m%s\033[0m", content.c_str());
}