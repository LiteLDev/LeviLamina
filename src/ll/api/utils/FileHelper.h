#pragma once
#include "ll/api/base/Global.h"
#include <fstream>
#include <optional>
#include <string>
namespace ll {
LLNDAPI std::vector<std::string> getFileNameList(std::string const& dir);
LLAPI bool                       createDirs(std::string const& path);
LLNDAPI std::optional<std::string> readAllFile(std::string const& filePath, bool isBinary = false);
LLAPI bool WriteAllFile(std::string const& filePath, std::string const& content, bool isBinary = false);
} // namespace ll