#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/deps/core/utility/NumberConversionResult.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/components/agent/Direction.h"
#include "mc/enums/LogArea.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { struct BlockQueryResult; }
namespace Json { class Value; }
namespace Util { struct ActorReplacementParams; }
namespace Util { struct ContainerReplacementParams; }
namespace Util { struct ReplacementResults; }
namespace Util::Agent { struct SimulatedMoveResult; }
namespace Util::ResourceUri { struct ValidationResult; }
namespace Util::Url { struct Components; }
namespace Util::Url { struct ComponentsView; }
// clang-format on

namespace Util {
// NOLINTBEGIN
// symbol: ?COLOR_CODE@Util@@3HB
MCAPI extern int const COLOR_CODE;

// symbol: ?EMPTY_GUID@Util@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const EMPTY_GUID;

// symbol: ?EMPTY_STRING@Util@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const EMPTY_STRING;

// symbol: ?NEW_LINE@Util@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const NEW_LINE;

// symbol:
// ?_breakIntoWordsAndFindProfanity@Util@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@HH@std@@V?$allocator@U?$pair@HH@std@@@2@@3@AEBV?$unordered_set@DU?$hash@D@std@@U?$equal_to@D@2@V?$allocator@D@2@@3@AEAV?$set@U?$pair@HH@std@@U?$less@U?$pair@HH@std@@@2@V?$allocator@U?$pair@HH@std@@@2@@3@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@3@AEBV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
MCAPI void _breakIntoWordsAndFindProfanity(
    std::string&                                str,
    std::vector<std::pair<int, int>> const&     originalStrIndexes,
    std::unordered_set<char> const&             escapeChars,
    std::set<std::pair<int, int>>&              profanityLocations,
    std::unordered_map<std::string, int> const& exactMap,
    std::unordered_set<std::string> const&      containsSet
);

// symbol: ?_logIfValidLogArea@Util@@YAXW4LogArea@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void _logIfValidLogArea(::LogArea logArea, std::string const& msg);

// symbol:
// ?_recordProfanityLocationInWord@Util@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@HH@std@@V?$allocator@U?$pair@HH@std@@@2@@3@HHAEAV?$set@U?$pair@HH@std@@U?$less@U?$pair@HH@std@@@2@V?$allocator@U?$pair@HH@std@@@2@@3@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@3@AEBV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
MCAPI void _recordProfanityLocationInWord(
    std::string const&                          word,
    std::vector<std::pair<int, int>> const&     originalStrIndexes,
    int                                         start,
    int                                         end,
    std::set<std::pair<int, int>>&              profanityLocations,
    std::unordered_map<std::string, int> const& exactMap,
    std::unordered_set<std::string> const&      containsSet
);

// symbol: ?base64_decode@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string base64_decode(std::string const& encoded_string);

// symbol: ?base64_encode@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@_N@Z
MCAPI std::string base64_encode(std::string const& str, bool pad);

// symbol: ?base64_encode@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBE_K_N@Z
MCAPI std::string base64_encode(uchar const*, uint64, bool);

// symbol: ?base64url_decode@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
MCAPI std::string base64url_decode(std::string encoded);

// symbol: ?base64url_encode@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
MCAPI std::string base64url_encode(std::string str);

// symbol: ?boolToString@Util@@YAPEBD_N@Z
MCAPI char const* boolToString(bool value);

// symbol: ?clearAndReturn@Util@@YAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
MCAPI std::string& clearAndReturn(std::string& s);

// symbol: ?compareNoCase@Util@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
MCAPI bool compareNoCase(std::string_view lhs, std::string_view rhs);

// symbol: ?cp1252ToUTF8@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string cp1252ToUTF8(std::string const& content);

// symbol: ?cp437ToUTF8@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string cp437ToUTF8(std::string const& content);

// symbol: ?crashOnPurpose@Util@@YAXXZ
MCAPI void crashOnPurpose();

// symbol: ?decompressRaw@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
MCAPI bool decompressRaw(std::string const& input, std::string& output);

// symbol:
// ?decompressRaw@Util@@YA_NAEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
MCAPI bool decompressRaw(std::string_view const& input, std::string& output);

// symbol: ?endsWith@Util@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
MCAPI bool endsWith(std::string_view s, std::string_view ends);

// symbol: ?endsWithCaseInsensitive@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
MCAPI bool endsWithCaseInsensitive(std::string const& s, std::string const& ends);

// symbol: ?ensureNamespace@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string ensureNamespace(std::string const& id);

// symbol:
// ?ensureNamespace@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::string ensureNamespace(std::string_view);

// symbol:
// ?filterProfanityFromString@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@3@AEBV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
MCAPI std::string filterProfanityFromString(
    std::string const&                          inputStr,
    std::unordered_map<std::string, int> const& profanityExactMap,
    std::unordered_set<std::string> const&      profanityContainsSet
);

// symbol:
// ?findProfanityInString@Util@@YA?AV?$set@U?$pair@HH@std@@U?$less@U?$pair@HH@std@@@2@V?$allocator@U?$pair@HH@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@3@AEBV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
MCAPI std::set<std::pair<int, int>> findProfanityInString(
    std::string const&                          inputStr,
    std::unordered_map<std::string, int> const& exactMap,
    std::unordered_set<std::string> const&      containsSet
);

// symbol: ?format@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDZZ
MCAPI std::string format(char const*, ...);

// symbol: ?freeStringMemory@Util@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void freeStringMemory(std::string& toFree);

// symbol:
// ?fromHex@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::string fromHex(std::string_view);

// symbol: ?generateHashMapFromListTag@Util@@YA?AV?$BidirectionalUnorderedMap@H_K@@AEBVListTag@@@Z
MCAPI class BidirectionalUnorderedMap<int, uint64> generateHashMapFromListTag(class ListTag const& enumValues);

// symbol: ?getNameWithoutNamespace@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string getNameWithoutNamespace(std::string const& name);

// symbol: ?getNamespace@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string getNamespace(std::string const& name);

// symbol: ?hashCode@Util@@YAIV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI uint hashCode(std::string_view str);

// symbol: ?hashCodeAsUtf16@Util@@YAIV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI uint hashCodeAsUtf16(std::string_view);

// symbol: ?isAlphaNumeric@Util@@YA_ND@Z
MCAPI bool isAlphaNumeric(char c);

// symbol: ?isAlphabeticChar@Util@@YA_ND@Z
MCAPI bool isAlphabeticChar(char c);

// symbol: ?isDigit@Util@@YA_ND@Z
MCAPI bool isDigit(char c);

// symbol: ?isIdentifierChar@Util@@YA_ND@Z
MCAPI bool isIdentifierChar(char c);

// symbol: ?isIntegral@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
MCAPI bool isIntegral(std::string const& str, bool);

// symbol: ?isNumber@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool isNumber(std::string const& str);

// symbol: ?isStartIdentifierChar@Util@@YA_ND@Z
MCAPI bool isStartIdentifierChar(char c);

// symbol: ?isUpperCaseAlphabetic@Util@@YA_ND@Z
MCAPI bool isUpperCaseAlphabetic(char c);

// symbol: ?isValidNamespaceFormat@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool isValidNamespaceFormat(std::string const& name);

// symbol: ?isValidUTF8@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool isValidUTF8(std::string const& content);

// symbol: ?isVanillaNamespace@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool isVanillaNamespace(std::string const& identifier);

// symbol: ?isWhiteSpace@Util@@YA_ND@Z
MCAPI bool isWhiteSpace(char c);

// symbol: ?loadGameVersion@Util@@YAXAEAVSemVersion@@AEBVValue@Json@@@Z
MCAPI void loadGameVersion(class SemVersion& version, class Json::Value const& versionNode);

// symbol: ?normalizeLineEndings@Util@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void normalizeLineEndings(std::string& str);

// symbol: ?removeChars@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@AEBV23@@Z
MCAPI std::string removeChars(std::string str, std::string const& characters);

// symbol: ?removeIllegalChars@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
MCAPI std::string removeIllegalChars(std::string str);

// symbol: ?removeTrailingSpaces@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string removeTrailingSpaces(std::string const& str);

// symbol:
// ?safeGetline@Util@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@std@@AEAV23@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
MCAPI std::istream& safeGetline(std::istream&, std::string&);

// symbol:
// ?split@Util@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@D@Z
MCAPI std::vector<std::string> split(std::string_view, char);

// symbol:
// ?splitAndDiscardEmpty@Util@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@D@Z
MCAPI std::vector<std::string> splitAndDiscardEmpty(std::string const& str, char delim);

// symbol:
// ?splitLines@Util@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV23@_N2P6AAEAV?$basic_istream@DU?$char_traits@D@std@@@3@AEAV53@AEAV43@@Z@Z
MCAPI std::vector<std::string> splitLines(
    std::string const&              str,
    std::vector<std::string> const& delims,
    bool                            includeDelimCharsInResult,
    bool                            includeEmptyLines,
    std::istream& (*fnGetline)(std::istream&, std::string&)
);

// symbol:
// ?splitString@Util@@YAAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@DAEAV23@@Z
MCAPI std::vector<std::string>& splitString(std::string_view s, char delim, std::vector<std::string>& elems);

// symbol:
// ?splitStringAsViews@Util@@YAAEAV?$vector@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$allocator@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@DAEAV23@@Z
MCAPI std::vector<std::string_view>&
      splitStringAsViews(std::string_view s, char delim, std::vector<std::string_view>& elems);

// symbol: ?startsWith@Util@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
MCAPI bool startsWith(std::string_view s, std::string_view start);

// symbol: ?stringContains@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@Z
MCAPI bool stringContains(std::string const& s, char character);

// symbol: ?stringReplace@Util@@YAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@AEBV23@1H@Z
MCAPI std::string& stringReplace(std::string& s, std::string const& src, std::string const& dst, int maxCount);

// symbol: ?stringTrim@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string stringTrim(std::string const& s);

// symbol: ?stringTrim@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
MCAPI std::string stringTrim(std::string const& s, std::string const& chars);

// symbol: ?stripBOM@Util@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void stripBOM(std::string& contents);

// symbol: ?timeoutForDuration@Util@@YAXV?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@Z
MCAPI void timeoutForDuration(std::chrono::seconds duration);

// symbol: ?toBool@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEA_N@Z
MCAPI bool toBool(std::string const& input, bool& destination);

// symbol: ?toCamelCase@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@D@Z
MCAPI std::string toCamelCase(std::string const& src, char delimiter);

// symbol:
// ?toHex@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::string toHex(std::string_view);

// symbol:
// ?toIntWithMinMax@Util@@YA?AW4NumberConversionResult@1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEAHHH@Z
MCAPI ::Util::NumberConversionResult toIntWithMinMax(std::string_view inputStr, int& destination, int min, int max);

// symbol: ?toLower@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD@Z
MCAPI std::string toLower(char const*);

// symbol:
// ?toLower@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::string toLower(std::string_view const&);

// symbol: ?toLowerInPlace@Util@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void toLowerInPlace(std::string& str);

// symbol: ?toPascalCase@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@D@Z
MCAPI std::string toPascalCase(std::string const& src, char delimiter);

// symbol: ?toString@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string toString(std::string const& inputStr);

// symbol:
// ?toString@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z
MCAPI std::string toString(std::wstring const& inputStr);

// symbol: ?toString@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MH@Z
MCAPI std::string toString(float, int);

// symbol: ?toStringWithPaddedZeroes@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IE@Z
MCAPI std::string toStringWithPaddedZeroes(uint, uchar);

// symbol:
// ?toUpper@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::string toUpper(std::string_view const&);

// symbol:
// ?toWideString@Util@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
MCAPI std::wstring toWideString(std::string const& inputStr);

// symbol: ?utf8len@Util@@YAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI int utf8len(std::string const& str);

// symbol: ?utf8substring@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@HH@Z
MCAPI std::string utf8substring(std::string const& str, int startIndex, int endIndex);

// symbol: ?vFormat@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDPEAD@Z
MCAPI std::string vFormat(char const*, char*);

// symbol:
// ?validateIdentifier@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LogArea@@_NPEAU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@3@@Z
MCAPI bool validateIdentifier(
    std::string const&                   id,
    ::LogArea                            logArea,
    bool                                 allowMinecraftNamespace,
    std::pair<std::string, std::string>* idNameOut
);

// symbol:
// ?validateIdentifierChunk@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LogArea@@@Z
MCAPI bool validateIdentifierChunk(std::string const& chunk, ::LogArea logArea);
// NOLINTEND

}; // namespace Util
