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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
