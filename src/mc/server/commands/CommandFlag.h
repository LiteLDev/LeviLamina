#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandFlag {

public:
    // prevent constructor by default
    CommandFlag& operator=(CommandFlag const&) = delete;
    CommandFlag(CommandFlag const&)            = delete;
    CommandFlag()                              = delete;
};
