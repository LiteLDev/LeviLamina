#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Token {
public:
    // prevent constructor by default
    Token& operator=(Token const&);
    Token(Token const&);
    Token();

public:
    // NOLINTBEGIN
    MCAPI explicit Token(std::string const& str);

    MCAPI std::string const& getText(std::string const&) const;

    MCAPI ~Token();

    MCAPI static std::vector<struct Token> tokenize(std::string const& str);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _parseRandom();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string const& str);

    MCAPI void dtor$();

    // NOLINTEND
};
