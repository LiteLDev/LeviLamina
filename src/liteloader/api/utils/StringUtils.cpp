#include "liteloader/api/utils/StringUtils.h"

#include <windows.h>

namespace ll::StringUtils {

std::wstring str2wstr(std::string_view str, uint codePage) {
    int len = MultiByteToWideChar(codePage, 0, str.data(), (int)str.size(), nullptr, 0);
    if (len == 0) { return {}; }
    std::wstring wstr(len, L'\0');
    MultiByteToWideChar(codePage, 0, str.data(), (int)str.size(), wstr.data(), len);
    return wstr;
}

std::string wstr2str(std::wstring_view str, uint codePage) {
    int len = WideCharToMultiByte(codePage, 0, str.data(), (int)str.size(), nullptr, 0, nullptr, nullptr);
    if (len == 0) { return {}; }
    std::string ret(len, '\0');
    WideCharToMultiByte(codePage, 0, str.data(), (int)str.size(), ret.data(), (int)ret.size(), nullptr, nullptr);
    return ret;
}

std::string str2str(std::string_view str, uint fromCodePage, uint toCodePage) {
    return wstr2str(str2wstr(str, fromCodePage), toCodePage);
}

} // namespace ll::StringUtils
