#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Features.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
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
    using Char = char;
    
    using Location = char const*;
    
    enum class TokenType : int {
        TokenEndOfStream = 0,
        TokenObjectBegin = 1,
        TokenObjectEnd = 2,
        TokenArrayBegin = 3,
        TokenArrayEnd = 4,
        TokenString = 5,
        TokenNumber = 6,
        TokenTrue = 7,
        TokenFalse = 8,
        TokenNull = 9,
        TokenArraySeparator = 10,
        TokenMemberSeparator = 11,
        TokenComment = 12,
        TokenError = 13,
    };
    
    class Token {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Json::Reader::TokenType> type_;
        ::ll::TypedStorage<8, 8, char const*> start_;
        ::ll::TypedStorage<8, 8, char const*> end_;
        ::ll::TypedStorage<1, 1, bool> stringHasEscape_;
        // NOLINTEND
    
    };
    
    class ErrorInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::Json::Reader::Token> token_;
        ::ll::TypedStorage<8, 32, ::std::string> message_;
        ::ll::TypedStorage<8, 8, char const*> extra_;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ErrorInfo();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    
    };
    
    using Errors = ::std::deque<::Json::Reader::ErrorInfo>;
    
    using Nodes = ::std::stack<::Json::Value*, ::std::deque<::Json::Value*>>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::stack<::Json::Value*, ::std::deque<::Json::Value*>>> nodes_;
    ::ll::TypedStorage<8, 40, ::std::deque<::Json::Reader::ErrorInfo>> errors_;
    ::ll::TypedStorage<8, 32, ::std::string> document_;
    ::ll::TypedStorage<8, 8, char const*> begin_;
    ::ll::TypedStorage<8, 8, char const*> end_;
    ::ll::TypedStorage<8, 8, char const*> current_;
    ::ll::TypedStorage<8, 8, char const*> lastValueEnd_;
    ::ll::TypedStorage<8, 8, ::Json::Value*> lastValue_;
    ::ll::TypedStorage<8, 32, ::std::string> commentsBefore_;
    ::ll::TypedStorage<1, 2, ::Json::Features> features_;
    ::ll::TypedStorage<1, 1, bool> collectComments_;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Reader();

    MCAPI explicit Reader(::Json::Features const& features);

    MCAPI bool addError(::std::string const& message, ::Json::Reader::Token& token, char const* extra);

    MCAPI ::Json::Value decodeDouble(::Json::Reader::Token& token, bool& successful);

    MCAPI ::Json::Value decodeNumber(::Json::Reader::Token& token, bool& successful);

    MCAPI bool decodeString(::Json::Reader::Token& token, char* decoded);

    MCAPI ::Json::Value::CZString decodeString(::Json::Reader::Token& token, bool& successful);

    MCAPI bool decodeUnicodeCodePoint(::Json::Reader::Token& token, char const*& current, char const* end, uint& unicode);

    MCAPI bool decodeUnicodeEscapeSequence(::Json::Reader::Token& token, char const*& current, char const* end, uint& unicode);

    MCAPI ::std::string getFormattedErrorMessages() const;

    MCAPI ::std::string getLocationLineAndColumn(char const* location) const;

    MCAPI bool parse(::std::string const& document, ::Json::Value& root, bool collectComments);

    MCAPI bool parse(::std::istream& sin, ::Json::Value& root, bool collectComments);

    MCAPI bool parse(char const* beginDoc, char const* endDoc, ::Json::Value& root, bool);

    MCAPI bool parse(char const* originalBegin, uint64 length, ::Json::Value& root, bool collectComments);

    MCAPI ::Json::Value readArray(::Json::Reader::Token&, bool& ok);

    MCAPI ::Json::Value readObject(::Json::Reader::Token&, bool& successful);

    MCAPI bool readToken(::Json::Reader::Token& token);

    MCAPI ::Json::Value readValue(bool& successful);

    MCAPI bool recoverFromError(::Json::Reader::TokenType skipUntilToken);

    MCAPI ~Reader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Json::Features const& features);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};

}
