#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandIntegerRange {
public:
    // prevent constructor by default
    CommandIntegerRange& operator=(CommandIntegerRange const&);
    CommandIntegerRange(CommandIntegerRange const&);

public:
    // NOLINTBEGIN
    MCAPI CommandIntegerRange();

    MCAPI CommandIntegerRange(int, int, bool, bool);

    MCAPI bool isWithinRange(int value) const;

    // NOLINTEND
};
