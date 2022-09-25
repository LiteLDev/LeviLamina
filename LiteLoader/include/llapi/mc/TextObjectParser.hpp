/**
 * @file  TextObjectParser.hpp
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
     * @hash   -1864173413
     * @symbol ?RAW_TEXT_ERROR_NOT_ARRAY@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_ARRAY;
    /**
     * @hash   365612833
     * @symbol ?RAW_TEXT_ERROR_NOT_OBJECT@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_OBJECT;
    /**
     * @hash   1139903921
     * @symbol ?RAW_TEXT_ERROR_NO_DATA@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NO_DATA;
    /**
     * @hash   1719828925
     * @symbol ?RAW_TEXT_ERROR_PARSE_FAILED@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_PARSE_FAILED;
    /**
     * @hash   2034797449
     * @symbol ?RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING;
    /**
     * @hash   163180731
     * @symbol ?RAW_TEXT_ERROR_SCORE_NOT_OBJECT@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NOT_OBJECT;
    /**
     * @hash   -2146505301
     * @symbol ?RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING;
    /**
     * @hash   1594169083
     * @symbol ?RAW_TEXT_ERROR_SELECTOR_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SELECTOR_NOT_STRING;
    /**
     * @hash   -2039997921
     * @symbol ?RAW_TEXT_ERROR_TEXT_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_TEXT_NOT_STRING;
    /**
     * @hash   1108151591
     * @symbol ?RAW_TEXT_ERROR_TRANSLATE_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_TRANSLATE_NOT_STRING;
    /**
     * @hash   2124602005
     * @symbol ?RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT;
    /**
     * @hash   495678562
     * @symbol ?textObjectFromJsonServer@TextObjectParser@@SA_NAEBVValue@Json@@AEAVTextObjectRoot@@UServerData@1@AEAUErrorLocalization@1@@Z
     */
    MCAPI static bool textObjectFromJsonServer(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData, struct TextObjectParser::ErrorLocalization &);
    /**
     * @hash   1719368657
     * @symbol ?textObjectFromJsonString@TextObjectParser@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVTextObjectRoot@@AEAV23@@Z
     */
    MCAPI static bool textObjectFromJsonString(std::string const &, class TextObjectRoot &, std::string &);

//private:
    /**
     * @hash   1991268796
     * @symbol ?_getObjectsFromTextObject@TextObjectParser@@CA_NAEBVValue@Json@@AEAVTextObjectRoot@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
     */
    MCAPI static bool _getObjectsFromTextObject(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @hash   1201411671
     * @symbol ?_parseScoreTextObject@TextObjectParser@@CA_NAEAVTextObjectRoot@@AEBVValue@Json@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
     */
    MCAPI static bool _parseScoreTextObject(class TextObjectRoot &, class Json::Value const &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @hash   -395223886
     * @symbol ?_parseSelectorTextObject@TextObjectParser@@CA_NAEAVTextObjectRoot@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
     */
    MCAPI static bool _parseSelectorTextObject(class TextObjectRoot &, std::string, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @hash   1700171654
     * @symbol ?_textObjectFromJson@TextObjectParser@@CA_NAEBVValue@Json@@AEAVTextObjectRoot@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
     */
    MCAPI static bool _textObjectFromJson(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @hash   140942547
     * @symbol ?_textObjectFromString@TextObjectParser@@CA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVTextObjectRoot@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
     */
    MCAPI static bool _textObjectFromString(std::string const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);

private:

};