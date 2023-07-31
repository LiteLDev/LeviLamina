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
// NOLINTBEGIN
/**
 * @symbol ?COLOR_CODE\@Util\@\@3HB
 */
MCAPI extern int const COLOR_CODE;
/**
 * @symbol ?EMPTY_GUID\@Util\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const EMPTY_GUID;
/**
 * @symbol ?EMPTY_STRING\@Util\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const EMPTY_STRING;
/**
 * @symbol ?NEW_LINE\@Util\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const NEW_LINE;
/**
 * @symbol
 * ?_breakIntoWordsAndFindProfanity\@Util\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@HH\@std\@\@V?$allocator\@U?$pair\@HH\@std\@\@\@2\@\@3\@AEBV?$unordered_set\@DU?$hash\@D\@std\@\@U?$equal_to\@D\@2\@V?$allocator\@D\@2\@\@3\@AEAV?$set\@U?$pair\@HH\@std\@\@U?$less\@U?$pair\@HH\@std\@\@\@2\@V?$allocator\@U?$pair\@HH\@std\@\@\@2\@\@3\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@3\@AEBV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI void
_breakIntoWordsAndFindProfanity(std::string&, std::vector<std::pair<int, int>> const&, std::unordered_set<char> const&, std::set<std::pair<int, int>>&, std::unordered_map<std::string, int> const&, std::unordered_set<std::string> const&);
/**
 * @symbol
 * ?_logIfValidLogArea\@Util\@\@YAXW4LogArea\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void _logIfValidLogArea(enum class LogArea, std::string const&);
/**
 * @symbol
 * ?_recordProfanityLocationInWord\@Util\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@HH\@std\@\@V?$allocator\@U?$pair\@HH\@std\@\@\@2\@\@3\@HHAEAV?$set\@U?$pair\@HH\@std\@\@U?$less\@U?$pair\@HH\@std\@\@\@2\@V?$allocator\@U?$pair\@HH\@std\@\@\@2\@\@3\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@3\@AEBV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI void
_recordProfanityLocationInWord(std::string const&, std::vector<std::pair<int, int>> const&, int, int, std::set<std::pair<int, int>>&, std::unordered_map<std::string, int> const&, std::unordered_set<std::string> const&);
/**
 * @symbol ?allocateVFormat\@Util\@\@YA?AUFormattedString\@1\@PEBDPEAD\@Z
 */
MCAPI struct Util::FormattedString allocateVFormat(char const*, char*);
/**
 * @symbol
 * ?base64_decode\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string base64_decode(std::string const&);
/**
 * @symbol
 * ?base64_encode\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBE_K_N\@Z
 */
MCAPI std::string base64_encode(unsigned char const*, uint64_t, bool);
/**
 * @symbol
 * ?base64_encode\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@_N\@Z
 */
MCAPI std::string base64_encode(std::string const&, bool);
/**
 * @symbol
 * ?base64url_decode\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
 */
MCAPI std::string base64url_decode(std::string);
/**
 * @symbol
 * ?base64url_encode\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
 */
MCAPI std::string base64url_encode(std::string);
/**
 * @symbol ?boolToString\@Util\@\@YAPEBD_N\@Z
 */
MCAPI char const* boolToString(bool);
/**
 * @symbol
 * ?clearAndReturn\@Util\@\@YAAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
 */
MCAPI std::string& clearAndReturn(std::string&);
/**
 * @symbol ?compareNoCase\@Util\@\@YA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0\@Z
 */
MCAPI bool compareNoCase(std::string_view, std::string_view);
/**
 * @symbol
 * ?cp1252ToUTF8\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string cp1252ToUTF8(std::string const&);
/**
 * @symbol
 * ?cp437ToUTF8\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string cp437ToUTF8(std::string const&);
/**
 * @symbol ?crashOnPurpose\@Util\@\@YAXXZ
 */
MCAPI void crashOnPurpose();
/**
 * @symbol
 * ?decompressRaw\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
 */
MCAPI bool decompressRaw(std::string const&, std::string&);
/**
 * @symbol ?endsWith\@Util\@\@YA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0\@Z
 */
MCAPI bool endsWith(std::string_view, std::string_view);
/**
 * @symbol
 * ?endsWithCaseInsensitive\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
 */
MCAPI bool endsWithCaseInsensitive(std::string const&, std::string const&);
/**
 * @symbol
 * ?ensureNamespace\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string ensureNamespace(std::string const&);
/**
 * @symbol
 * ?filterProfanityFromString\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@3\@AEBV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI std::string
filterProfanityFromString(std::string const&, std::unordered_map<std::string, int> const&, std::unordered_set<std::string> const&);
/**
 * @symbol
 * ?findProfanityInString\@Util\@\@YA?AV?$set\@U?$pair\@HH\@std\@\@U?$less\@U?$pair\@HH\@std\@\@\@2\@V?$allocator\@U?$pair\@HH\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@3\@AEBV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI std::set<std::pair<int, int>>
findProfanityInString(std::string const&, std::unordered_map<std::string, int> const&, std::unordered_set<std::string> const&);
/**
 * @symbol ?format\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBDZZ
 */
