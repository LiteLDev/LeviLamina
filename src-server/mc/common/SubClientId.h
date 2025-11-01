#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SubClientId : uchar {
    Server = 0,
    PrimaryClient = 0,
    Client2 = 1,
    Client3 = 2,
    Client4 = 3,
    ExtraIdSlotStart = 100,
    EditorUI = 101,
};
