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
#ifdef LL_PLAT_C
MCAPI void _breakIntoWordsAndFindProfanity(
    ::std::string_view                                                                          str,
    ::std::vector<::std::pair<int, int>> const&                                                 originalStrIndexes,
    ::brstd::flat_set<char, ::std::less<char>, ::std::vector<char>> const&                      escapeChars,
    ::std::set<::std::pair<int, int>>&                                                          profanityLocations,
    ::std::unordered_map<::std::string, int, ::Util::string_hash, ::std::equal_to<void>> const& exactMap,
    ::std::unordered_set<::std::string, ::Util::string_hash, ::std::equal_to<void>> const&      containsSet
);
#endif

#ifdef LL_PLAT_S
MCAPI ::std::vector<::std::string> _getStringsFromViews(::std::vector<::std::string_view> const& views);
#endif

#ifdef LL_PLAT_C
MCAPI ::std::vector<::std::string> _getStringsFromViews(::std::vector<::std::string_view> const& views);
#endif

MCAPI void _logIfValidLogArea(::LogArea logArea, ::std::string const& msg);

#ifdef LL_PLAT_C
MCAPI void _recordProfanityLocationInWord(
    ::std::string_view                                                                          word,
    ::std::vector<::std::pair<int, int>> const&                                                 originalStrIndexes,
    int                                                                                         start,
    int                                                                                         end,
    ::std::set<::std::pair<int, int>>&                                                          profanityLocations,
    ::std::unordered_map<::std::string, int, ::Util::string_hash, ::std::equal_to<void>> const& exactMap,
    ::std::unordered_set<::std::string, ::Util::string_hash, ::std::equal_to<void>> const&      containsSet
);
#endif

#ifdef LL_PLAT_S
MCAPI int _splitInto(
    ::std::string const&                str,
    ::std::vector<::std::string> const& delims,
    bool                                includeDelimCharsInResult,
    ::std::vector<::std::string>*       result
);
#endif

#ifdef LL_PLAT_C
MCAPI int _splitInto(
    ::std::string const&                str,
    ::std::vector<::std::string> const& delims,
    bool                                includeDelimCharsInResult,
    ::std::vector<::std::string>*       result
);
#endif

MCAPI ::std::string base64_decode(::std::string const& encoded_string);

MCAPI ::std::string base64_encode(uchar const* bytes_to_encode, uint64 in_len, bool pad);

MCAPI ::std::string base64url_decode(::std::string encoded);

MCAPI ::std::string base64url_encode(::std::string str);

MCAPI ::std::string caseFold(::std::string_view str);

#ifdef LL_PLAT_C
MCAPI uint64 countSplitAndDiscardEmpty(::std::string const& str, char delim);
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string cpToUTF8(::std::unordered_map<uchar, ::std::string> const& codePageMap, ::std::string_view content);
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string cpToUTF8(::std::unordered_map<uchar, ::std::string> const& codePageMap, ::std::string_view content);
#endif

MCAPI ::std::string ensureNamespace(::std::string const& id, ::std::string_view defaultNamespace);

MCAPI ::std::string ensureNamespace(::std::string_view id, ::std::string_view defaultNamespace);

#ifdef LL_PLAT_C
MCAPI ::std::string filterProfanityFromString(
    ::std::string_view                                                                          inputStr,
    ::std::unordered_map<::std::string, int, ::Util::string_hash, ::std::equal_to<void>> const& profanityExactMap,
    ::std::unordered_set<::std::string, ::Util::string_hash, ::std::equal_to<void>> const&      profanityContainsSet
);

MCAPI ::std::set<::std::pair<int, int>> findProfanityInString(
    ::std::string_view                                                                          inputStr,
    ::std::unordered_map<::std::string, int, ::Util::string_hash, ::std::equal_to<void>> const& exactMap,
    ::std::unordered_set<::std::string, ::Util::string_hash, ::std::equal_to<void>> const&      containsSet
);
#endif

MCAPI ::std::string formatTickDuration(int ticks);

MCAPI ::std::string fromHex(::std::string_view input);

MCAPI ::BidirectionalUnorderedMap<int, uint64> generateHashMapFromListTag(::ListTag const& enumValues);

MCAPI ::std::string generateRandomId(int modifier);

#ifdef LL_PLAT_C
MCAPI ::std::string getActiveFormattingCodes(::std::string const& str);

MCAPI ::std::string getFilesizeString(uint64 filesize);

MCAPI ::std::string getFilesizeString(uint64 filesize, ::I18n& loc);

MCAPI ::std::string getLocalizedStoreDisplayName(::std::string const& storeId);

MCAPI ::std::string_view getNameWithoutNamespace(::std::string_view name);

MCAPI ::std::string getPackDataDownloadProgressString(
    uint64 downloadedDataSize,
    uint64 totalDownloadDataSize,
    ::std::string (*getFileSizeString)(uint64)
);

MCAPI ::std::string getVirtualCurrencyStringTTS(uint amount);

MCAPI ::std::string getVirtualCurrencyStringTTS(::std::string const& currency);

