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

    public:
        // prevent constructor by default
        Token& operator=(Token const&) = delete;
        Token(Token const&)            = delete;
        Token()                        = delete;
    };

public:
    // prevent constructor by default
    CommandLexer& operator=(CommandLexer const&) = delete;
    CommandLexer(CommandLexer const&)            = delete;
    CommandLexer()                               = delete;

public:
    /**
     * @symbol ?step\@CommandLexer\@\@QEAAXXZ
     */
    MCAPI void step(); // NOLINT
};
