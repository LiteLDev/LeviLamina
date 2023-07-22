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
     * @symbol  ?RAW_TEXT_ERROR_NOT_ARRAY\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_ARRAY;
    /**
     * @symbol  ?RAW_TEXT_ERROR_NOT_OBJECT\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_OBJECT;
    /**
     * @symbol  ?RAW_TEXT_ERROR_NO_DATA\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NO_DATA;
    /**
     * @symbol  ?RAW_TEXT_ERROR_PARSE_FAILED\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_PARSE_FAILED;
    /**
     * @symbol  ?RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING;
    /**
     * @symbol  ?RAW_TEXT_ERROR_SCORE_NOT_OBJECT\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NOT_OBJECT;
    /**
     * @symbol  ?RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING;
    /**
     * @symbol  ?RAW_TEXT_ERROR_SELECTOR_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SELECTOR_NOT_STRING;
    /**
     * @symbol  ?RAW_TEXT_ERROR_TEXT_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_TEXT_NOT_STRING;
    /**
     * @symbol  ?RAW_TEXT_ERROR_TRANSLATE_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_TRANSLATE_NOT_STRING;
    /**
     * @symbol  ?RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT;
    /**
     * @symbol  ?textObjectFromJsonServer\@TextObjectParser\@\@SA_NAEBVValue\@Json\@\@AEAVTextObjectRoot\@\@UServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool textObjectFromJsonServer(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData, struct TextObjectParser::ErrorLocalization &);
    /**
     * @symbol  ?textObjectFromJsonString\@TextObjectParser\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVTextObjectRoot\@\@AEAV23\@\@Z
     */
    MCAPI static bool textObjectFromJsonString(std::string const &, class TextObjectRoot &, std::string &);

//private:
    /**
     * @symbol  ?_getObjectsFromTextObject\@TextObjectParser\@\@CA_NAEBVValue\@Json\@\@AEAVTextObjectRoot\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool _getObjectsFromTextObject(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @symbol  ?_parseScoreTextObject\@TextObjectParser\@\@CA_NAEAVTextObjectRoot\@\@AEBVValue\@Json\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool _parseScoreTextObject(class TextObjectRoot &, class Json::Value const &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @symbol  ?_parseSelectorTextObject\@TextObjectParser\@\@CA_NAEAVTextObjectRoot\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool _parseSelectorTextObject(class TextObjectRoot &, std::string, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @symbol  ?_textObjectFromJson\@TextObjectParser\@\@CA_NAEBVValue\@Json\@\@AEAVTextObjectRoot\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool _textObjectFromJson(class Json::Value const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);
    /**
     * @symbol  ?_textObjectFromString\@TextObjectParser\@\@CA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVTextObjectRoot\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool _textObjectFromString(std::string const &, class TextObjectRoot &, struct TextObjectParser::ServerData *, struct TextObjectParser::ErrorLocalization &);

private:

};