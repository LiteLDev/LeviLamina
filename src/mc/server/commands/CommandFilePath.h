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
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
