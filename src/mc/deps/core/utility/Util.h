#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Util { enum class NumberConversionResult; }
namespace Util { struct FormattedString; }
template<typename T0, typename T1> class BidirectionalUnorderedMap;
// clang-format on

namespace Util {
/**
 * @symbol ?COLOR_CODE\@Util\@\@3HB
 */
MCAPI extern int const COLOR_CODE; // NOLINT
/**
 * @symbol ?EMPTY_GUID\@Util\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const EMPTY_GUID; // NOLINT
/**
 * @symbol ?EMPTY_STRING\@Util\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const EMPTY_STRING; // NOLINT
/**
 * @symbol ?NEW_LINE\@Util\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const NEW_LINE; // NOLINT
/**
 * @symbol
 * ?_breakIntoWordsAndFindProfanity\@Util\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@HH\@std\@\@V?$allocator\@U?$pair\@HH\@std\@\@\@2\@\@3\@AEBV?$unordered_set\@DU?$hash\@D\@std\@\@U?$equal_to\@D\@2\@V?$allocator\@D\@2\@\@3\@AEAV?$set\@U?$pair\@HH\@std\@\@U?$less\@U?$pair\@HH\@std\@\@\@2\@V?$allocator\@U?$pair\@HH\@std\@\@\@2\@\@3\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@3\@AEBV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI void
_breakIntoWordsAndFindProfanity(std::string&, std::vector<struct std::pair<int, int>> const&, class std::unordered_set<char, struct std::hash<char>, struct std::equal_to<char>, class std::allocator<char>> const&, class std::set<struct std::pair<int, int>, struct std::less<struct std::pair<int, int>>, class std::allocator<struct std::pair<int, int>>>&, class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> const&, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> const&); // NOLINT
/**
 * @symbol
 * ?_logIfValidLogArea\@Util\@\@YAXW4LogArea\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void _logIfValidLogArea(enum class LogArea, std::string const&); // NOLINT
/**
 * @symbol
 * ?_recordProfanityLocationInWord\@Util\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@HH\@std\@\@V?$allocator\@U?$pair\@HH\@std\@\@\@2\@\@3\@HHAEAV?$set\@U?$pair\@HH\@std\@\@U?$less\@U?$pair\@HH\@std\@\@\@2\@V?$allocator\@U?$pair\@HH\@std\@\@\@2\@\@3\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@3\@AEBV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI void _recordProfanityLocationInWord(std::string const&, std::vector<struct std::pair<int, int>> const&, int, int, class std::set<struct std::pair<int, int>, struct std::less<struct std::pair<int, int>>, class std::allocator<struct std::pair<int, int>>>&, class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> const&, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> const&); // NOLINT
/**
 * @symbol ?allocateVFormat\@Util\@\@YA?AUFormattedString\@1\@PEBDPEAD\@Z
 */
MCAPI struct Util::FormattedString allocateVFormat(char const*, char*); // NOLINT
/**
 * @symbol
 * ?base64_decode\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string base64_decode(std::string const&); // NOLINT
/**
 * @symbol
 * ?base64_encode\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBE_K_N\@Z
 */
MCAPI std::string base64_encode(unsigned char const*, unsigned __int64, bool); // NOLINT
/**
 * @symbol
 * ?base64_encode\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@_N\@Z
 */
MCAPI std::string base64_encode(std::string const&, bool); // NOLINT
/**
 * @symbol
 * ?base64url_decode\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
 */
MCAPI std::string base64url_decode(std::string); // NOLINT
/**
 * @symbol
 * ?base64url_encode\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
 */
MCAPI std::string base64url_encode(std::string); // NOLINT
/**
 * @symbol ?boolToString\@Util\@\@YAPEBD_N\@Z
 */
MCAPI char const* boolToString(bool); // NOLINT
/**
 * @symbol
 * ?clearAndReturn\@Util\@\@YAAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
 */
MCAPI std::string& clearAndReturn(std::string&); // NOLINT
/**
 * @symbol ?compareNoCase\@Util\@\@YA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0\@Z
 */
MCAPI bool
    compareNoCase(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
/**
 * @symbol
 * ?cp1252ToUTF8\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string cp1252ToUTF8(std::string const&); // NOLINT
/**
 * @symbol
 * ?cp437ToUTF8\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string cp437ToUTF8(std::string const&); // NOLINT
/**
 * @symbol ?crashOnPurpose\@Util\@\@YAXXZ
 */
MCAPI void crashOnPurpose(); // NOLINT
/**
 * @symbol
 * ?decompressRaw\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
 */
MCAPI bool decompressRaw(std::string const&, std::string&); // NOLINT
/**
 * @symbol ?endsWith\@Util\@\@YA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0\@Z
 */
MCAPI bool
    endsWith(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
/**
 * @symbol
 * ?endsWithCaseInsensitive\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
 */
MCAPI bool endsWithCaseInsensitive(std::string const&, std::string const&); // NOLINT
/**
 * @symbol
 * ?ensureNamespace\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string ensureNamespace(std::string const&); // NOLINT
/**
 * @symbol
 * ?filterProfanityFromString\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@3\@AEBV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI std::string
filterProfanityFromString(std::string const&, class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> const&, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> const&); // NOLINT
/**
 * @symbol
 * ?findProfanityInString\@Util\@\@YA?AV?$set\@U?$pair\@HH\@std\@\@U?$less\@U?$pair\@HH\@std\@\@\@2\@V?$allocator\@U?$pair\@HH\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@3\@AEBV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI class std::set<struct std::pair<int, int>, struct std::less<struct std::pair<int, int>>, class std::allocator<struct std::pair<int, int>>> findProfanityInString(std::string const&, class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> const&, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> const&); // NOLINT
/**
 * @symbol ?format\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBDZZ
 */
MCAPI std::string format(char const*, ...); // NOLINT
/**
 * @symbol ?freeStringMemory\@Util\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void freeStringMemory(std::string&); // NOLINT
/**
 * @symbol
 * ?fromHex\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::string fromHex(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
/**
 * @symbol ?generateHashMapFromListTag\@Util\@\@YA?AV?$BidirectionalUnorderedMap\@H_K\@\@AEBVListTag\@\@\@Z
 */
MCAPI class BidirectionalUnorderedMap<int, unsigned __int64> generateHashMapFromListTag(class ListTag const&); // NOLINT
/**
 * @symbol
 * ?getDataInheritance\@Util\@\@YA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
 */
MCAPI struct std::pair<std::string, std::string> getDataInheritance(std::string const&); // NOLINT
/**
 * @symbol
 * ?getNameWithoutNamespace\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string getNameWithoutNamespace(std::string const&); // NOLINT
/**
 * @symbol
 * ?getNamespace\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string getNamespace(std::string const&); // NOLINT
/**
 * @symbol ?hashCode\@Util\@\@YAIV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
 */
MCAPI unsigned int hashCode(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
/**
 * @symbol ?hashCodeAsUtf16\@Util\@\@YAIV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
 */
MCAPI unsigned int hashCodeAsUtf16(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
/**
 * @symbol ?isAlphaNumeric\@Util\@\@YA_ND\@Z
 */
MCAPI bool isAlphaNumeric(char); // NOLINT
/**
 * @symbol ?isAlphabeticChar\@Util\@\@YA_ND\@Z
 */
MCAPI bool isAlphabeticChar(char); // NOLINT
/**
 * @symbol ?isDigit\@Util\@\@YA_ND\@Z
 */
MCAPI bool isDigit(char); // NOLINT
/**
 * @symbol ?isIdentifierChar\@Util\@\@YA_ND\@Z
 */
MCAPI bool isIdentifierChar(char); // NOLINT
/**
 * @symbol ?isIntegral\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
 */
MCAPI bool isIntegral(std::string const&, bool); // NOLINT
/**
 * @symbol ?isStartIdentifierChar\@Util\@\@YA_ND\@Z
 */
MCAPI bool isStartIdentifierChar(char); // NOLINT
/**
 * @symbol ?isUpperCaseAlphabetic\@Util\@\@YA_ND\@Z
 */
MCAPI bool isUpperCaseAlphabetic(char); // NOLINT
/**
 * @symbol
 * ?isValidNamespaceFormat\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI bool isValidNamespaceFormat(std::string const&); // NOLINT
/**
 * @symbol ?isValidUTF8\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI bool isValidUTF8(std::string const&); // NOLINT
/**
 * @symbol
 * ?isVanillaNamespace\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI bool isVanillaNamespace(std::string const&); // NOLINT
/**
 * @symbol ?isWhiteSpace\@Util\@\@YA_ND\@Z
 */
MCAPI bool isWhiteSpace(char); // NOLINT
/**
 * @symbol ?loadGameVersion\@Util\@\@YAXAEAVSemVersion\@\@AEBVValue\@Json\@\@\@Z
 */
MCAPI void loadGameVersion(class SemVersion&, class Json::Value const&); // NOLINT
/**
 * @symbol
 * ?loadGameVersionFromJsonString\@Util\@\@YA?AVSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI class SemVersion loadGameVersionFromJsonString(std::string const&); // NOLINT
/**
 * @symbol
 * ?removeChars\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@AEBV23\@\@Z
 */
MCAPI std::string removeChars(std::string, std::string const&); // NOLINT
/**
 * @symbol
 * ?removeIllegalChars\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
 */
MCAPI std::string removeIllegalChars(std::string); // NOLINT
/**
 * @symbol
 * ?removeTrailingSpaces\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string removeTrailingSpaces(std::string const&); // NOLINT
/**
 * @symbol
 * ?safeGetline\@Util\@\@YAAEAV?$basic_istream\@DU?$char_traits\@D\@std\@\@\@std\@\@AEAV23\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
 */
MCAPI class std::basic_istream<char, struct std::char_traits<char>>&
safeGetline(class std::basic_istream<char, struct std::char_traits<char>>&, std::string&); // NOLINT
/**
 * @symbol
 * ?simpleFormat\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI std::string simpleFormat(std::string const&, std::vector<std::string> const&); // NOLINT
/**
 * @symbol
 * ?splitAndDiscardEmpty\@Util\@\@YA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@D\@Z
 */
MCAPI std::vector<std::string> splitAndDiscardEmpty(std::string const&, char); // NOLINT
/**
 * @symbol
 * ?splitLines\@Util\@\@YA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBV23\@_N2P6AAEAV?$basic_istream\@DU?$char_traits\@D\@std\@\@\@3\@AEAV53\@AEAV43\@\@Z\@Z
 */
MCAPI std::vector<std::string> splitLines(
    std::string const&,
    std::vector<std::string> const&,
    bool,
    bool,
    class std::basic_istream<
        char,
        struct std::char_traits<
            char>>& (*)(class std::basic_istream<char, struct std::char_traits<char>>&, std::string&)
); // NOLINT
/**
 * @symbol
 * ?splitString\@Util\@\@YAAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@DAEAV23\@\@Z
 */
MCAPI std::vector<std::string>&
splitString(class std::basic_string_view<char, struct std::char_traits<char>>, char, std::vector<std::string>&); // NOLINT
/**
 * @symbol
 * ?splitStringAsViews\@Util\@\@YAAEAV?$vector\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V?$allocator\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@DAEAV23\@\@Z
 */
MCAPI std::vector<class std::basic_string_view<char, struct std::char_traits<char>>>&
splitStringAsViews(class std::basic_string_view<char, struct std::char_traits<char>>, char, std::vector<class std::basic_string_view<char, struct std::char_traits<char>>>&); // NOLINT
/**
 * @symbol ?startsWith\@Util\@\@YA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0\@Z
 */
MCAPI bool
    startsWith(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
/**
 * @symbol ?stringContains\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@D\@Z
 */
MCAPI bool stringContains(std::string const&, char); // NOLINT
/**
 * @symbol
 * ?stringReplace\@Util\@\@YAAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@AEBV23\@1H\@Z
 */
MCAPI std::string& stringReplace(std::string&, std::string const&, std::string const&, int); // NOLINT
/**
 * @symbol ?stringTrim\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string stringTrim(std::string const&); // NOLINT
/**
 * @symbol
 * ?stringTrim\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
 */
MCAPI std::string stringTrim(std::string const&, std::string const&); // NOLINT
/**
 * @symbol ?stripBOM\@Util\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void stripBOM(std::string&); // NOLINT
/**
 * @symbol ?timeoutForDuration\@Util\@\@YAXV?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@Z
 */
MCAPI void timeoutForDuration(class std::chrono::duration<__int64, struct std::ratio<1, 1>>); // NOLINT
/**
 * @symbol ?toBool\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEA_N\@Z
 */
MCAPI bool toBool(std::string const&, bool&); // NOLINT
/**
 * @symbol
 * ?toCamelCase\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@D\@Z
 */
MCAPI std::string toCamelCase(std::string const&, char); // NOLINT
/**
 * @symbol
 * ?toHex\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::string toHex(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
/**
 * @symbol
 * ?toIntWithMinMax\@Util\@\@YA?AW4NumberConversionResult\@1\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEAHHH\@Z
 */
MCAPI enum class Util::NumberConversionResult
toIntWithMinMax(class std::basic_string_view<char, struct std::char_traits<char>>, int&, int, int); // NOLINT
/**
 * @symbol ?toLower\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD\@Z
 */
MCAPI std::string toLower(char const*); // NOLINT
/**
 * @symbol
 * ?toLower\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::string toLower(class std::basic_string_view<char, struct std::char_traits<char>> const&); // NOLINT
/**
 * @symbol ?toLowerInPlace\@Util\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void toLowerInPlace(std::string&); // NOLINT
/**
 * @symbol
 * ?toPascalCase\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@D\@Z
 */
MCAPI std::string toPascalCase(std::string const&, char); // NOLINT
/**
 * @symbol
 * ?toString\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$basic_string\@_WU?$char_traits\@_W\@std\@\@V?$allocator\@_W\@2\@\@3\@\@Z
 */
MCAPI std::string
      toString(class std::
                   basic_string<wchar_t, struct std::char_traits<wchar_t>, class std::allocator<wchar_t>> const&); // NOLINT
/**
 * @symbol ?toString\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MH\@Z
 */
MCAPI std::string toString(float, int); // NOLINT
/**
 * @symbol ?toString\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string toString(std::string const&); // NOLINT
/**
 * @symbol
 * ?toStringWithPaddedZeroes\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@IE\@Z
 */
MCAPI std::string toStringWithPaddedZeroes(unsigned int, unsigned char); // NOLINT
/**
 * @symbol
 * ?toUpper\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::string toUpper(class std::basic_string_view<char, struct std::char_traits<char>> const&); // NOLINT
/**
 * @symbol
 * ?toWideString\@Util\@\@YA?AV?$basic_string\@_WU?$char_traits\@_W\@std\@\@V?$allocator\@_W\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
 */
MCAPI class std::basic_string<wchar_t, struct std::char_traits<wchar_t>, class std::allocator<wchar_t>>
toWideString(std::string const&); // NOLINT
/**
 * @symbol ?utf8len\@Util\@\@YAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI int utf8len(std::string const&); // NOLINT
/**
 * @symbol
 * ?utf8substring\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@HH\@Z
 */
MCAPI std::string utf8substring(std::string const&, int, int); // NOLINT
/**
 * @symbol ?vFormat\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBDPEAD\@Z
 */
MCAPI std::string vFormat(char const*, char*); // NOLINT
/**
 * @symbol
 * ?validateIdentifier\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4LogArea\@\@_NPEAU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@3\@\@Z
 */
MCAPI bool
validateIdentifier(std::string const&, enum class LogArea, bool, struct std::pair<std::string, std::string>*); // NOLINT
/**
 * @symbol
 * ?validateIdentifierChunk\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4LogArea\@\@\@Z
 */
MCAPI bool validateIdentifierChunk(std::string const&, enum class LogArea); // NOLINT

}; // namespace Util
