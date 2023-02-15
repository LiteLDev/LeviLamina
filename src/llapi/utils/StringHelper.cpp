#include "llapi/utils/StringHelper.h"

#include <string>
#include <vector>

#include <Windows.h>

using namespace std;

wstring str2wstr(const string& str) { return str2wstr(str, CP_UTF8); }

std::wstring str2wstr(const std::string& str, UINT codePage) {
    auto  len    = MultiByteToWideChar(codePage, 0, str.c_str(), -1, nullptr, 0);
    auto* buffer = new wchar_t[len];
    MultiByteToWideChar(codePage, 0, str.c_str(), -1, buffer, len);
    wstring result = wstring(buffer);
    delete[] buffer;
    return result;
}

string wstr2str(const wstring& wstr) { return wstr2str(wstr, CP_UTF8); }

std::string wstr2str(const std::wstring& wstr, UINT codePage) {
    auto  len    = WideCharToMultiByte(codePage, 0, wstr.c_str(), -1, nullptr, 0, nullptr, nullptr);
    char* buffer = new char[len];
    WideCharToMultiByte(codePage, 0, wstr.c_str(), -1, buffer, len, nullptr, nullptr);
    string result = string(buffer);
    delete[] buffer;
    return result;
}

std::vector<std::string> SplitStrWithPattern(const std::string& str, const std::string& pattern) {
    std::vector<std::string> resVec;

    if (str.empty())
        return resVec;

    std::string strs = str + pattern;

    size_t pos  = strs.find(pattern);
    size_t size = strs.size();

    while (pos != std::string::npos) {
        std::string x = strs.substr(0, pos);
        resVec.push_back(x);
        strs = strs.substr(pos + pattern.size(), size);
        pos  = strs.find(pattern);
    }

    return resVec;
}

/*
 * @brief Replace all founded sub string and modify input str
 */
string& ReplaceStr(string& str, const string& old_value, const string& new_value) {
    for (string::size_type pos(0); pos != string::npos; pos += new_value.length()) {
        if ((pos = str.find(old_value, pos)) != string::npos)
            str.replace(pos, old_value.length(), new_value);
        else
            break;
    }
    return str;
}

bool StartsWith(const std::string& str, const std::string& start) {
    size_t srcLen   = str.size();
    size_t startLen = start.size();
    if (srcLen >= startLen) {
        string temp = str.substr(0, startLen);
        if (temp == start)
            return true;
    }

    return false;
}

bool EndsWith(const std::string& str, const std::string& end) {
    size_t srcLen = str.size();
    size_t endLen = end.size();
    if (srcLen >= endLen) {
        string temp = str.substr(srcLen - endLen, endLen);
        if (temp == end)
            return true;
    }

    return false;
}

std::string FixCurlyBracket(std::string str) {
    ReplaceStr(str, "{", "{{");
    ReplaceStr(str, "}", "}}");
    return str;
}

#ifdef __cpp_lib_char8_t
LIAPI std::string UTF82String(std::u8string str) { return reinterpret_cast<std::string&>(str); }
#endif
LIAPI std::string UTF82String(std::string str) { return str; }
