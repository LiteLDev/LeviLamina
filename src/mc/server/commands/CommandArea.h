#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandArea {
public:
    // prevent constructor by default
    CommandArea& operator=(CommandArea const&);
    CommandArea(CommandArea const&);
    CommandArea();

public:
    // NOLINTBEGIN
    MCAPI class BlockSource& getDimensionBlockSource();

    MCAPI ~CommandArea();

    // NOLINTEND
};
