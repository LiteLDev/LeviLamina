#include "ll/api/utils/FileHelper.h"

#include <filesystem>

#include "ll/api/Logger.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/Config.h"

#include "io.h"

using namespace ll::string_utils;
namespace fs = std::filesystem;

///////////// Hacker to get private FILE* /////////////
namespace ll {
std::optional<std::string> readAllFile(std::string const& filePath, bool isBinary) {
    std::ifstream fRead;

    std::ios_base::openmode mode = std::ios_base::in;
    if (isBinary) mode |= std::ios_base::binary;

    fRead.open(str2u8str(filePath), mode);
    if (!fRead.is_open()) { return std::nullopt; }
    std::string data((std::istreambuf_iterator<char>(fRead)), {});
    fRead.close();
    return data;
}


bool WriteAllFile(std::string const& filePath, std::string const& content, bool isBinary) {
    std::ofstream fWrite;

    std::ios_base::openmode mode = std::ios_base::out;
    if (isBinary) mode |= std::ios_base::binary;

    fWrite.open(str2u8str(filePath), mode);
    if (!fWrite.is_open()) { return false; }
    fWrite << content;
    fWrite.close();
    return true;
}

std::vector<std::string> getFileNameList(std::string const& dir) {
    fs::directory_entry d(dir);
    if (!d.is_directory()) return {};

    std::vector<std::string> list;
    fs::directory_iterator   deps(d);
    for (auto& i : deps) { list.push_back(u8str2str(i.path().filename().u8string())); }
    return list;
}

bool createDirs(std::string const& path) {
    std::error_code ec;
    auto            ret = fs::create_directories(str2u8str(path), ec);
    return ret;
}
} // namespace ll