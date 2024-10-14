#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {
public:
    // prevent constructor by default
    CommandFilePath& operator=(CommandFilePath const&);
    CommandFilePath(CommandFilePath const&);

public:
    // NOLINTBEGIN
    MCAPI CommandFilePath();

    MCAPI int findInvalidCharacter() const;

    MCAPI std::string const& getText() const;

    MCAPI ~CommandFilePath();

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
