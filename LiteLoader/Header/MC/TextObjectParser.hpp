/**
 * @file  TextObjectParser.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class TextObjectParser.
 *
 */
class TextObjectParser {

#define AFTER_EXTRA
// Add Member There
public:
struct ErrorLocalization {
    ErrorLocalization() = delete;
    ErrorLocalization(ErrorLocalization const&) = delete;
    ErrorLocalization(ErrorLocalization const&&) = delete;
};
struct ServerData {
    ServerData() = delete;
    ServerData(ServerData const&) = delete;
    ServerData(ServerData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTPARSER
public:
    class TextObjectParser& operator=(class TextObjectParser const &) = delete;
    TextObjectParser(class TextObjectParser const &) = delete;
    TextObjectParser() = delete;
#endif

public:
    /**
     * @symbol ?RAW_TEXT_ERROR_NOT_ARRAY@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1864173413
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_ARRAY;
    /**
     * @symbol ?RAW_TEXT_ERROR_NOT_OBJECT@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   365612833
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_OBJECT;
    /**
     * @symbol ?RAW_TEXT_ERROR_NO_DATA@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1139903921
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NO_DATA;
    /**
     * @symbol ?RAW_TEXT_ERROR_PARSE_FAILED@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1719828925
     */
    MCAPI static std::string const RAW_TEXT_ERROR_PARSE_FAILED;
    /**
     * @symbol ?RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   2034797449
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING;
    /**
     * @symbol ?RAW_TEXT_ERROR_SCORE_NOT_OBJECT@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   163180731
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NOT_OBJECT;
    /**
     * @symbol ?RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -2146505301
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING;
    /**
     * @symbol ?RAW_TEXT_ERROR_SELECTOR_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1594169083
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SELECTOR_NOT_STRING;
    /**
     * @symbol ?RAW_TEXT_ERROR_TEXT_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -2039997921
     */
    MCAPI static std::string const RAW_TEXT_ERROR_TEXT_NOT_STRING;
    /**
     * @symbol ?RAW_TEXT_ERROR_TRANSLATE_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1108151591
     */
    MCAPI static std::string const RAW_TEXT_ERROR_TRANSLATE_NOT_STRING;
    /**
     * @symbol ?RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   2124602005
     */
    MCAPI static std::string const RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT;
    /**
     * @symbol ?textObjectFromJsonServer@TextObjectParser@@SA_NAEBVValue@Json@@AEAVTextObjectRoot@@UServerData@1@AEAUErrorLocalization@1@@Z
     * @hash   495678562
     */
    MCAPI static bool textObjectFromJsonServer(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData, struct TextObjectParser::ErrorLocalization &);
    /**
     * @symbol ?textObjectFromJsonString@TextObjectParser@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVTextObjectRoot@@AEAV23@@Z
     * @hash   1719368657
     */
    MCAPI static bool textObjectFromJsonString(std::string const &, class TextObjectRoot &, std::string &);

//private:
    /**
     * @symbol ?_getObjectsFromTextObject@TextObjectParser@@CA_NAEBVValue@Json@@AEAVTextObjectRoot@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
     * @hash   1991268796
     */
    MCAPI static bool _getObjectsFromTextObject(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @symbol ?_parseScoreTextObject@TextObjectParser@@CA_NAEAVTextObjectRoot@@AEBVValue@Json@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
     * @hash   1201411671
     */
    MCAPI static bool _parseScoreTextObject(class TextObjectRoot &, class Json::Value const &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @symbol ?_parseSelectorTextObject@TextObjectParser@@CA_NAEAVTextObjectRoot@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
     * @hash   -395223886
     */
    MCAPI static bool _parseSelectorTextObject(class TextObjectRoot &, std::string, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @symbol ?_textObjectFromJson@TextObjectParser@@CA_NAEBVValue@Json@@AEAVTextObjectRoot@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
     * @hash   1700171654
     */
    MCAPI static bool _textObjectFromJson(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @symbol ?_textObjectFromString@TextObjectParser@@CA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVTextObjectRoot@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
     * @hash   140942547
     */
    MCAPI static bool _textObjectFromString(std::string const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);

private:

};