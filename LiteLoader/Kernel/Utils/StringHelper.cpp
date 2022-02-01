#include <Utils/StringHelper.h>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

wstring str2wstr(const string& str) {
    auto len = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, nullptr, 0);
    auto* buffer = new wchar_t[len + 1];
    MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, buffer, len + 1);
    buffer[len] = L'\0';

    wstring result = wstring(buffer);
    delete[] buffer;
    return result;
}

string wstr2str(const wstring& wstr) {
    auto len = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, nullptr, 0, nullptr, nullptr);
    char* buffer = new char[len + 1];
    WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, buffer, len + 1, nullptr, nullptr);
    buffer[len] = '\0';

    string result = string(buffer);
    delete[] buffer;
    return result;
}

std::vector<std::string> SplitStrWithPattern(const std::string& str, const std::string& pattern) {
    std::vector<std::string> resVec;

    if (str.empty())
        return resVec;

    std::string strs = str + pattern;

    size_t pos = strs.find(pattern);
    size_t size = strs.size();

    while (pos != std::string::npos) {
        std::string x = strs.substr(0, pos);
        resVec.push_back(x);
        strs = strs.substr(pos + 1, size);
        pos = strs.find(pattern);
    }

    return resVec;
}

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
    size_t srcLen = str.size();
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

std::wstring ANSI2Unicode(const std::string& str)
{
    std::wstring ret;
    std::mbstate_t state = {};
    const char* src = str.data();
    size_t len = std::mbsrtowcs(nullptr, &src, 0, &state);
    if (static_cast<size_t>(-1) != len) {
        std::unique_ptr< wchar_t[] > buff(new wchar_t[len + 1]);
        len = std::mbsrtowcs(buff.get(), &src, len, &state);
        if (static_cast<size_t>(-1) != len) {
            ret.assign(buff.get(), len);
        }
    }
    return ret;
}