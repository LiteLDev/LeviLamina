#pragma once

#include <fstream>
#include <optional>
#include <string>
#include <vector>

#include "ll/api/base/Macro.h"

namespace ll::utils::file_utils {

LLNDAPI std::vector<std::string> getFileNameList(std::filesystem::path const& dir);

LLAPI bool createDirs(std::filesystem::path const& path);

LLNDAPI std::optional<std::string> readFile(std::filesystem::path const& filePath, bool isBinary = false);

LLAPI bool writeAllFile(std::filesystem::path const& filePath, std::string_view content, bool isBinary = false);

} // namespace ll::utils::file_utils
