#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandRegistry.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectParser {
public:
    // TextObjectParser inner types declare
    // clang-format off
    struct ErrorLocalization;
    struct ServerData;
    // clang-format on

    // TextObjectParser inner types define
    struct ErrorLocalization {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTPARSER_ERRORLOCALIZATION
    public:
        ErrorLocalization& operator=(ErrorLocalization const&) = delete;
        ErrorLocalization(ErrorLocalization const&)            = delete;
        ErrorLocalization()                                    = delete;
#endif

    public:
        /**
         * @symbol ??1ErrorLocalization\@TextObjectParser\@\@QEAA\@XZ
         */
        MCAPI ~ErrorLocalization();
    };

    struct ServerData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTPARSER_SERVERDATA
    public:
        ServerData& operator=(ServerData const&) = delete;
        ServerData(ServerData const&)            = delete;
        ServerData()                             = delete;
#endif

    public:
        /**
         * @symbol
         * ??0ServerData\@TextObjectParser\@\@QEAA\@AEAVParser\@CommandRegistry\@\@AEBVCommandOrigin\@\@AEBVScoreboard\@\@\@Z
         */
        MCAPI ServerData(class CommandRegistry::Parser&, class CommandOrigin const&, class Scoreboard const&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTPARSER
public:
    TextObjectParser& operator=(TextObjectParser const&) = delete;
    TextObjectParser(TextObjectParser const&)            = delete;
    TextObjectParser()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_NOT_ARRAY\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_ARRAY;
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_NOT_OBJECT\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_OBJECT;
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_NO_DATA\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_NO_DATA;
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_PARSE_FAILED\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_PARSE_FAILED;
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING;
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_SCORE_NOT_OBJECT\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NOT_OBJECT;
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING;
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_SELECTOR_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_SELECTOR_NOT_STRING;
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_TEXT_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_TEXT_NOT_STRING;
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_TRANSLATE_NOT_STRING\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_TRANSLATE_NOT_STRING;
    /**
     * @symbol
     * ?RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT\@TextObjectParser\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT;
    /**
     * @symbol
     * ?textObjectFromJson\@TextObjectParser\@\@SA_NAEBVValue\@Json\@\@AEAVTextObjectRoot\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool textObjectFromJson(class Json::Value const&, class TextObjectRoot&, std::string&);
    /**
     * @symbol
     * ?textObjectFromJsonServer\@TextObjectParser\@\@SA_NAEBVValue\@Json\@\@AEAVTextObjectRoot\@\@UServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool
    textObjectFromJsonServer(class Json::Value const&, class TextObjectRoot&, struct TextObjectParser::ServerData, struct TextObjectParser::ErrorLocalization&);
    /**
     * @symbol
     * ?textObjectFromJsonString\@TextObjectParser\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVTextObjectRoot\@\@AEAV23\@\@Z
     */
    MCAPI static bool textObjectFromJsonString(std::string const&, class TextObjectRoot&, std::string&);

    // private:
    /**
     * @symbol
     * ?_getObjectsFromTextObject\@TextObjectParser\@\@CA_NAEBVValue\@Json\@\@AEAVTextObjectRoot\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool
    _getObjectsFromTextObject(class Json::Value const&, class TextObjectRoot&, struct TextObjectParser::ServerData*, struct TextObjectParser::ErrorLocalization&);
    /**
     * @symbol
     * ?_parseScoreTextObject\@TextObjectParser\@\@CA_NAEAVTextObjectRoot\@\@AEBVValue\@Json\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool
    _parseScoreTextObject(class TextObjectRoot&, class Json::Value const&, struct TextObjectParser::ServerData*, struct TextObjectParser::ErrorLocalization&);
    /**
     * @symbol
     * ?_parseSelectorTextObject\@TextObjectParser\@\@CA_NAEAVTextObjectRoot\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool
    _parseSelectorTextObject(class TextObjectRoot&, std::string, struct TextObjectParser::ServerData*, struct TextObjectParser::ErrorLocalization&);
    /**
     * @symbol
     * ?_textObjectFromJson\@TextObjectParser\@\@CA_NAEBVValue\@Json\@\@AEAVTextObjectRoot\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool
    _textObjectFromJson(class Json::Value const&, class TextObjectRoot&, struct TextObjectParser::ServerData*, struct TextObjectParser::ErrorLocalization&);
    /**
     * @symbol
     * ?_textObjectFromString\@TextObjectParser\@\@CA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVTextObjectRoot\@\@PEAUServerData\@1\@AEAUErrorLocalization\@1\@\@Z
     */
    MCAPI static bool
    _textObjectFromString(std::string const&, class TextObjectRoot&, struct TextObjectParser::ServerData*, struct TextObjectParser::ErrorLocalization&);

private:
};
