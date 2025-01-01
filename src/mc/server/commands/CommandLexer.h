#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandLexer {
public:
    // CommandLexer inner types declare
    // clang-format off
    struct Token;
    // clang-format on

    // CommandLexer inner types define
    enum class TokenType : int {
        Error                    = 0,
        Integer                  = 1,
        NInteger                 = 2,
        Identifier               = 3,
        Selector                 = 4,
        Slash                    = 5,
        Value                    = 6,
        RelativeValue            = 7,
        LocalDirectionalValue    = 8,
        Equals                   = 9,
        Comma                    = 10,
        Colon                    = 11,
        Not                      = 12,
        Asterisk                 = 13,
        Hash                     = 14,
        OpenBracket              = 15,
        CloseBracket             = 16,
        OpenBrace                = 17,
        CloseBrace               = 18,
        String                   = 19,
        Range                    = 20,
        LessThan                 = 21,
        GreaterThan              = 22,
        LessThanEquals           = 23,
        GreaterThanEquals        = 24,
        PlusEquals               = 25,
        MinusEquals              = 26,
        TimesEquals              = 27,
        DivideEquals             = 28,
        ModEquals                = 29,
        GreaterThanLessThan      = 30,
        IdentifierFilenameSubset = 31,
        Unknown                  = 32,
        End                      = 33,
    };

    struct Token {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const*>               text;
        ::ll::TypedStorage<4, 4, uint>                      length;
        ::ll::TypedStorage<4, 4, ::CommandLexer::TokenType> type;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::string const&>   mInput;
    ::ll::TypedStorage<8, 16, ::CommandLexer::Token> mToken;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandLexer(::std::string const& commandInput);

    MCAPI ::CommandLexer::Token const& next() const;

    MCAPI void step();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isDigit(char c);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& commandInput);
    // NOLINTEND
};