MCAPI std::string format(char const*, ...);
/**
 * @symbol ?freeStringMemory\@Util\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void freeStringMemory(std::string&);
/**
 * @symbol
 * ?fromHex\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::string fromHex(std::string_view);
/**
 * @symbol ?generateHashMapFromListTag\@Util\@\@YA?AV?$BidirectionalUnorderedMap\@H_K\@\@AEBVListTag\@\@\@Z
 */
MCAPI class BidirectionalUnorderedMap<int, uint64_t> generateHashMapFromListTag(class ListTag const&);
/**
 * @symbol
 * ?getDataInheritance\@Util\@\@YA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
 */
MCAPI std::pair<std::string, std::string> getDataInheritance(std::string const&);
/**
 * @symbol
 * ?getNameWithoutNamespace\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string getNameWithoutNamespace(std::string const&);
/**
 * @symbol
 * ?getNamespace\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string getNamespace(std::string const&);
/**
 * @symbol ?hashCode\@Util\@\@YAIV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
 */
MCAPI unsigned int hashCode(std::string_view);
/**
 * @symbol ?hashCodeAsUtf16\@Util\@\@YAIV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
 */
MCAPI unsigned int hashCodeAsUtf16(std::string_view);
/**
 * @symbol ?isAlphaNumeric\@Util\@\@YA_ND\@Z
 */
MCAPI bool isAlphaNumeric(char);
/**
 * @symbol ?isAlphabeticChar\@Util\@\@YA_ND\@Z
 */
MCAPI bool isAlphabeticChar(char);
/**
 * @symbol ?isDigit\@Util\@\@YA_ND\@Z
 */
MCAPI bool isDigit(char);
/**
 * @symbol ?isIdentifierChar\@Util\@\@YA_ND\@Z
 */
MCAPI bool isIdentifierChar(char);
/**
 * @symbol ?isIntegral\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
 */
MCAPI bool isIntegral(std::string const&, bool);
/**
 * @symbol ?isStartIdentifierChar\@Util\@\@YA_ND\@Z
 */
MCAPI bool isStartIdentifierChar(char);
/**
 * @symbol ?isUpperCaseAlphabetic\@Util\@\@YA_ND\@Z
 */
MCAPI bool isUpperCaseAlphabetic(char);
/**
 * @symbol
 * ?isValidNamespaceFormat\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI bool isValidNamespaceFormat(std::string const&);
/**
 * @symbol ?isValidUTF8\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI bool isValidUTF8(std::string const&);
/**
 * @symbol
 * ?isVanillaNamespace\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI bool isVanillaNamespace(std::string const&);
/**
 * @symbol ?isWhiteSpace\@Util\@\@YA_ND\@Z
 */
MCAPI bool isWhiteSpace(char);
/**
 * @symbol ?loadGameVersion\@Util\@\@YAXAEAVSemVersion\@\@AEBVValue\@Json\@\@\@Z
 */
MCAPI void loadGameVersion(class SemVersion&, class Json::Value const&);
/**
 * @symbol
 * ?loadGameVersionFromJsonString\@Util\@\@YA?AVSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI class SemVersion loadGameVersionFromJsonString(std::string const&);
/**
 * @symbol
 * ?removeChars\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@AEBV23\@\@Z
 */
MCAPI std::string removeChars(std::string, std::string const&);
/**
 * @symbol
 * ?removeIllegalChars\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
 */
MCAPI std::string removeIllegalChars(std::string);
/**
 * @symbol
 * ?removeTrailingSpaces\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string removeTrailingSpaces(std::string const&);
/**
 * @symbol
 * ?safeGetline\@Util\@\@YAAEAV?$basic_istream\@DU?$char_traits\@D\@std\@\@\@std\@\@AEAV23\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
 */
MCAPI std::basic_istream<char, std::char_traits<char>>&
      safeGetline(std::basic_istream<char, std::char_traits<char>>&, std::string&);
/**
 * @symbol
 * ?simpleFormat\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI std::string simpleFormat(std::string const&, std::vector<std::string> const&);
/**
 * @symbol
 * ?splitAndDiscardEmpty\@Util\@\@YA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@D\@Z
 */
