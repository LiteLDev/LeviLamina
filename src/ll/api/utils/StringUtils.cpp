#include "ll/api/utils/StringUtils.h"

#include "ctre/ctre-unicode.hpp"

#include "ll/api/base/Global.h"

#include "windows.h"

namespace ll::StringUtils {

fmt::text_style getTextStyleFromCode(std::string_view code) {
    if (code.size() <= 1) { return {}; }
    // TODO
    return {};
}

std::string getMcCodeFromTextStyle(fmt::text_style style) {
    // TODO
    return "";
}

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

std::string removeAnsiEscapeCode(std::string_view str) {
    std::stringstream res;
    for (auto& s : ctre::split<"\x1B(?:[@-Z\\-_]|\\[[0-?]*[ -/]*[@-~])">(str)) { res << s; }
    return res.str();
}

std::string replaceAnsiToMcCode(std::string_view str) {
    std::stringstream res;

    auto i     = ctre::iterator<"\x1B(?:[@-Z\\-_]|\\[[0-?]*[ -/]*[@-~])">(str);
    auto begin = i.orig_begin;
    for (; i.current_match; ++i) {
        if (begin != i.current_match.begin()) res << std::string_view{begin, i.current_match.begin()};
        begin = i.current;

        res << getMcCodeFromTextStyle(getTextStyleFromCode(i.current_match.view()));
    }
    if (begin != str.end()) res << std::string_view{begin, str.end()};
    return res.str();
}

} // namespace ll::StringUtils
