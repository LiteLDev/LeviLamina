#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/utility/NumberConversionResult.h"
#include "mc/deps/core/utility/buffer_span.h"
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
MCNAPI ::std::vector<::std::string> _getStringsFromViews(::std::vector<::std::string_view> const& views);
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::vector<::std::string> _getStringsFromViews(::std::vector<::std::string_view> const& views);
#endif

#ifdef LL_PLAT_C
MCNAPI int _splitInto(
    ::std::string const&                str,
    ::std::vector<::std::string> const& delims,
    bool                                includeDelimCharsInResult,
    ::std::vector<::std::string>*       result
);
#endif

#ifdef LL_PLAT_S
MCNAPI int _splitInto(
    ::std::string const&                str,
    ::std::vector<::std::string> const& delims,
    bool                                includeDelimCharsInResult,
    ::std::vector<::std::string>*       result
);
#endif

MCNAPI ::std::string base64_decode(::std::string const& encoded_string);

MCNAPI ::std::string base64_encode(uchar const* bytes_to_encode, uint64 in_len, bool pad);

MCNAPI ::std::string base64url_decode(::std::string encoded);

MCNAPI ::std::string base64url_encode(::std::string str);

MCNAPI ::std::string caseFold(::std::string_view str);

#ifdef LL_PLAT_C
MCNAPI uint64 countSplitAndDiscardEmpty(::std::string const& str, char delim);

MCNAPI ::std::string
cpToUTF8(::std::unordered_map<uchar, ::std::string> const& codePageMap, ::std::string_view content);
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::string
cpToUTF8(::std::unordered_map<uchar, ::std::string> const& codePageMap, ::std::string_view content);
#endif

MCNAPI ::std::string ensureNamespace(::std::string const& id, ::std::string_view defaultNamespace);

MCNAPI ::std::string ensureNamespace(::std::string_view id, ::std::string_view defaultNamespace);

#ifdef LL_PLAT_C
MCNAPI ::std::string filterProfanityFromString(
    ::std::string_view                                                                          inputStr,
    ::std::unordered_map<::std::string, int, ::Util::string_hash, ::std::equal_to<void>> const& profanityExactMap,
    ::std::unordered_set<::std::string, ::Util::string_hash, ::std::equal_to<void>> const&      profanityContainsSet
);

MCNAPI ::std::string findLastColorCode(::std::string_view s, bool includeResetCode);

MCNAPI ::std::set<::std::pair<int, int>> findProfanityInString(
    ::std::string_view                                                                          inputStr,
    ::std::unordered_map<::std::string, int, ::Util::string_hash, ::std::equal_to<void>> const& exactMap,
    ::std::unordered_set<::std::string, ::Util::string_hash, ::std::equal_to<void>> const&      containsSet
);
#endif

MCNAPI ::std::string formatTickDuration(int ticks);

MCNAPI ::std::string fromHex(::std::string_view input);

MCNAPI ::BidirectionalUnorderedMap<int, uint64> generateHashMapFromListTag(::ListTag const& enumValues);

MCNAPI ::std::string generateRandomId(int modifier);

#ifdef LL_PLAT_C
MCNAPI ::std::string getActiveFormattingCodes(::std::string const& str);

MCNAPI ::std::string getFilesizeString(uint64 filesize);

MCNAPI ::std::string getFilesizeString(uint64 filesize, ::I18n& loc);

MCNAPI ::std::string getLocalizedStoreDisplayName(::std::string const& storeId);

MCNAPI ::std::string getPackDataDownloadProgressString(
    uint64 downloadedDataSize,
    uint64 totalDownloadDataSize,
    ::std::string (*getFileSizeString)(uint64)
);

MCNAPI ::std::string getVirtualCurrencyStringTTS(uint amount);

MCNAPI ::std::string getVirtualCurrencyStringTTS(::std::string const& currency);
#endif

MCNAPI bool isValidNamespaceFormat(::std::string_view name);

MCNAPI bool isVanillaNamespace(::std::string const& identifier);

#ifdef LL_PLAT_C
MCNAPI void loadGameVersion(::GameVersion& version, ::Json::Value const& versionNode);
#endif

MCNAPI void loadGameVersion(::SemVersion& version, ::Json::Value const& versionNode);

MCNAPI void normalizeLineEndings(::std::string& str);

MCNAPI ::std::string removeChars(::std::string str, ::std::string const& characters);

MCNAPI ::std::string removeFormattingAndColorCodes(::std::string const& input, bool redactObfuscatedText);

