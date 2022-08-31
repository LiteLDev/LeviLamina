#include <Utils/FileHelper.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <Main/Config.h>
#include <io.h>
#include <filesystem>
using namespace std;

///////////// Hacker to get private FILE* /////////////

struct meta_auxiliary {
    using type1 = FILE* std::filebuf::*;
    friend type1 get(meta_auxiliary);
};
template <typename Tag, typename Tag::type1 M>
struct Helper_aux {
    friend typename Tag::type1 get(Tag) {
        return M;
    }
};
template struct Helper_aux<meta_auxiliary, &std::filebuf::_Myfile>;
FILE* hack(std::filebuf* buf) {
    return buf->*get(meta_auxiliary());
}

FILE* GetFILEfromFstream(std::fstream& fs) {
    return hack(fs.rdbuf());
}

HANDLE GetHANDLEfromFstream(std::fstream& fs) {
    auto cfile = ::_fileno(GetFILEfromFstream(fs));
    return (HANDLE)::_get_osfhandle(cfile);
}

std::optional<std::string> ReadAllFile(const std::string& filePath, bool isBinary) {
    std::ifstream fRead;

    std::ios_base::openmode mode = std::ios_base::in;
    if (isBinary)
        mode |= std::ios_base::binary;

    fRead.open(str2wstr(filePath), mode);
    if (!fRead.is_open()) {
        return std::nullopt;
    }
    std::string data((std::istreambuf_iterator<char>(fRead)),
                     std::istreambuf_iterator<char>());
    fRead.close();
    return data;
}


bool WriteAllFile(const std::string& filePath, const std::string& content, bool isBinary) {
    std::ofstream fWrite;

    std::ios_base::openmode mode = std::ios_base::out;
    if (isBinary)
        mode |= std::ios_base::binary;

    fWrite.open(str2wstr(filePath), mode);
    if (!fWrite.is_open()) {
        return false;
    }
    fWrite << content;
    fWrite.close();
    return true;
}

vector<string> GetFileNameList(const std::string& dir) {
    std::filesystem::directory_entry d(dir);
    if (!d.is_directory())
        return {};

    vector<string> list;
    std::filesystem::directory_iterator deps(d);
    for (auto& i : deps) {
        list.push_back(UTF82String(i.path().filename().u8string()));
    }
    return list;
}

bool CreateDirs(const string path) {
    std::error_code ec;
    return std::filesystem::create_directories(std::filesystem::path(str2wstr(path)).remove_filename(), ec);
}

std::pair<int, std::string> UncompressFile(const std::string& filePath, const std::string& toDir, int processTimeout)
{
    error_code ec;
    std::filesystem::create_directories(toDir, ec);
    std::string realToDir = EndsWith(toDir, "/") ? toDir : toDir + "/";
    auto&& [exitCode, output] = 
        NewProcessSync(fmt::format("{} x \"{}\" -o\"{}\" -aoa", ZIP_PROGRAM_PATH, filePath, realToDir), processTimeout);
    return { exitCode, std::move(output) };
}