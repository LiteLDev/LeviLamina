#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandVisibilityFlag : ushort {
    Visible                      = 0,
    HiddenFromCommandBlockOrigin = 1 << 1,
    HiddenFromPlayerOrigin       = 1 << 2,
    HiddenFromAutomationOrigin   = 1 << 3,
    Hidden                       = HiddenFromPlayerOrigin | HiddenFromCommandBlockOrigin,
    Removed                      = Hidden | HiddenFromAutomationOrigin,
};
