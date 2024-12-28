#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandFlag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> flag;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandFlag& operator=(CommandFlag const&);
    CommandFlag(CommandFlag const&);
    CommandFlag();
};
