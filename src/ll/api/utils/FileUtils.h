#pragma once

#include <fstream>
#include <optional>
#include <string>
#include <vector>

#include "ll/api/base/Macro.h"

namespace ll::utils::file_utils {

LLNDAPI std::vector<std::string> getFileNameList(std::string const& dir);
LLAPI bool                       createDirs(std::string const& path);
LLNDAPI std::optional<std::string> readAllFile(std::string const& filePath, bool isBinary = false);
LLAPI bool WriteAllFile(std::string const& filePath, std::string const& content, bool isBinary = false);

} // namespace ll::utils::file_utils
