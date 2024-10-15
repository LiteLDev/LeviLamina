#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {
public:
    std::string mText; // this+0x0

public:
    // NOLINTBEGIN
    MCAPI int findInvalidCharacter() const;

    MCAPI std::string const& getText() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
