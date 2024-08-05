#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {
public:
    std::string mText; // this+0x0

public:
    // NOLINTBEGIN
    MCAPI CommandFilePath();

    MCAPI int findInvalidCharacter() const;

    MCAPI std::string const& getText() const;

    MCAPI ~CommandFilePath();

    // NOLINTEND
};
