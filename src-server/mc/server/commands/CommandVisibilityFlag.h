#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandVisibilityFlag : ushort {
    // bitfield representation
    Visible                      = 0,
    HiddenFromCommandBlockOrigin = 1 << 1,
    HiddenFromPlayerOrigin       = 1 << 2,
    HiddenFromAutomationOrigin   = 1 << 3,
    Hidden                       = HiddenFromCommandBlockOrigin | HiddenFromPlayerOrigin,
    Removed                      = HiddenFromCommandBlockOrigin | HiddenFromPlayerOrigin | HiddenFromAutomationOrigin,
};
