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
        Token& operator=(Token const&);
        Token(Token const&);
        Token();
    };

public:
    // prevent constructor by default
    CommandLexer& operator=(CommandLexer const&);
    CommandLexer(CommandLexer const&);
    CommandLexer();

public:
    // NOLINTBEGIN
    MCAPI explicit CommandLexer(std::string const& commandInput);

    MCAPI struct CommandLexer::Token const& next() const;

    MCAPI void step();

    MCAPI static bool isDigit(char c);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
