#include "ll/api/utils/FileUtils.h"

#include <filesystem>

#include "ll/api/Logger.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/Config.h"

using namespace ll::utils::string_utils;
namespace fs = std::filesystem;

namespace ll::utils::file_utils {
std::optional<std::string> readFile(const fs::path& filePath, bool isBinary) {
    std::ifstream           fRead;
    std::ios_base::openmode mode = std::ios_base::in;
    if (isBinary) mode |= std::ios_base::binary;
    fRead.open(filePath, mode);
    if (!fRead.is_open()) { return std::nullopt; }
    std::string data((std::istreambuf_iterator<char>(fRead)), {});
    fRead.close();
    return data;
}

bool writeFile(const fs::path& filePath, std::string_view content, bool isBinary) {
    std::ofstream           fWrite;
    std::ios_base::openmode mode = std::ios_base::out;
    if (isBinary) mode |= std::ios_base::binary;
    fWrite.open(filePath, mode);
    if (!fWrite.is_open()) { return false; }
    fWrite << content;
    fWrite.close();
    return true;
}

std::vector<std::string> getFileNameList(const fs::path& dir) {
    fs::directory_entry d(dir);
    if (!d.is_directory()) return {};
    std::vector<std::string> list;
    fs::directory_iterator   deps(d);
    for (auto& i : deps) { list.push_back(u8str2str(i.path().filename().u8string())); }
    return list;
}

bool createDirs(const fs::path& path) {
    std::error_code ec;
    return fs::create_directories(path, ec);
}

} // namespace ll::utils::file_utils
