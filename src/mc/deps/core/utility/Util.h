#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/utility/NumberConversionResult.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class ListTag;
class SemVersion;
namespace Json { class Value; }
// clang-format on

namespace Util {
// functions
// NOLINTBEGIN
MCAPI void _breakIntoWordsAndFindProfanity(
    ::std::string&                                  str,
    ::std::vector<::std::pair<int, int>> const&     originalStrIndexes,
    ::std::unordered_set<char> const&               escapeChars,
    ::std::set<::std::pair<int, int>>&              profanityLocations,
    ::std::unordered_map<::std::string, int> const& exactMap,
    ::std::unordered_set<::std::string> const&      containsSet
);

MCAPI void _recordProfanityLocationInWord(
    ::std::string const&                            word,
    ::std::vector<::std::pair<int, int>> const&     originalStrIndexes,
    int                                             start,
    int                                             end,
    ::std::set<::std::pair<int, int>>&              profanityLocations,
    ::std::unordered_map<::std::string, int> const& exactMap,
    ::std::unordered_set<::std::string> const&      containsSet
);

MCAPI ::std::string base64_decode(::std::string const& encoded_string);

MCAPI ::std::string base64_encode(::std::string const& str, bool pad);

MCAPI ::std::string base64_encode(uchar const* bytes_to_encode, uint64 in_len, bool pad);

MCAPI ::std::string base64url_decode(::std::string encoded);

MCAPI ::std::string base64url_encode(::std::string str);

MCAPI char const* boolToString(bool value);

MCAPI ::std::string& clearAndReturn(::std::string& s);

MCAPI bool compareNoCase(::std::string_view lhs, ::std::string_view rhs);

MCAPI ::std::string cp1252ToUTF8(::std::string const& content);

MCAPI ::std::string cp437ToUTF8(::std::string const& content);

MCAPI void crashOnPurpose();

MCAPI bool decompressRaw(::std::string const& input, ::std::string& output);

MCAPI bool decompressRaw(::std::string_view input, ::std::string& output);

MCAPI bool endsWith(::std::string_view s, ::std::string_view ends);

MCAPI bool endsWithCaseInsensitive(::std::string const& s, ::std::string const& ends);

MCAPI ::std::string ensureNamespace(::std::string_view id, ::std::string_view defaultNamespace);

MCAPI ::std::string ensureNamespace(::std::string const& id, ::std::string_view defaultNamespace);

MCAPI ::std::string filterProfanityFromString(
    ::std::string const&                            inputStr,
    ::std::unordered_map<::std::string, int> const& profanityExactMap,
    ::std::unordered_set<::std::string> const&      profanityContainsSet
);

MCAPI ::std::set<::std::pair<int, int>> findProfanityInString(
    ::std::string const&                            inputStr,
    ::std::unordered_map<::std::string, int> const& exactMap,
    ::std::unordered_set<::std::string> const&      containsSet
);

MCAPI ::std::string format(char const*, ...);

MCAPI ::std::string formatTickDuration(int ticks);

MCAPI void freeStringMemory(::std::string& toFree);

MCAPI ::std::string fromHex(::std::string_view input);

MCAPI ::BidirectionalUnorderedMap<int, uint64> generateHashMapFromListTag(::ListTag const& enumValues);

MCAPI ::std::string generateRandomId(int modifier);

MCAPI ::std::string getNameWithoutNamespace(::std::string const& name);

MCAPI ::std::string getNamespace(::std::string const& name);

MCAPI uint hashCodeAsUtf16(::std::string_view sv);

MCAPI bool isIntegral(::std::string const& str, bool allowPlusSign);

MCAPI bool isNumber(::std::string const& str);

MCAPI bool isValidNamespaceFormat(::std::string const& name);

MCAPI bool isValidPfid(::std::string const& inputStr);

MCAPI bool isValidUTF8(::std::string const& content);

MCAPI bool isVanillaNamespace(::std::string const& identifier);

MCAPI void loadGameVersion(::SemVersion& version, ::Json::Value const& versionNode);

MCAPI void normalizeLineEndings(::std::string& str);

MCAPI ::std::string removeChars(::std::string str, ::std::string const& characters);

MCAPI ::std::string removeIllegalChars(::std::string str);

MCAPI ::std::string removeTrailingSpaces(::std::string const& str);

MCAPI ::std::istream& safeGetline(::std::istream& inputStream, ::std::string& outString);

MCAPI ::std::vector<::std::string> split(::std::string_view view, char delim);

MCAPI ::std::vector<::std::string> splitAndDiscardEmpty(::std::string const& str, char delim);

MCAPI ::std::vector<::std::string> splitLines(
    ::std::string const&                str,
    ::std::vector<::std::string> const& delims,
    bool                                includeDelimCharsInResult,
    bool                                includeEmptyLines,
    ::std::istream& (*fnGetline)(::std::istream&, ::std::string&)
);

MCAPI ::std::vector<::std::string>& splitString(::std::string_view s, char delim, ::std::vector<::std::string>& elems);

MCAPI ::std::vector<::std::string_view>&
splitStringAsViews(::std::string_view s, char delim, ::std::vector<::std::string_view>& elems);

MCAPI bool startsWith(::std::string_view s, ::std::string_view start);

MCAPI bool stringContains(::std::string const& s, char character);

MCAPI ::std::string& stringReplace(::std::string& s, ::std::string const& src, ::std::string const& dst, int maxCount);

MCAPI ::std::string stringTrim(::std::string const& s);

MCAPI ::std::string stringTrim(::std::string const& s, ::std::string const& chars);

MCAPI void stripBOM(::std::string& contents);

MCAPI void timeoutForDuration(::std::chrono::seconds duration);

MCAPI bool toBool(::std::string const& input, bool& destination);

MCAPI ::std::string toCamelCase(::std::string const& src, char delimiter);

MCAPI ::std::string toHex(::std::string_view input);

MCAPI ::Util::NumberConversionResult toIntWithMinMax(::std::string_view inputStr, int& destination, int min, int max);

MCAPI ::std::string toLower(char const* inString);

MCAPI ::std::string toLower(::std::string_view inString);

MCAPI void toLowerInPlace(::std::string& str);

MCAPI ::std::string toPascalCase(::std::string const& src, char delimiter);

MCAPI ::std::string toString(::std::string_view inputStr);

MCAPI ::std::string toString(::std::basic_string_view<wchar_t, ::std::char_traits<wchar_t>> inputStr);

MCAPI ::std::string toString(float f, int precision);

MCAPI ::std::string toStringWithPaddedZeroes(uint number, uchar digitCount);

MCAPI ::std::string toUpper(::std::string_view inString);

MCAPI void toUpperInPlace(::std::string& str);

MCAPI ::std::wstring toWideString(::std::string_view inputStr);

MCAPI int utf8len(::std::string const& str);

MCAPI ::std::string utf8substring(::std::string const& str, int startIndex, int endIndex);

MCAPI ::std::string vFormat(char const* format, char* args);

MCAPI bool validateIdentifier(
    ::std::string const&                       id,
    ::LogArea                                  logArea,
    bool                                       allowMinecraftNamespace,
    ::std::pair<::std::string, ::std::string>* idNameOut
);

MCAPI bool validateIdentifierChunk(::std::string const& chunk, ::LogArea logArea);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI int const& COLOR_CODE();

MCAPI ::std::string const& EMPTY_GUID();

MCAPI ::std::string const& EMPTY_STRING();

MCAPI ::std::string const& HEX_CHARS();

MCAPI ::std::string const& NEW_LINE();
// NOLINTEND

} // namespace Util
