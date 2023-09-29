#include "liteloader/api/utils/FileHelper.h"

#include <filesystem>

#include "liteloader/api/utils/StringUtils.h"
#include "liteloader/api/utils/WinHelper.h"
#include "liteloader/core/Config.h"

#include "io.h"

using namespace std;
using namespace ll::StringUtils;
namespace fs = std::filesystem;

Logger logger("FileHelper");

///////////// Hacker to get private FILE* /////////////

struct meta_auxiliary {
    using type1 = FILE* std::filebuf::*;
    friend type1        get(meta_auxiliary);
};
template <typename Tag, typename Tag::type1 M>
struct Helper_aux {
    friend typename Tag::type1 get(Tag) { return M; }
};
template struct Helper_aux<meta_auxiliary, &std::filebuf::_Myfile>;
FILE* hack(std::filebuf* buf) { return buf->*get(meta_auxiliary()); }

FILE* GetFILEfromFstream(std::fstream& fs) { return hack(fs.rdbuf()); }

HANDLE GetHANDLEfromFstream(std::fstream& fs) {
    auto cfile = ::_fileno(GetFILEfromFstream(fs));
    return (HANDLE)::_get_osfhandle(cfile);
}

std::optional<std::string> ReadAllFile(std::string const& filePath, bool isBinary) {
    std::ifstream fRead;

    std::ios_base::openmode mode = std::ios_base::in;
    if (isBinary) mode |= std::ios_base::binary;

    fRead.open(str2wstr(filePath), mode);
    if (!fRead.is_open()) { return std::nullopt; }
    std::string data((std::istreambuf_iterator<char>(fRead)), std::istreambuf_iterator<char>());
    fRead.close();
    return data;
}


bool WriteAllFile(std::string const& filePath, std::string const& content, bool isBinary) {
    std::ofstream fWrite;

    std::ios_base::openmode mode = std::ios_base::out;
    if (isBinary) mode |= std::ios_base::binary;

    fWrite.open(str2wstr(filePath), mode);
    if (!fWrite.is_open()) { return false; }
    fWrite << content;
    fWrite.close();
    return true;
}

std::vector<std::string> GetFileNameList(std::string const& dir) {
    fs::directory_entry d(dir);
    if (!d.is_directory()) return {};

    std::vector<std::string> list;
    fs::directory_iterator   deps(d);
    for (auto& i : deps) { list.push_back(u8str2str(i.path().filename().u8string())); }
    return list;
}

bool CreateDirs(std::string const& path) {
    std::error_code ec;
    auto            ret = fs::create_directories(fs::path(str2wstr(path)), ec);
    if (ec.value() != 0) {
        logger.error("Fail to create dir, err code: {}", ec.value());
        logger.error(ec.message());
    }
    return ret;
}

std::pair<int, std::string> UncompressFile(std::string const& filePath, std::string toDir, int processTimeout) {
    error_code ec;
    fs::create_directories(toDir, ec);
    toDir = u8str2str(fs::canonical(toDir, ec).u8string());
    if (ec.value() != 0) {
        logger.error("Fail to create dir, err code: {}", ec.value());
        logger.error(ec.message());
        return {ec.value(), ec.message()};
    }
    if (!toDir.ends_with("/")) { toDir += "/"; }
    auto&& [exitCode, output] =
        NewProcessSync(fmt::format(R"({} x "{}" -o"{}" -aoa)", ZIP_PROGRAM_PATH, filePath, toDir), processTimeout);
    return {exitCode, std::move(output)};
}
