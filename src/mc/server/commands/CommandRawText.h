#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandRawText {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& getText() const;
    // NOLINTEND
};
