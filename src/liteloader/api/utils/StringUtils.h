#pragma once

#include <string>
#include <string_view>
#include <vector>

#include "liteloader/api/base/Macro.h"
#include "liteloader/api/base/StdInt.h"
#include "liteloader/api/memory/MemoryUtils.h"

namespace ll::StringUtils {

// "2021-03-24"  ->  ["2021", "03", "24"]  (use '-' as split pattern)
// for lifetime reason, use pointer instead of reference
inline std::vector<std::string_view> splitByPattern(const std::string* str, const std::string& pattern) {
    std::string_view s = *str;
    if (s.empty())
        return {};
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
 */
inline std::string replaceAll(std::string str, const std::string& old_value, const std::string& new_value) {
    for (std::string::size_type pos(0); pos != std::string::npos; pos += new_value.length()) {
        if ((pos = str.find(old_value, pos)) != std::string::npos)
            str.replace(pos, old_value.length(), new_value);
        else
            break;
    }
    return str;
}

// "hello {Jim}" -> "hello {{Jim}}"  (for FMT bug)
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
    if (value < 0)
        result += '-';
    if (!no0x)
        result += "0x";
    auto hexStr      = upperCase ? "0123456789ABCDEF" : "0123456789abcdef";
    bool leadingZero = true;
    for (int i = sizeof(T) * 2; i > 0; --i) {
        auto hex = (value >> (i - 1) * 4) & 0xF;
        if (noLeadingZero && leadingZero && hex == 0)
            continue;
        leadingZero  = false;
        result      += hexStr[hex];
    }
    return result;
}

namespace Encoding {
enum : uint {
    UTF16 = 0,
    ANSI  = 936,
    UTF8  = 65001,
};
} // namespace Encoding

LLNDAPI std::wstring str2wstr(std::string_view str, uint codePage = Encoding::UTF8);

LLNDAPI std::string wstr2str(std::wstring_view str, uint codePage = Encoding::UTF8);

LLNDAPI std::string str2str(std::string_view str, uint fromCodePage, uint toCodePage);

inline std::string u8str2str(std::u8string str) {
    std::string& tmp = *reinterpret_cast<std::string*>(&str);
    return {std::move(tmp)};
}

inline std::u8string str2u8str(std::string str) {
    std::u8string& tmp = *reinterpret_cast<std::u8string*>(&str);
    return {std::move(tmp)};
}

inline const std::string& u8str2strConst(const std::u8string& str) {
    return *reinterpret_cast<const std::string*>(&str);
}

inline const std::u8string& str2u8strConst(const std::string& str) {
    return *reinterpret_cast<const std::u8string*>(&str);
}

inline std::string_view u8sv2sv(std::u8string_view str) {
    return {reinterpret_cast<const char*>(str.data()), str.size()};
}

inline std::u8string_view sv2u8sv(std::string_view str) {
    return {reinterpret_cast<const char8_t*>(str.data()), str.size()};
}

} // namespace ll::StringUtils
