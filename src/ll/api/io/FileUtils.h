#pragma once

#include <filesystem>
#include <fstream>
#include <optional>
#include <string>
#include <vector>

#include "ll/api/base/Macro.h"

namespace ll::utils::file_utils {

LLNDAPI std::filesystem::path u8path(std::string_view src);

LLNDAPI std::optional<std::string> readFile(std::filesystem::path const& filePath, bool isBinary = false);

LLAPI bool writeAllFile(std::filesystem::path const& filePath, std::string_view content, bool isBinary = false);

} // namespace ll::utils::file_utils
