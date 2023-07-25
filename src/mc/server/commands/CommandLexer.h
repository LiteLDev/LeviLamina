#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandLexer {
public:
    // CommandLexer inner types declare
    // clang-format off
    struct Token;
    // clang-format on

    // CommandLexer inner types define
    struct Token {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDLEXER_TOKEN
    public:
        Token& operator=(Token const&) = delete;
        Token(Token const&)            = delete;
        Token()                        = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDLEXER
public:
    CommandLexer& operator=(CommandLexer const&) = delete;
    CommandLexer(CommandLexer const&)            = delete;
    CommandLexer()                               = delete;
#endif

public:
    /**
     * @symbol ?step\@CommandLexer\@\@QEAAXXZ
     */
    MCAPI void step();
};
