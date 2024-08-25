#include "ll/api/io/FileUtils.h"

#include <filesystem>

#include "ll/api/utils/StringUtils.h"

namespace ll::inline utils::file_utils {
using namespace string_utils;
namespace fs = std::filesystem;

std::filesystem::path u8path(std::string_view src) { return std::filesystem::path{sv2u8sv(src)}; }

std::optional<std::string> readFile(fs::path const& filePath, bool isBinary) {
    if (!fs::exists(filePath)) {
        return std::nullopt;
    }
    std::ifstream           fRead;
    std::ios_base::openmode mode = std::ios_base::in;
    if (isBinary) mode |= std::ios_base::binary;
    fRead.open(filePath, mode);
    if (!fRead.is_open()) {
        return std::nullopt;
    }
    std::string data((std::istreambuf_iterator<char>(fRead)), {});
    fRead.close();
    return data;
}

bool writeFile(fs::path const& filePath, std::string_view content, bool isBinary) {
    std::ofstream           fWrite;
    std::ios_base::openmode mode = std::ios_base::out;
    if (isBinary) mode |= std::ios_base::binary;
    std::error_code ec;
    fs::create_directories(filePath.parent_path(), ec);
    fWrite.open(filePath, mode);
    if (!fWrite.is_open()) {
        return false;
    }
    fWrite << content;
    fWrite.close();
    return true;
}

} // namespace ll::inline utils::file_utils
