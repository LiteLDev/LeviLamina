/**
 * @file  TextObjectParser.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -161043085
     * @symbol  ?RAW_TEXT_ERROR_NOT_ARRAY\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_ARRAY;
    /**
     * @hash   2068743161
     * @symbol  ?RAW_TEXT_ERROR_NOT_OBJECT\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_OBJECT;
    /**
     * @hash   -1451933047
     * @symbol  ?RAW_TEXT_ERROR_NO_DATA\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NO_DATA;
    /**
     * @hash   -872008043
     * @symbol  ?RAW_TEXT_ERROR_PARSE_FAILED\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_PARSE_FAILED;
    /**
     * @hash   -557039519
     * @symbol  ?RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING;
    /**
     * @hash   1866311059
     * @symbol  ?RAW_TEXT_ERROR_SCORE_NOT_OBJECT\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NOT_OBJECT;
    /**
     * @hash   -443374973
     * @symbol  ?RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING;
    /**
     * @hash   -997667885
     * @symbol  ?RAW_TEXT_ERROR_SELECTOR_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SELECTOR_NOT_STRING;
    /**
     * @hash   -336867593
     * @symbol  ?RAW_TEXT_ERROR_TEXT_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_TEXT_NOT_STRING;
    /**
     * @hash   -1483685377
     * @symbol  ?RAW_TEXT_ERROR_TRANSLATE_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_TRANSLATE_NOT_STRING;
    /**
     * @hash   -467234963
     * @symbol  ?RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT;
    /**
     * @hash   -87717630
     * @symbol  ?textObjectFromJsonServer\@TextObjectParser\@\@SA_NAEBVValue\@Json\@\@AEAVTextObjectRoot\@\@UServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool textObjectFromJsonServer(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData, struct TextObjectParser::ErrorLocalization &);
    /**
     * @hash   1135972465
     * @symbol  ?textObjectFromJsonString\@TextObjectParser\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVTextObjectRoot\@\@AEAV23\@\@Z
     */
    MCAPI static bool textObjectFromJsonString(std::string const &, class TextObjectRoot &, std::string &);

//private:
    /**
     * @hash   1407749596
     * @symbol  ?_getObjectsFromTextObject\@TextObjectParser\@\@CA_NAEBVValue\@Json\@\@AEAVTextObjectRoot\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool _getObjectsFromTextObject(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @hash   618046231
     * @symbol  ?_parseScoreTextObject\@TextObjectParser\@\@CA_NAEAVTextObjectRoot\@\@AEBVValue\@Json\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool _parseScoreTextObject(class TextObjectRoot &, class Json::Value const &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @hash   -978620078
     * @symbol  ?_parseSelectorTextObject\@TextObjectParser\@\@CA_NAEAVTextObjectRoot\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool _parseSelectorTextObject(class TextObjectRoot &, std::string, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @hash   1116790838
     * @symbol  ?_textObjectFromJson\@TextObjectParser\@\@CA_NAEBVValue\@Json\@\@AEAVTextObjectRoot\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool _textObjectFromJson(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @hash   -442438269
     * @symbol  ?_textObjectFromString\@TextObjectParser\@\@CA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVTextObjectRoot\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool _textObjectFromString(std::string const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);

private:

};