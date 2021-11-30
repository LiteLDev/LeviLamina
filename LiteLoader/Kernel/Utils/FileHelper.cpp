#include <Utils/FileHelper.h>

///////////// Hacker to get private FILE* /////////////

struct meta_auxiliary {
    using type1 = FILE * std::filebuf::*;
    friend type1        get(meta_auxiliary);
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

std::optional<std::string> ReadAllFile(const std::string& filePath, bool isBinary)
{
    std::ifstream fRead;

    std::ios_base::openmode mode = std::ios_base::in;
    if (isBinary)
        mode |= std::ios_base::binary;

    fRead.open(filePath, mode);
    if (!fRead.is_open())
    {
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

    fWrite.open(filePath, mode);
    if (!fWrite.is_open()) {
        return false;
    }
    fWrite << content;
    fWrite.close();
    return true;
}