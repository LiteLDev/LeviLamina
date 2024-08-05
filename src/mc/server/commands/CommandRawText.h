#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandRawText {
public:
    // prevent constructor by default
    CommandRawText& operator=(CommandRawText const&);
    CommandRawText(CommandRawText const&);
    CommandRawText();

public:
    // NOLINTBEGIN
    MCAPI std::string const& getText() const;

    // NOLINTEND
};
