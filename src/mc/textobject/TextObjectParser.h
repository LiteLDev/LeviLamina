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
    public:
        // prevent constructor by default
        ErrorLocalization& operator=(ErrorLocalization const&);
        ErrorLocalization(ErrorLocalization const&);
        ErrorLocalization();

    public:
        // NOLINTBEGIN
        // symbol: ??1ErrorLocalization@TextObjectParser@@QEAA@XZ
        MCAPI ~ErrorLocalization();

        // NOLINTEND
    };

    struct ServerData {
    public:
        // prevent constructor by default
        ServerData& operator=(ServerData const&);
        ServerData(ServerData const&);
        ServerData();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0ServerData@TextObjectParser@@QEAA@AEAVParser@CommandRegistry@@AEBVCommandOrigin@@AEBVScoreboard@@@Z
        MCAPI ServerData(
            class CommandRegistry::Parser& parser,
            class CommandOrigin const&,
            class Scoreboard const& scoreboard
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TextObjectParser& operator=(TextObjectParser const&);
    TextObjectParser(TextObjectParser const&);
    TextObjectParser();

public:
    // NOLINTBEGIN
    // symbol:
    // ?textObjectFromJson@TextObjectParser@@SA_NAEBVValue@Json@@AEAVTextObjectRoot@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool
    textObjectFromJson(class Json::Value const& root, class TextObjectRoot& parsedObject, std::string& errorMsg);

    // symbol:
    // ?textObjectFromJsonServer@TextObjectParser@@SA_NAEBVValue@Json@@AEAVTextObjectRoot@@UServerData@1@AEAUErrorLocalization@1@@Z
    MCAPI static bool textObjectFromJsonServer(
        class Json::Value const&                    root,
        class TextObjectRoot&                       parsedObject,
        struct TextObjectParser::ServerData         serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    // symbol:
    // ?textObjectFromJsonString@TextObjectParser@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVTextObjectRoot@@AEAV23@@Z
    MCAPI static bool textObjectFromJsonString(
        std::string const&    jsonAsString,
        class TextObjectRoot& parsedObject,
        std::string&          errorMsg
    );

    // symbol:
    // ?RAW_TEXT_ERROR_NOT_ARRAY@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_ARRAY;

    // symbol:
    // ?RAW_TEXT_ERROR_NOT_OBJECT@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_OBJECT;

    // symbol:
    // ?RAW_TEXT_ERROR_NO_DATA@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_NO_DATA;

    // symbol:
    // ?RAW_TEXT_ERROR_PARSE_FAILED@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_PARSE_FAILED;

    // symbol:
    // ?RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING;

    // symbol:
    // ?RAW_TEXT_ERROR_SCORE_NOT_OBJECT@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NOT_OBJECT;

    // symbol:
    // ?RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING;

    // symbol:
    // ?RAW_TEXT_ERROR_SELECTOR_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_SELECTOR_NOT_STRING;

    // symbol:
    // ?RAW_TEXT_ERROR_TEXT_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_TEXT_NOT_STRING;

    // symbol:
    // ?RAW_TEXT_ERROR_TRANSLATE_NOT_STRING@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_TRANSLATE_NOT_STRING;

    // symbol:
    // ?RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT@TextObjectParser@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getObjectsFromTextObject@TextObjectParser@@CA_NAEBVValue@Json@@AEAVTextObjectRoot@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
    MCAPI static bool _getObjectsFromTextObject(
        class Json::Value const&                    root,
        class TextObjectRoot&                       parsedObject,
        struct TextObjectParser::ServerData*        serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    // symbol:
    // ?_parseScoreTextObject@TextObjectParser@@CA_NAEAVTextObjectRoot@@AEBVValue@Json@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
    MCAPI static bool _parseScoreTextObject(
        class TextObjectRoot&                       parentTextObject,
        class Json::Value const&                    scoreObject,
        struct TextObjectParser::ServerData*        serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    // symbol:
    // ?_parseSelectorTextObject@TextObjectParser@@CA_NAEAVTextObjectRoot@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
    MCAPI static bool _parseSelectorTextObject(
        class TextObjectRoot&                       parentTextObject,
        std::string                                 selectorString,
        struct TextObjectParser::ServerData*        serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    // symbol:
    // ?_textObjectFromJson@TextObjectParser@@CA_NAEBVValue@Json@@AEAVTextObjectRoot@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
    MCAPI static bool _textObjectFromJson(
        class Json::Value const&                    root,
        class TextObjectRoot&                       parsedObject,
        struct TextObjectParser::ServerData*        serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    // symbol:
    // ?_textObjectFromString@TextObjectParser@@CA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVTextObjectRoot@@PEAUServerData@1@AEAUErrorLocalization@1@@Z
    MCAPI static bool _textObjectFromString(
        std::string const&                          jsonAsString,
        class TextObjectRoot&                       parsedObject,
        struct TextObjectParser::ServerData*        serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    // NOLINTEND
};
