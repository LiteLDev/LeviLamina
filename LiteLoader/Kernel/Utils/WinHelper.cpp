#include <Utils/WinHelper.h>
#include <Utils/StringHelper.h>
#include <Windows.h>
#include <string>
#include <fstream>
#include <cstdio>
using namespace std;

string GetLastErrorMessage() {
    DWORD error_message_id = ::GetLastError();
    if (error_message_id == 0)
        return "";
    
    LPWSTR message_buffer = nullptr;
    FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_FROM_SYSTEM,
                  NULL, error_message_id, MAKELANGID(0x09, SUBLANG_DEFAULT), (LPWSTR)&message_buffer, 0, NULL);
    string res = wstr2str(wstring(message_buffer));
    LocalFree(message_buffer);
    return res;
}


///////////// Hacker to get private FILE* /////////////

struct meta_auxiliary {
    using type1 = FILE* std::filebuf::*;
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