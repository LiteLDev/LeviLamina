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
        Error                    = 0,    // error
        Integer                  = 0x1,  // integer
        NInteger                 = 0x2,  // ninteger
        Identifier               = 0x3,  // identifier
        Selector                 = 0x4,  // selector
        Slash                    = 0x5,  // /
        Value                    = 0x6,  // value
        RelativeValue            = 0x7,  // rvalue
        LocalDirectionalValue    = 0x8,  // lvalue
        Equals                   = 0x9,  // =
        Comma                    = 0xa,  // ,
        Colon                    = 0xb,  // :
        Not                      = 0xc,  // !
        Asterisk                 = 0xd,  // *
        Hash                     = 0xe,  // #
        OpenBracket              = 0xf,  // [
        CloseBracket             = 0x10, // ]
        OpenBrace                = 0x11, // {
        CloseBrace               = 0x12, // }
        String                   = 0x13, // string
        Range                    = 0x14, // ..
        LessThan                 = 0x15, // <
        GreaterThan              = 0x16, // >
        LessThanEquals           = 0x17, // <=
        GreaterThanEquals        = 0x18, // >=
        PlusEquals               = 0x19, // +=
        MinusEquals              = 0x1a, // -=
        TimesEquals              = 0x1b, // *=
        DivideEquals             = 0x1c, // /=
        ModEquals                = 0x1d, // %=
        GreaterThanLessThan      = 0x1e, // ><
        IdentifierFilenameSubset = 0x1f, // cmdFilePath
        Unknown                  = 0x20, // unknown
        End                      = 0x21, // end
        Count,
    };

    struct Token {
        char const* text;   // this+0x0
        uint        length; // this+0x8
        TokenType   type;   // this+0xc
    };

public:
    // prevent constructor by default
    CommandLexer& operator=(CommandLexer const&);
    CommandLexer(CommandLexer const&);
    CommandLexer();

    std::string const&  mInput; // this+0x0
    CommandLexer::Token mToken; // this+0x8
public:
    // NOLINTBEGIN
    // symbol: ??0CommandLexer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit CommandLexer(std::string const& commandInput);

    // symbol: ?next@CommandLexer@@QEBAAEBUToken@1@XZ
    MCAPI struct CommandLexer::Token const& next() const;

    // symbol: ?step@CommandLexer@@QEAAXXZ
    MCAPI void step();

    // symbol: ?isDigit@CommandLexer@@SA_ND@Z
    MCAPI static bool isDigit(char c);

    // NOLINTEND
};