MCNAPI ::std::string removeIllegalChars(::std::string str);

#ifdef LL_PLAT_C
MCNAPI ::std::string removeLeadingSpaces(::std::string const& str);
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::string removeTrailingSpaces(::std::string const& str);
#endif

#ifdef LL_PLAT_C
MCNAPI void replaceSingleUtf8CharacterWithAscii(::std::string& toChange, ::std::string const& toFind, char replacement);
#endif

MCNAPI ::std::istream& safeGetline(::std::istream& inputStream, ::std::string& outString);

#ifdef LL_PLAT_C
MCNAPI ::std::string safeString(char const* text);

MCNAPI ::std::string simpleFormat(::std::string const& format, ::std::vector<::std::string> const& parameters);
#endif

MCNAPI ::std::vector<::std::string> split(::std::string_view view, char delim);

MCNAPI ::std::vector<::std::string> splitAndDiscardEmpty(::std::string_view str, char delim);

MCNAPI ::std::vector<::std::string>
splitLines(::std::string const& content, ::std::istream& (*fnGetline)(::std::istream&, ::std::string&));

MCNAPI ::std::vector<::std::string> splitLines(
    ::std::string const&                str,
    ::std::vector<::std::string> const& delims,
    bool                                includeDelimCharsInResult,
    bool                                includeEmptyLines,
    ::std::istream& (*fnGetline)(::std::istream&, ::std::string&)
);

MCNAPI bool stringContains(::std::string const& s, char character);

MCNAPI ::std::string
stringReplace(::std::string str, ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> replacements);

MCNAPI ::std::string& stringReplace(::std::string& s, ::std::string const& src, ::std::string const& dst, int maxCount);

MCNAPI ::std::string
stringReplaceCopy(::std::string const& s, ::std::string const& src, ::std::string const& dst, int maxCount);

MCNAPI ::std::string stringTrim(::std::string const& s);

MCNAPI ::std::string stringTrim(::std::string const& s, ::std::string const& chars);

MCNAPI ::std::string_view stringTrim(::std::string_view s, ::std::string_view chars);

MCNAPI void timeoutForDuration(::std::chrono::seconds duration);

MCNAPI bool toBool(::std::string const& input, bool& destination);

MCNAPI ::std::string toCamelCase(::std::string const& src, char delimiter);

MCNAPI ::std::string toHex(::std::string_view input);

MCNAPI ::Util::NumberConversionResult toIntWithMinMax(::std::string_view inputStr, int& destination, int min, int max);

#ifdef LL_PLAT_C
MCNAPI ::std::string toLocalizedString(float f, int precision);

MCNAPI ::std::string toLocalizedString(
    float                f,
    int                  precision,
    ::std::string const& digitGroupSeparator,
    ::std::string const& decimalSeparator
);

MCNAPI ::std::string toLower(char const* inString);
#endif

MCNAPI ::std::string toLower(::std::string_view inString);

MCNAPI ::std::string toPascalCase(::std::string const& src, char delimiter);

#ifdef LL_PLAT_C
MCNAPI bool toSafeNumber(::std::string const& str, uint& output);

MCNAPI bool toSafeNumber(::std::string const& str, uint64& output);
#endif

MCNAPI ::std::string toString(::std::string_view inputStr);

MCNAPI ::std::string toStringWithPaddedZeroes(uint number, uchar digitCount);

MCNAPI ::std::string toUpper(::std::string_view inString);

#ifdef LL_PLAT_C
MCNAPI int utf8len(::std::string const& str);

MCNAPI int utf8lenNoColorCodes(::std::string_view str);
#endif

MCNAPI ::std::string utf8substring(::std::string const& str, int startIndex, int endIndex);

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::std::string> utf8substringCharacters(::std::string const& str, int startIndex, int endIndex);
#endif

MCNAPI bool validateIdentifier(
    ::std::string const&                       id,
    ::LogArea                                  logArea,
    bool                                       allowMinecraftNamespace,
    ::std::pair<::std::string, ::std::string>* idNameOut
);
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<uchar, ::std::string> const& CP1252_TO_UTF8();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::unordered_map<uchar, ::std::string> const& CP1252_TO_UTF8();
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<uchar, ::std::string> const& CP437_TO_UTF8();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::unordered_map<uchar, ::std::string> const& CP437_TO_UTF8();
#endif

MCNAPI ::std::string const& EMPTY_GUID();

MCNAPI ::std::string const& EMPTY_STRING();

MCNAPI ::std::string const& NEW_LINE();
// NOLINTEND

} // namespace Util
