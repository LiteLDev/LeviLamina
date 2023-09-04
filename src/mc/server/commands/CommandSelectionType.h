#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandSelectionType : int {
    Self           = 0x0,
    Entities       = 0x1,
    Players        = 0x2,
    DefaultPlayers = 0x3,
    OwnedAgent     = 0x4,
    Agents         = 0x5,
    Initiator      = 0x6,
};
