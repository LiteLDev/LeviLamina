#pragma once

#include <string>
#include <string_view>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/memory/MemoryUtils.h"

#include "fmt/color.h"
#include "fmt/core.h"

namespace ll::StringUtils {

// "2021-03-24"  ->  ["2021", "03", "24"]  (use '-' as split pattern)
// for lifetime reason, use pointer instead of reference
inline std::vector<std::string_view> splitByPattern(const std::string* str, std::string const& pattern) {
    std::string_view s = *str;
    if (s.empty()) return {};
    size_t pos  = s.find(pattern);
    size_t size = s.size();

    std::vector<std::string_view> ret;
    while (pos != std::string::npos) {
        ret.push_back(s.substr(0, pos));
        s   = s.substr(pos + pattern.size(), size - pos - pattern.size());
        pos = s.find(pattern);
    }
    ret.push_back(s);
    return ret;
}

/**
 * @brief Replace all founded sub std::string and modify input str
 * @param str       The input std::string
 * @param oldValue  The sub string to be replaced
 * @param newValue  The string to replace with
 * @return std::string  The modified input std::string
 */
inline std::string replaceAll(std::string str, std::string const& oldValue, std::string const& newValue) {
    for (std::string::size_type pos(0); pos != std::string::npos; pos += newValue.length()) {
        if ((pos = str.find(oldValue, pos)) != std::string::npos) str.replace(pos, oldValue.length(), newValue);
        else break;
    }
    return str;
}

// "hello {Jim}" -> "hello {{Jim}}"  (for fmt bug)
inline std::string escapeCurlyBracket(std::string str) {
    replaceAll(str, "{", "{{");
    replaceAll(str, "}", "}}");
    return str;
}

/**
 * @brief Integer to hex string.
 *
 * @tparam T      The integer type
 * @param  value  The integer value
 * @param  upper  Whether to use upper case (0x1A or 0x1a)
 * @param  no0x   Whether to omit 0x prefix
 * @param  noLeadingZero  Whether to omit leading zero
 * @return std::string    The hex string
 *
 * @par Example
 * @code
 * IntToHexStr(15); // "F"
 * IntToHexStr(16, true, true, false); // "0000000F"
 * @endcode
 */
template <typename T>
    requires std::is_integral_v<T>
inline std::string intToHexStr(T value, bool upperCase = true, bool no0x = true, bool noLeadingZero = true) {
    std::string result;
    if (value < 0) result += '-';
    if (!no0x) result += "0x";
    auto hexStr      = upperCase ? "0123456789ABCDEF" : "0123456789abcdef";
    bool leadingZero = true;
    for (int i = sizeof(T) * 2; i > 0; --i) {
        auto hex = (value >> (i - 1) * 4) & 0xF;
        if (noLeadingZero && leadingZero && hex == 0) continue;
        leadingZero  = false;
        result      += hexStr[hex];
    }
    return result;
}

template <typename S, typename Char = fmt::char_t<S>>
std::string applyTextStyle(fmt::text_style const& ts, S const& format_str) {
    fmt::basic_memory_buffer<Char> buf;
    auto                           fmt       = fmt::detail::to_string_view(format_str);
    bool                           has_style = false;
    if (ts.has_emphasis()) {
        has_style     = true;
        auto emphasis = fmt::detail::make_emphasis<Char>(ts.get_emphasis());
        buf.append(emphasis.begin(), emphasis.end());
    }
    if (ts.has_foreground()) {
        has_style       = true;
        auto foreground = fmt::detail::make_foreground_color<Char>(ts.get_foreground());
        buf.append(foreground.begin(), foreground.end());
    }
    if (ts.has_background()) {
        has_style       = true;
        auto background = fmt::detail::make_background_color<Char>(ts.get_background());
        buf.append(background.begin(), background.end());
    }
    buf.append(fmt.begin(), fmt.end());
    if (has_style) fmt::detail::reset_color<Char>(buf);
    return fmt::to_string(buf);
}

std::string removeEscapeCode(std::string_view str);

std::string replaceAnsiToMcCode(std::string_view str);

std::string replaceMcToAnsiCode(std::string_view str);

namespace CodePage {
enum : uint {
    UTF16 = 0,
    ANSI  = 936,
    UTF8  = 65001,
};
} // namespace CodePage

LLNDAPI std::wstring str2wstr(std::string_view str, uint codePage = CodePage::UTF8);

LLNDAPI std::string wstr2str(std::wstring_view str, uint codePage = CodePage::UTF8);

LLNDAPI std::string str2str(std::string_view str, uint fromCodePage, uint toCodePage);

inline std::string u8str2str(std::u8string str) {
    std::string& tmp = *reinterpret_cast<std::string*>(&str);
    return {std::move(tmp)};
}

inline std::u8string str2u8str(std::string str) {
    std::u8string& tmp = *reinterpret_cast<std::u8string*>(&str);
    return {std::move(tmp)};
}

inline std::string const& u8str2strConst(std::u8string const& str) {
    return *reinterpret_cast<const std::string*>(&str);
}

inline std::u8string const& str2u8strConst(std::string const& str) {
    return *reinterpret_cast<const std::u8string*>(&str);
}

inline std::string_view u8sv2sv(std::u8string_view str) {
    return {reinterpret_cast<char const*>(str.data()), str.size()};
}

inline std::u8string_view sv2u8sv(std::string_view str) {
    return {reinterpret_cast<const char8_t*>(str.data()), str.size()};
}

} // namespace ll::StringUtils
