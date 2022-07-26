#pragma once
#include "../Global.h"
#include <vector>
#include <string>

// std::string -> std::wstring
LIAPI std::wstring str2wstr(const std::string& str);
LIAPI std::wstring str2wstr(const std::string& str, UINT codePage);

// std::wstring -> std::string
LIAPI std::string wstr2str(const std::wstring& wstr);
LIAPI std::string wstr2str(const std::wstring& wstr, UINT codePage);

// "2021-03-24"  ->  ["2021", "03", "24"]  (use '-' as split pattern)
LIAPI std::vector<std::string> SplitStrWithPattern(const std::string& str, const std::string& pattern);

// ReplaceStr("aaabbbcc","bbb","tt")
LIAPI std::string& ReplaceStr(std::string& str, const std::string& old_value, const std::string& new_value);

// StartsWith("helloworld", "hello") == true
LIAPI bool StartsWith(const std::string& str, const std::string& start);

// EndsWith("helloworld","world") == true
LIAPI bool EndsWith(const std::string& str, const std::string& end);

// "hello {Jim}" -> "hello {{Jim}}"  (for FMT bug)
LIAPI std::string FixCurlyBracket(std::string str);

#if _HAS_CXX20
LIAPI std::string UTF82String(std::u8string str);
#else
LIAPI std::string UTF82String(std::string str);
#endif
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
std::string IntToHexStr(const T& value, bool upper = true, bool no0x = true,
                        bool noLeadingZero = true) {
    std::string result;
    if (value < 0)
        result += '-';
    if (!no0x)
        result += "0x";
    auto hexStr = upper ? "0123456789ABCDEF" : "0123456789abcdef";
    bool leadingZero = true;
    for (int i = sizeof(T) * 2; i > 0; --i) {
        auto hex = (value >> (i - 1) * 4) & 0xF;
        if (noLeadingZero && leadingZero && hex == 0)
            continue;
        leadingZero = false;
        result += hexStr[hex];
    }
    return result;
}
