#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Features; }
namespace Json { class Value; }
// clang-format on

namespace Json {

class Reader {
public:
    // Reader inner types declare
    // clang-format off
    class ErrorInfo;
    class Token;
    // clang-format on

    // Reader inner types define
    enum class TokenType {};

    class ErrorInfo {
    public:
        // prevent constructor by default
        ErrorInfo& operator=(ErrorInfo const&);
        ErrorInfo(ErrorInfo const&);
        ErrorInfo();

    public:
        // NOLINTBEGIN
        MCAPI ~ErrorInfo();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    class Token {
    public:
        // prevent constructor by default
        Token& operator=(Token const&);
        Token(Token const&);
        Token();
    };

public:
    // prevent constructor by default
    Reader& operator=(Reader const&);
    Reader(Reader const&);

public:
    // NOLINTBEGIN
    MCAPI Reader();

    MCAPI explicit Reader(class Json::Features const& features);

    MCAPI std::string getFormattedErrorMessages() const;

    MCAPI bool parse(std::istream& sin, class Json::Value& root, bool collectComments);

    MCAPI bool parse(std::string const& document, class Json::Value& root, bool collectComments);

    MCAPI bool parse(char const* originalBegin, uint64 length, class Json::Value& root, bool collectComments);

    MCAPI ~Reader();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool addError(std::string const& message, class Json::Reader::Token& token, char const* extra);

    MCAPI class Json::Value decodeDouble(class Json::Reader::Token& token, bool& successful);

    MCAPI class Json::Value decodeNumber(class Json::Reader::Token& token, bool& successful);

    MCAPI bool decodeString(class Json::Reader::Token& token, char* decoded);

    MCAPI class Json::Value::CZString decodeString(class Json::Reader::Token& token, bool& successful);

    MCAPI bool
    decodeUnicodeCodePoint(class Json::Reader::Token& token, char const*& current, char const* end, uint& unicode);

    MCAPI bool
    decodeUnicodeEscapeSequence(class Json::Reader::Token& token, char const*& current, char const* end, uint& unicode);

    MCAPI std::string getLocationLineAndColumn(char const* location) const;

    MCAPI bool parse(char const* beginDoc, char const* endDoc, class Json::Value& root, bool);

    MCAPI class Json::Value readArray(class Json::Reader::Token&, bool& ok);

    MCAPI class Json::Value readObject(class Json::Reader::Token&, bool& successful);

    MCAPI bool readToken(class Json::Reader::Token& token);

    MCAPI class Json::Value readValue(bool& successful);

    MCAPI bool recoverFromError(::Json::Reader::TokenType skipUntilToken);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class Json::Features const& features);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Json
