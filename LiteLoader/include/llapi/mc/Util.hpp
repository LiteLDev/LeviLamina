/**
 * @file  MC/Util.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace Util.
 *
 */
namespace Util {

#define AFTER_EXTRA
// Add Member There
struct ResourceUri {
enum class ValidationStatus;

};
class EntityComponentProcessor {
public:
    EntityComponentProcessor() = delete;
    EntityComponentProcessor(EntityComponentProcessor const&) = delete;
    EntityComponentProcessor(EntityComponentProcessor const&&) = delete;
};
enum class NumberConversionResult;
template <typename T0, int i1, int i2, int i3>
class MultidimensionalArray {
public:
    MultidimensionalArray() = delete;
    MultidimensionalArray(MultidimensionalArray const&) = delete;
    MultidimensionalArray(MultidimensionalArray const&&) = delete;
};

struct FormattedString {
    FormattedString() = delete;
    FormattedString(FormattedString const&) = delete;
    FormattedString(FormattedString const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @hash   417157797
     * @symbol ?COLOR_CODE@Util@@3HB
     */
    MCAPI extern int const COLOR_CODE;
    /**
     * @hash   984319783
     * @symbol ?EMPTY_GUID@Util@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const EMPTY_GUID;
    /**
     * @hash   -1721394889
     * @symbol ?EMPTY_STRING@Util@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const EMPTY_STRING;
    /**
     * @hash   1016895671
     * @symbol ?NEW_LINE@Util@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const NEW_LINE;
    /**
     * @hash   1740063406
     * @symbol ?_breakIntoWordsAndFindProfanity@Util@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@HH@std@@V?$allocator@U?$pair@HH@std@@@2@@3@AEBV?$unordered_set@DU?$hash@D@std@@U?$equal_to@D@2@V?$allocator@D@2@@3@AEAV?$set@U?$pair@HH@std@@U?$less@U?$pair@HH@std@@@2@V?$allocator@U?$pair@HH@std@@@2@@3@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@3@AEBV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI void _breakIntoWordsAndFindProfanity(std::string &, std::vector<struct std::pair<int, int>> const &, class std::unordered_set<char, struct std::hash<char>, struct std::equal_to<char>, class std::allocator<char>> const &, class std::set<struct std::pair<int, int>, struct std::less<struct std::pair<int, int>>, class std::allocator<struct std::pair<int, int>>> &, class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> const &, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> const &);
    /**
     * @hash   -861107122
     * @symbol ?_logIfValidLogArea@Util@@YAXW4LogArea@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _logIfValidLogArea(enum LogArea, std::string const &);
    /**
     * @hash   -214755237
     * @symbol ?_recordProfanityLocationInWord@Util@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@HH@std@@V?$allocator@U?$pair@HH@std@@@2@@3@HHAEAV?$set@U?$pair@HH@std@@U?$less@U?$pair@HH@std@@@2@V?$allocator@U?$pair@HH@std@@@2@@3@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@3@AEBV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI void _recordProfanityLocationInWord(std::string const &, std::vector<struct std::pair<int, int>> const &, int, int, class std::set<struct std::pair<int, int>, struct std::less<struct std::pair<int, int>>, class std::allocator<struct std::pair<int, int>>> &, class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> const &, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> const &);
    /**
     * @hash   -957014020
     * @symbol ?allocateVFormat@Util@@YA?AUFormattedString@1@PEBDPEAD@Z
     */
    MCAPI struct Util::FormattedString allocateVFormat(char const *, char *);
    /**
     * @hash   1303185350
     * @symbol ?base64_decode@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string base64_decode(std::string const &);
    /**
     * @hash   -1137905283
     * @symbol ?base64_encode@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@_N@Z
     */
    MCAPI std::string base64_encode(std::string const &, bool);
    /**
     * @hash   -1838017354
     * @symbol ?base64_encode@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBE_K_N@Z
     */
    MCAPI std::string base64_encode(unsigned char const *, unsigned __int64, bool);
    /**
     * @hash   -366004336
     * @symbol ?base64url_decode@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
     */
    MCAPI std::string base64url_decode(std::string);
    /**
     * @hash   -761059584
     * @symbol ?base64url_encode@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
     */
    MCAPI std::string base64url_encode(std::string);
    /**
     * @hash   71896392
     * @symbol ?boolToString@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI std::string boolToString(bool);
    /**
     * @hash   -31951372
     * @symbol ?clearAndReturn@Util@@YAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
     */
    MCAPI std::string & clearAndReturn(std::string &);
    /**
     * @hash   175083411
     * @symbol ?compareNoCase@Util@@YA_NV?$basic_string_span@$$CBD$0?0@gsl@@0@Z
     */
    MCAPI bool compareNoCase(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -474742490
     * @symbol ?cp1252ToUTF8@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string cp1252ToUTF8(std::string const &);
    /**
     * @hash   835124
     * @symbol ?cp437ToUTF8@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string cp437ToUTF8(std::string const &);
    /**
     * @hash   -876108213
     * @symbol ?decompressRaw@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
     */
    MCAPI bool decompressRaw(std::string const &, std::string &);
    /**
     * @hash   130781230
     * @symbol ?endsWith@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI bool endsWith(std::string const &, std::string const &);
    /**
     * @hash   959165429
     * @symbol ?endsWith@Util@@YA_NV?$basic_string_span@$$CBD$0?0@gsl@@0@Z
     */
    MCAPI bool endsWith(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -1239992376
     * @symbol ?ensureNamespace@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string ensureNamespace(std::string const &);
    /**
     * @hash   -2124212947
     * @symbol ?filterProfanityFromString@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@3@AEBV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI std::string filterProfanityFromString(std::string const &, class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> const &, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> const &);
    /**
     * @hash   1729516101
     * @symbol ?findProfanityInString@Util@@YA?AV?$set@U?$pair@HH@std@@U?$less@U?$pair@HH@std@@@2@V?$allocator@U?$pair@HH@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@3@AEBV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI class std::set<struct std::pair<int, int>, struct std::less<struct std::pair<int, int>>, class std::allocator<struct std::pair<int, int>>> findProfanityInString(std::string const &, class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> const &, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> const &);
    /**
     * @hash   812142284
     * @symbol ?format@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDZZ
     */
    MCAPI std::string format(char const *, ...);
    /**
     * @hash   -216215237
     * @symbol ?freeStringMemory@Util@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void freeStringMemory(std::string &);
    /**
     * @hash   1982860736
     * @symbol ?fromHex@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string fromHex(std::string const &);
    /**
     * @hash   1305148630
     * @symbol ?generateHashMapFromListTag@Util@@YA?AV?$BidirectionalUnorderedMap@H_K@@AEBVListTag@@@Z
     */
    MCAPI class BidirectionalUnorderedMap<int, unsigned __int64> generateHashMapFromListTag(class ListTag const &);
    /**
     * @hash   47866631
     * @symbol ?getDataInheritance@Util@@YA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI struct std::pair<std::string, std::string> getDataInheritance(std::string const &);
    /**
     * @hash   -1443745062
     * @symbol ?getNameWithoutNamespace@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string getNameWithoutNamespace(std::string const &);
    /**
     * @hash   -732546854
     * @symbol ?getNamespace@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string getNamespace(std::string const &);
    /**
     * @hash   -93343888
     * @symbol ?hashCode@Util@@YAIV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     */
    MCAPI unsigned int hashCode(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @hash   -2074113994
     * @symbol ?hashCodeAsUtf16@Util@@YAIV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     */
    MCAPI unsigned int hashCodeAsUtf16(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @hash   -33512673
     * @symbol ?isAlphaNumeric@Util@@YA_ND@Z
     */
    MCAPI bool isAlphaNumeric(char);
    /**
     * @hash   -1309959641
     * @symbol ?isAlphabeticChar@Util@@YA_ND@Z
     */
    MCAPI bool isAlphabeticChar(char);
    /**
     * @hash   -904938695
     * @symbol ?isDigit@Util@@YA_ND@Z
     */
    MCAPI bool isDigit(char);
    /**
     * @hash   713174175
     * @symbol ?isIdentifierChar@Util@@YA_ND@Z
     */
    MCAPI bool isIdentifierChar(char);
    /**
     * @hash   -1469946431
     * @symbol ?isIntegral@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI bool isIntegral(std::string const &, bool);
    /**
     * @hash   1424911809
     * @symbol ?isStartIdentifierChar@Util@@YA_ND@Z
     */
    MCAPI bool isStartIdentifierChar(char);
    /**
     * @hash   1448936293
     * @symbol ?isUpperCaseAlphabetic@Util@@YA_ND@Z
     */
    MCAPI bool isUpperCaseAlphabetic(char);
    /**
     * @hash   1733669898
     * @symbol ?isValidNamespaceFormat@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool isValidNamespaceFormat(std::string const &);
    /**
     * @hash   -853270078
     * @symbol ?isValidUTF8@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool isValidUTF8(std::string const &);
    /**
     * @hash   474010774
     * @symbol ?isVanillaNamespace@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool isVanillaNamespace(std::string const &);
    /**
     * @hash   -2017802247
     * @symbol ?isWhiteSpace@Util@@YAHD@Z
     */
    MCAPI int isWhiteSpace(char);
    /**
     * @hash   -659279200
     * @symbol ?loadGameVersion@Util@@YAXAEAVSemVersion@@AEBVValue@Json@@@Z
     */
    MCAPI void loadGameVersion(class SemVersion &, class Json::Value const &);
    /**
     * @hash   -1153065661
     * @symbol ?removeChars@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@AEBV23@@Z
     */
    MCAPI std::string removeChars(std::string, std::string const &);
    /**
     * @hash   426425648
     * @symbol ?removeIllegalChars@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
     */
    MCAPI std::string removeIllegalChars(std::string);
    /**
     * @hash   -354844800
     * @symbol ?removeTrailingSpaces@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
     */
    MCAPI std::string removeTrailingSpaces(std::string);
    /**
     * @hash   -1021162161
     * @symbol ?replaceUtf8CharactersWithAscii@Util@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@std@@@2@@3@@Z
     */
    MCAPI void replaceUtf8CharactersWithAscii(std::string &, std::vector<struct std::pair<std::string, char>> const &);
    /**
     * @hash   -2016999459
     * @symbol ?safeGetline@Util@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@std@@AEAV23@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI class std::basic_istream<char, struct std::char_traits<char>> & safeGetline(class std::basic_istream<char, struct std::char_traits<char>> &, std::string &);
    /**
     * @hash   1220639458
     * @symbol ?simpleFormat@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI std::string simpleFormat(std::string const &, std::vector<std::string> const &);
    /**
     * @hash   834194801
     * @symbol ?split@Util@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@D@Z
     */
    MCAPI std::vector<std::string> split(std::string const &, char);
    /**
     * @hash   1262742869
     * @symbol ?splitLines@Util@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV23@_N2P6AAEAV?$basic_istream@DU?$char_traits@D@std@@@3@AEAV53@AEAV43@@Z@Z
     */
    MCAPI std::vector<std::string> splitLines(std::string const &, std::vector<std::string> const &, bool, bool, class std::basic_istream<char, struct std::char_traits<char>> & ( *)(class std::basic_istream<char, struct std::char_traits<char>> &, std::string &));
    /**
     * @symbol ?splitString@Util@@YAAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@DAEAV23@@Z
     */
    MCAPI std::vector<std::string> & splitString(class std::basic_string_view<char, struct std::char_traits<char>>, char, std::vector<std::string> &);
    /**
     * @symbol ?splitStringAsViews@Util@@YAAEAV?$vector@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$allocator@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@DAEAV23@@Z
     */
    MCAPI std::vector<class std::basic_string_view<char, struct std::char_traits<char>>> & splitStringAsViews(class std::basic_string_view<char, struct std::char_traits<char>>, char, std::vector<class std::basic_string_view<char, struct std::char_traits<char>>> &);
    /**
     * @hash   1890854272
     * @symbol ?startsWith@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI bool startsWith(std::string const &, std::string const &);
    /**
     * @hash   -1171885915
     * @symbol ?startsWith@Util@@YA_NV?$basic_string_span@$$CBD$0?0@gsl@@0@Z
     */
    MCAPI bool startsWith(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -1039644262
     * @symbol ?stringContains@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@Z
     */
    MCAPI bool stringContains(std::string const &, char);
    /**
     * @hash   1718321403
     * @symbol ?stringReplace@Util@@YAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@AEBV23@1H@Z
     */
    MCAPI std::string & stringReplace(std::string &, std::string const &, std::string const &, int);
    /**
     * @hash   -2115581826
     * @symbol ?stringTrim@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
     */
    MCAPI std::string stringTrim(std::string const &, std::string const &);
    /**
     * @hash   -1824590322
     * @symbol ?stringTrim@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string stringTrim(std::string const &);
    /**
     * @hash   281413147
     * @symbol ?stripBOM@Util@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void stripBOM(std::string &);
    /**
     * @hash   498565854
     * @symbol ?toBool@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEA_N@Z
     */
    MCAPI bool toBool(std::string const &, bool &);
    /**
     * @hash   -382705736
     * @symbol ?toCamelCase@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@D@Z
     */
    MCAPI std::string toCamelCase(std::string const &, char);
    /**
     * @hash   1404794610
     * @symbol ?toHex@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string toHex(std::string const &);
    /**
     * @hash   1588518461
     * @symbol ?toIntWithMinMax@Util@@YA?AW4NumberConversionResult@1@V?$basic_string_span@$$CBD$0?0@gsl@@AEAHHH@Z
     */
    MCAPI enum Util::NumberConversionResult toIntWithMinMax(class gsl::basic_string_span<char const, -1>, int &, int, int);
    /**
     * @hash   278094181
     * @symbol ?toLower@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD@Z
     */
    MCAPI std::string toLower(char const *);
    /**
     * @hash   -981717738
     * @symbol ?toLower@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string toLower(std::string const &);
    /**
     * @hash   1106777686
     * @symbol ?toLower@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI std::string toLower(class gsl::basic_string_span<char const, -1> const &);
    /**
     * @hash   -331917925
     * @symbol ?toLowerInPlace@Util@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void toLowerInPlace(std::string &);
    /**
     * @hash   36530171
     * @symbol ?toString@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MH@Z
     */
    MCAPI std::string toString(float, int);
    /**
     * @hash   -1393320019
     * @symbol ?toString@Util@@YAPEBDW4BoneTransformType@@@Z
     */
    MCAPI char const * toString(enum BoneTransformType);
    /**
     * @hash   -473566148
     * @symbol ?toString@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string toString(std::string const &);
    /**
     * @hash   1697039868
     * @symbol ?toString@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z
     */
    MCAPI std::string toString(class std::basic_string<wchar_t, struct std::char_traits<wchar_t>, class std::allocator<wchar_t>> const &);
    /**
     * @hash   886149880
     * @symbol ?toStringWithPaddedZeroes@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IE@Z
     */
    MCAPI std::string toStringWithPaddedZeroes(unsigned int, unsigned char);
    /**
     * @hash   362009156
     * @symbol ?toUpper@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string toUpper(std::string const &);
    /**
     * @hash   -892010620
     * @symbol ?toUpper@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI std::string toUpper(class gsl::basic_string_span<char const, -1> const &);
    /**
     * @hash   -1882439500
     * @symbol ?toWideString@Util@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI class std::basic_string<wchar_t, struct std::char_traits<wchar_t>, class std::allocator<wchar_t>> toWideString(std::string const &);
    /**
     * @hash   1217077652
     * @symbol ?utf8len@Util@@YAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI int utf8len(std::string const &);
    /**
     * @hash   803341442
     * @symbol ?utf8substring@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@HH@Z
     */
    MCAPI std::string utf8substring(std::string const &, int, int);
    /**
     * @hash   -1547808143
     * @symbol ?vFormat@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDPEAD@Z
     */
    MCAPI std::string vFormat(char const *, char *);
    /**
     * @hash   -1250440235
     * @symbol ?validateIdentifier@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LogArea@@_NPEAU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@3@@Z
     */
    MCAPI bool validateIdentifier(std::string const &, enum LogArea, bool, struct std::pair<std::string, std::string> *);
    /**
     * @hash   -165264839
     * @symbol ?validateIdentifierChunk@Util@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LogArea@@@Z
     */
    MCAPI bool validateIdentifierChunk(std::string const &, enum LogArea);

};