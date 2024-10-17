#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SubClientId : uchar {
    PrimaryClient    = 0x0,
    Client2          = 0x1,
    Client3          = 0x2,
    Client4          = 0x3,
    ExtraIdSlotStart = 0x64,
    EditorUI         = 0x65,
};