MCAPI std::vector<std::string> splitAndDiscardEmpty(std::string const&, char);
/**
 * @symbol
 * ?splitLines\@Util\@\@YA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBV23\@_N2P6AAEAV?$basic_istream\@DU?$char_traits\@D\@std\@\@\@3\@AEAV53\@AEAV43\@\@Z\@Z
 */
MCAPI std::vector<std::string> splitLines(
    std::string const&,
    std::vector<std::string> const&,
    bool,
    bool,
    std::basic_istream<
        char,
        std::char_traits<char>>& (*)(std::basic_istream<char, std::char_traits<char>>&, std::string&)
);
/**
 * @symbol
 * ?splitString\@Util\@\@YAAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@DAEAV23\@\@Z
 */
MCAPI std::vector<std::string>& splitString(std::string_view, char, std::vector<std::string>&);
/**
 * @symbol
 * ?splitStringAsViews\@Util\@\@YAAEAV?$vector\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V?$allocator\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@DAEAV23\@\@Z
 */
MCAPI std::vector<std::string_view>& splitStringAsViews(std::string_view, char, std::vector<std::string_view>&);
/**
 * @symbol ?startsWith\@Util\@\@YA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0\@Z
 */
MCAPI bool startsWith(std::string_view, std::string_view);
/**
 * @symbol ?stringContains\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@D\@Z
 */
MCAPI bool stringContains(std::string const&, char);
/**
 * @symbol
 * ?stringReplace\@Util\@\@YAAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@AEBV23\@1H\@Z
 */
MCAPI std::string& stringReplace(std::string&, std::string const&, std::string const&, int);
/**
 * @symbol ?stringTrim\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string stringTrim(std::string const&);
/**
 * @symbol
 * ?stringTrim\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
 */
MCAPI std::string stringTrim(std::string const&, std::string const&);
/**
 * @symbol ?stripBOM\@Util\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void stripBOM(std::string&);
/**
 * @symbol ?timeoutForDuration\@Util\@\@YAXV?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@Z
 */
MCAPI void timeoutForDuration(std::chrono::seconds);
/**
 * @symbol ?toBool\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEA_N\@Z
 */
MCAPI bool toBool(std::string const&, bool&);
/**
 * @symbol
 * ?toCamelCase\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@D\@Z
 */
MCAPI std::string toCamelCase(std::string const&, char);
/**
 * @symbol
 * ?toHex\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::string toHex(std::string_view);
/**
 * @symbol
 * ?toIntWithMinMax\@Util\@\@YA?AW4NumberConversionResult\@1\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEAHHH\@Z
 */
MCAPI enum class Util::NumberConversionResult toIntWithMinMax(std::string_view, int&, int, int);
/**
 * @symbol ?toLower\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD\@Z
 */
MCAPI std::string toLower(char const*);
/**
 * @symbol
 * ?toLower\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::string toLower(std::string_view const&);
/**
 * @symbol ?toLowerInPlace\@Util\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void toLowerInPlace(std::string&);
/**
 * @symbol
 * ?toPascalCase\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@D\@Z
 */
MCAPI std::string toPascalCase(std::string const&, char);
/**
 * @symbol
 * ?toString\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$basic_string\@_WU?$char_traits\@_W\@std\@\@V?$allocator\@_W\@2\@\@3\@\@Z
 */
MCAPI std::string toString(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&);
/**
 * @symbol ?toString\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MH\@Z
 */
MCAPI std::string toString(float, int);
/**
 * @symbol ?toString\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string toString(std::string const&);
/**
 * @symbol
 * ?toStringWithPaddedZeroes\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@IE\@Z
 */
MCAPI std::string toStringWithPaddedZeroes(unsigned int, unsigned char);
/**
 * @symbol
 * ?toUpper\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::string toUpper(std::string_view const&);
/**
 * @symbol
 * ?toWideString\@Util\@\@YA?AV?$basic_string\@_WU?$char_traits\@_W\@std\@\@V?$allocator\@_W\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
 */
MCAPI std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> toWideString(std::string const&);
/**
 * @symbol ?utf8len\@Util\@\@YAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI int utf8len(std::string const&);
/**
 * @symbol
 * ?utf8substring\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@HH\@Z
 */
MCAPI std::string utf8substring(std::string const&, int, int);
/**
 * @symbol ?vFormat\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBDPEAD\@Z
 */
MCAPI std::string vFormat(char const*, char*);
/**
 * @symbol
 * ?validateIdentifier\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4LogArea\@\@_NPEAU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@3\@\@Z
 */
MCAPI bool validateIdentifier(std::string const&, enum class LogArea, bool, std::pair<std::string, std::string>*);
/**
 * @symbol
 * ?validateIdentifierChunk\@Util\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4LogArea\@\@\@Z
 */
MCAPI bool validateIdentifierChunk(std::string const&, enum class LogArea);
// NOLINTEND

}; // namespace Util
