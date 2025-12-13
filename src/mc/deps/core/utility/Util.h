#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/utility/NumberConversionResult.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
class I18n;
class ListTag;
class SemVersion;
namespace Json { class Value; }
namespace Util { struct string_hash; }
// clang-format on

namespace Util {
// functions
// NOLINTBEGIN
MCNAPI_C void _breakIntoWordsAndFindProfanity(
    ::std::string_view                                                                          str,
    ::std::vector<::std::pair<int, int>> const&                                                 originalStrIndexes,
    ::brstd::flat_set<char, ::std::less<char>, ::std::vector<char>> const&                      escapeChars,
    ::std::set<::std::pair<int, int>>&                                                          profanityLocations,
    ::std::unordered_map<::std::string, int, ::Util::string_hash, ::std::equal_to<void>> const& exactMap,
    ::std::unordered_set<::std::string, ::Util::string_hash, ::std::equal_to<void>> const&      containsSet
);

MCNAPI_C void _recordProfanityLocationInWord(
    ::std::string_view                                                                          word,
    ::std::vector<::std::pair<int, int>> const&                                                 originalStrIndexes,
    int                                                                                         start,
    int                                                                                         end,
    ::std::set<::std::pair<int, int>>&                                                          profanityLocations,
    ::std::unordered_map<::std::string, int, ::Util::string_hash, ::std::equal_to<void>> const& exactMap,
    ::std::unordered_set<::std::string, ::Util::string_hash, ::std::equal_to<void>> const&      containsSet
);

MCNAPI ::std::string base64_decode(::std::string const& encoded_string);

MCNAPI ::std::string base64_encode(uchar const* bytes_to_encode, uint64 in_len, bool pad);

MCNAPI ::std::string base64url_decode(::std::string encoded);

MCNAPI ::std::string base64url_encode(::std::string str);

MCNAPI_C ::std::string caseFold(::std::string_view str);

MCNAPI_C bool containsUnicodeChar(::std::string const& str);

MCNAPI ::std::string ensureNamespace(::std::string const& id, ::std::string_view defaultNamespace);

MCNAPI bool equalIgnoreCase(::std::string_view lhs, ::std::string_view rhs);

MCNAPI_C ::std::string filterProfanityFromString(
    ::std::string_view                                                                          inputStr,
    ::std::unordered_map<::std::string, int, ::Util::string_hash, ::std::equal_to<void>> const& profanityExactMap,
    ::std::unordered_set<::std::string, ::Util::string_hash, ::std::equal_to<void>> const&      profanityContainsSet
);

MCNAPI_C ::std::string findLastColorCode(::std::string_view s, bool includeResetCode);

MCNAPI_C ::std::set<::std::pair<int, int>> findProfanityInString(
    ::std::string_view                                                                          inputStr,
    ::std::unordered_map<::std::string, int, ::Util::string_hash, ::std::equal_to<void>> const& exactMap,
    ::std::unordered_set<::std::string, ::Util::string_hash, ::std::equal_to<void>> const&      containsSet
);

MCNAPI ::std::string formatTickDuration(int ticks);

MCNAPI ::std::string fromHex(::std::string_view input);

MCNAPI ::BidirectionalUnorderedMap<int, uint64> generateHashMapFromListTag(::ListTag const& enumValues);

MCNAPI ::std::string generateRandomId(int modifier);

MCNAPI_C ::std::string getActiveFormattingCodes(::std::string const& str);

MCNAPI_C ::std::string getFilesizeString(uint64 filesize);

MCNAPI_C ::std::string getFilesizeString(uint64 filesize, ::I18n& loc);

MCNAPI_C ::std::string getPackDataDownloadProgressString(
    uint64 downloadedDataSize,
    uint64 totalDownloadDataSize,
    ::std::string (*getFileSizeString)(uint64)
);

MCNAPI_C ::std::string getPackDownloadProgressString(uint64 downloadedPacks, uint64 packsToDownload);

MCNAPI_C ::std::string getVirtualCurrencyStringTTS(uint amount);

MCNAPI uint hashCodeAsUtf16(::std::string_view sv);

MCNAPI bool isValidNamespaceFormat(::std::string_view name);

MCNAPI bool isValidUTF8(::std::string_view content);

MCNAPI bool isVanillaNamespace(::std::string const& identifier);

MCNAPI_C void loadGameVersion(::GameVersion& version, ::Json::Value const& versionNode);

MCNAPI void loadGameVersion(::SemVersion& version, ::Json::Value const& versionNode);

MCNAPI void normalizeLineEndings(::std::string& str);

MCNAPI ::std::string removeChars(::std::string str, ::std::string const& characters);

MCNAPI_C ::std::string removeFormattingAndColorCodes(::std::string const& input, bool redactObfuscatedText);

MCNAPI ::std::string removeIllegalChars(::std::string str);

MCNAPI_S ::std::string removeTrailingSpaces(::std::string const& str);

MCNAPI_C void replaceUtf8CharactersWithAscii(
    ::std::string&                                         target,
    ::std::vector<::std::pair<::std::string, char>> const& translateMap
);

MCNAPI ::std::istream& safeGetline(::std::istream& inputStream, ::std::string& outString);

MCNAPI_C ::std::string safeString(char const* text);

MCNAPI_C ::std::string simpleFormat(::std::string const& format, ::std::vector<::std::string> const& parameters);

MCNAPI ::std::vector<::std::string> split(::std::string_view view, char delim);

MCNAPI ::std::vector<::std::string> splitAndDiscardEmpty(::std::string const& str, char delim);

MCNAPI_C ::std::vector<::std::string> splitAndDiscardEmpty(
    ::std::string const&                str,
    ::std::vector<::std::string> const& delims,
    bool                                includeDelimCharsInResult
);

MCNAPI_C ::std::vector<::std::string>
splitLines(::std::string const& content, ::std::istream& (*fnGetline)(::std::istream&, ::std::string&));

MCNAPI ::std::vector<::std::string> splitLines(
    ::std::string const&                str,
    ::std::vector<::std::string> const& delims,
    bool                                includeDelimCharsInResult,
    bool                                includeEmptyLines,
    ::std::istream& (*fnGetline)(::std::istream&, ::std::string&)
);

MCNAPI ::std::vector<::std::string>& splitString(::std::string_view s, char delim, ::std::vector<::std::string>& elems);

MCNAPI ::std::vector<::std::string_view>&
splitStringAsViews(::std::string_view s, char delim, ::std::vector<::std::string_view>& elems);

MCNAPI ::std::vector<::std::string_view> splitToViews(::std::string_view view, char delim);

MCNAPI_C bool startsWith(::std::string_view str, ::std::string_view starts);

MCNAPI_C bool stringContains(::std::string const& s, char character);

MCNAPI_C bool stringIsInVector(::std::vector<::std::string> const& stringVector, ::std::string const& searchString);

MCNAPI ::std::string
stringReplace(::std::string str, ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> replacements);

MCNAPI ::std::string& stringReplace(::std::string& s, ::std::string const& src, ::std::string const& dst, int maxCount);

MCNAPI ::std::string
stringReplaceCopy(::std::string const& s, ::std::string const& src, ::std::string const& dst, int maxCount);

MCNAPI ::std::string stringTrim(::std::string const& s);

MCNAPI ::std::string stringTrim(::std::string const& s, ::std::string const& chars);

MCNAPI_C ::std::string stringUTF16ToUTF8(::std::basic_string_view<wchar_t, ::std::char_traits<wchar_t>> inputStr);

MCNAPI bool toBool(::std::string const& input, bool& destination);

MCNAPI ::std::string toCamelCase(::std::string const& src, char delimiter);

MCNAPI_C ::std::string toHex(::std::string_view input);

MCNAPI ::Util::NumberConversionResult toIntWithMinMax(::std::string_view inputStr, int& destination, int min, int max);

MCNAPI_C ::std::string toLocalizedString(float f, int precision);

MCNAPI_C ::std::string toLocalizedString(
    float                f,
    int                  precision,
    ::std::string const& digitGroupSeparator,
    ::std::string const& decimalSeparator
);

MCNAPI_C ::std::string toLower(char const* inString);

MCNAPI ::std::string toLower(::std::string_view inString);

MCNAPI_C bool toSafeNumber(::std::string const& str, uint& output);

MCNAPI_C ::std::string toString(::std::basic_string_view<wchar_t, ::std::char_traits<wchar_t>> inputStr);

MCNAPI ::std::string toStringWithPaddedZeroes(uint number, uchar digitCount);

MCNAPI ::std::string toUpper(::std::string_view inString);

MCNAPI_C uint64 u64FromString(::std::string const& input);

MCNAPI_C int utf8len(::std::string const& str);

MCNAPI int utf8len(::std::string_view str);

MCNAPI_C int utf8lenNoColorCodes(::std::string const& str);

MCNAPI ::std::string utf8substring(::std::string const& str, int startIndex, int endIndex);

MCNAPI_C ::std::vector<::std::string> utf8substringCharacters(::std::string const& str, int startIndex, int endIndex);

MCNAPI bool validateIdentifier(
    ::std::string const&                       id,
    ::LogArea                                  logArea,
    bool                                       allowMinecraftNamespace,
    ::std::pair<::std::string, ::std::string>* idNameOut
);

MCNAPI bool validateIdentifierChunk(::std::string const& chunk, ::LogArea logArea);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& EMPTY_GUID();

MCNAPI ::std::string const& EMPTY_STRING();

MCNAPI ::std::string const& HEX_CHARS();

MCNAPI ::std::string const& NEW_LINE();
// NOLINTEND

} // namespace Util
