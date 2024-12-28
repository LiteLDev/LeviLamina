#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandRawText {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandRawText& operator=(CommandRawText const&);
    CommandRawText(CommandRawText const&);
    CommandRawText();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& getText() const;
    // NOLINTEND
};
