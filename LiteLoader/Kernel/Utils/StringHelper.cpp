#include <Utils/StringHelper.h>
#include <windows.h>
#include <vector>
#include <string>
using namespace std;

wstring str2wstr(string str) {
    auto     len    = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, NULL, 0);
    wchar_t* buffer = new wchar_t[len + 1];
    MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, buffer, len + 1);
    buffer[len] = L'\0';

    wstring result = wstring(buffer);
    delete[] buffer;
    return result;
}

string wstr2str(wstring wstr) {
    auto  len    = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, NULL, 0, NULL, NULL);
    char* buffer = new char[len + 1];
    WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, buffer, len + 1, NULL, NULL);
    buffer[len] = '\0';

    string result = string(buffer);
    delete[] buffer;
    return result;
}

std::vector<std::string> SplitStrWithPattern(const std::string& str, const std::string& pattern)
{
    std::vector<std::string> resVec;

    if (str.empty())
        return resVec;

    std::string strs = str + pattern;

    size_t pos = strs.find(pattern);
    size_t size = strs.size();

    while (pos != std::string::npos)
    {
        std::string x = strs.substr(0, pos);
        resVec.push_back(x);
        strs = strs.substr(pos + 1, size);
        pos = strs.find(pattern);
    }

    return resVec;
}

bool StartsWith(const std::string& str, const std::string& start)
{
    int srclen = str.size();
    int startlen = start.size();
    if (srclen >= startlen)
    {
        string temp = str.substr(0, startlen);
        if (temp == start)
            return true;
    }

    return false;
}

bool EndsWith(const std::string& str, const std::string& end)
{
    int srclen = str.size();
    int endlen = end.size();
    if (srclen >= endlen)
    {
        string temp = str.substr(srclen - endlen, endlen);
        if (temp == end)
            return true;
    }

    return false;
}