MCAPI bool isIntegral(::std::string const& str, bool allowPlusSign);
#endif

MCAPI bool isValidNamespaceFormat(::std::string_view name);

#ifdef LL_PLAT_C
MCAPI bool isValidPfid(::std::string const& inputStr);
#endif

MCAPI bool isVanillaNamespace(::std::string const& identifier);

#ifdef LL_PLAT_C
MCAPI void loadGameVersion(::GameVersion& version, ::Json::Value const& versionNode);
#endif

MCAPI void loadGameVersion(::SemVersion& version, ::Json::Value const& versionNode);

MCAPI void normalizeLineEndings(::std::string& str);

MCAPI ::std::string removeChars(::std::string str, ::std::string const& characters);

MCAPI ::std::string removeFormattingAndColorCodes(::std::string const& input, bool redactObfuscatedText);

MCAPI ::std::string removeIllegalChars(::std::string str);

#ifdef LL_PLAT_C
MCAPI ::std::string removeLeadingSpaces(::std::string const& str);
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string removeTrailingSpaces(::std::string const& str);
#endif

#ifdef LL_PLAT_C
MCAPI void replaceSingleUtf8CharacterWithAscii(::std::string& toChange, ::std::string const& toFind, char replacement);
#endif

MCAPI ::std::istream& safeGetline(::std::istream& inputStream, ::std::string& outString);

#ifdef LL_PLAT_C
MCAPI ::std::string safeString(char const* text);
#endif

MCAPI ::std::string simpleFormat(::std::string const& format, ::std::vector<::std::string> const& parameters);

MCAPI ::std::vector<::std::string> split(::std::string_view view, char delim);

MCAPI ::std::vector<::std::string> splitAndDiscardEmpty(::std::string_view str, char delim);

MCAPI ::std::vector<::std::string>
splitLines(::std::string const& content, ::std::istream& (*fnGetline)(::std::istream&, ::std::string&));

MCAPI ::std::vector<::std::string> splitLines(
    ::std::string const&                str,
    ::std::vector<::std::string> const& delims,
    bool                                includeDelimCharsInResult,
    bool                                includeEmptyLines,
    ::std::istream& (*fnGetline)(::std::istream&, ::std::string&)
);

MCAPI bool stringContains(::std::string const& s, char character);

MCAPI ::std::string
stringReplace(::std::string str, ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> replacements);

MCAPI ::std::string& stringReplace(::std::string& s, ::std::string const& src, ::std::string const& dst, int maxCount);

MCAPI ::std::string
stringReplaceCopy(::std::string const& s, ::std::string const& src, ::std::string const& dst, int maxCount);

MCAPI ::std::string stringTrim(::std::string const& s);

MCAPI ::std::string stringTrim(::std::string const& s, ::std::string const& chars);

MCAPI ::std::string_view stringTrim(::std::string_view s, ::std::string_view chars);

MCAPI void timeoutForDuration(::std::chrono::seconds duration);

MCAPI bool toBool(::std::string const& input, bool& destination);

MCAPI ::std::string toCamelCase(::std::string const& src, char delimiter);

MCAPI ::std::string toHex(::std::string_view input);

MCAPI ::Util::NumberConversionResult toIntWithMinMax(::std::string_view inputStr, int& destination, int min, int max);

#ifdef LL_PLAT_C
MCAPI ::std::string toLocalizedString(float f, int precision);

MCAPI ::std::string toLocalizedString(
    float                f,
    int                  precision,
    ::std::string const& digitGroupSeparator,
    ::std::string const& decimalSeparator
);

MCAPI ::std::string toLower(char const* inString);
#endif

MCAPI ::std::string toLower(::std::string_view inString);

MCAPI ::std::string toPascalCase(::std::string const& src, char delimiter);

#ifdef LL_PLAT_C
MCAPI bool toSafeNumber(::std::string const& str, uint& output);

MCAPI bool toSafeNumber(::std::string const& str, uint64& output);
#endif

MCFOLD ::std::string toString(::std::string_view inputStr);

MCAPI ::std::string toStringWithPaddedZeroes(uint number, uchar digitCount);

MCAPI ::std::string toUpper(::std::string_view inString);

#ifdef LL_PLAT_C
MCAPI int utf8len(::std::string const& str);

MCAPI int utf8lenNoColorCodes(::std::string_view str);
#endif

MCAPI ::std::string utf8substring(::std::string const& str, int startIndex, int endIndex);

#ifdef LL_PLAT_C
MCAPI ::std::vector<::std::string> utf8substringCharacters(::std::string const& str, int startIndex, int endIndex);
#endif

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
MCAPI ::std::unordered_map<uchar, ::std::string> const& CP1252_TO_UTF8();

MCAPI ::std::unordered_map<uchar, ::std::string> const& CP437_TO_UTF8();

MCAPI ::std::string const& EMPTY_GUID();

MCAPI ::std::string const& EMPTY_STRING();

#ifdef LL_PLAT_C
MCAPI ::std::string const& HEX_CHARS();
#endif

MCAPI ::std::string const& NEW_LINE();
// NOLINTEND

} // namespace Util
