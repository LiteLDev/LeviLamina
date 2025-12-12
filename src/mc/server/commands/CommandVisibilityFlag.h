#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandVisibilityFlag : ushort {
    Visible                      = 0,
    HiddenFromCommandBlockOrigin = 2,
    HiddenFromPlayerOrigin       = 4,
    HiddenFromAutomationOrigin   = 8,
    Hidden                       = 6,
    Removed                      = 14,
};
