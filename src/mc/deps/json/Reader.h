#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Features.h"

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

    using Location = char const*;

    // Reader inner types define
    enum class TokenType : int {
        EndOfStream     = 0x0,
        ObjectBegin     = 0x1,
        ObjectEnd       = 0x2,
        ArrayBegin      = 0x3,
        ArrayEnd        = 0x4,
        String          = 0x5,
        Number          = 0x6,
        True            = 0x7,
        False           = 0x8,
        Null            = 0x9,
        ArraySeparator  = 0xA,
        MemberSeparator = 0xB,
        Comment         = 0xC,
        Error           = 0xD,
    };

    class Token {

    public:
        TokenType type_;
        Location  start_;
        Location  end_;
    };

    class ErrorInfo {
    public:
        Token       token_;
        std::string message_;
        Location    extra_;

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

    using Nodes  = std::stack<Value*>;
    using Errors = std::deque<ErrorInfo>;

public:
    Nodes          nodes_;
    Errors         errors_;
    std::string    document_;
    Location       begin_;
    Location       end_;
    Location       current_;
    Location       lastValueEnd_;
    Json::Value*   lastValue_;
    std::string    commentsBefore_;
    Json::Features features_;
    bool           collectComments_;

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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Json
