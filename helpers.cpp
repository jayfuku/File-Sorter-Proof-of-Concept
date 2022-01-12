#include "helpers.h"

std::vector<std::string> parseFiles(std::string path) {
	std::vector<std::string> fileVec;
	for (const auto& name : std::filesystem::directory_iterator{ path }) {
		fileVec.push_back(name);
	}
}
