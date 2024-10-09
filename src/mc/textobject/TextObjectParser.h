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
        MCAPI ServerData(
            class CommandRegistry::Parser& parser,
            class CommandOrigin const&     commandOrigin,
            class Scoreboard const&        scoreboard
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
    MCAPI static bool
    textObjectFromJson(class Json::Value const& root, class TextObjectRoot& parsedObject, std::string& errorMsg);

    MCAPI static bool textObjectFromJsonServer(
        class Json::Value const&                    root,
        class TextObjectRoot&                       parsedObject,
        struct TextObjectParser::ServerData         serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool textObjectFromJsonString(
        std::string const&    jsonAsString,
        class TextObjectRoot& parsedObject,
        std::string&          errorMsg
    );

    MCAPI static std::string const RAW_TEXT_ERROR_NOT_ARRAY;

    MCAPI static std::string const RAW_TEXT_ERROR_NOT_OBJECT;

    MCAPI static std::string const RAW_TEXT_ERROR_NO_DATA;

    MCAPI static std::string const RAW_TEXT_ERROR_PARSE_FAILED;

    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING;

    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_NOT_OBJECT;

    MCAPI static std::string const RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING;

    MCAPI static std::string const RAW_TEXT_ERROR_SELECTOR_NOT_STRING;

    MCAPI static std::string const RAW_TEXT_ERROR_TEXT_NOT_STRING;

    MCAPI static std::string const RAW_TEXT_ERROR_TRANSLATE_NOT_STRING;

    MCAPI static std::string const RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _getObjectsFromTextObject(
        class Json::Value const&                    root,
        class TextObjectRoot&                       parsedObject,
        struct TextObjectParser::ServerData*        serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool _parseScoreTextObject(
        class TextObjectRoot&                       parentTextObject,
        class Json::Value const&                    scoreObject,
        struct TextObjectParser::ServerData*        serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool _parseSelectorTextObject(
        class TextObjectRoot&                       parentTextObject,
        std::string                                 selectorString,
        struct TextObjectParser::ServerData*        serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool _textObjectFromJson(
        class Json::Value const&                    root,
        class TextObjectRoot&                       parsedObject,
        struct TextObjectParser::ServerData*        serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool _textObjectFromString(
        std::string const&                          jsonAsString,
        class TextObjectRoot&                       parsedObject,
        struct TextObjectParser::ServerData*        serverData,
        struct TextObjectParser::ErrorLocalization& errorLocalization
    );

    // NOLINTEND
};
