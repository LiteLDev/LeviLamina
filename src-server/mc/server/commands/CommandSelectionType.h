#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandSelectionType : int {
    Self = 0,
    Entities = 1,
    Players = 2,
    DefaultPlayers = 3,
    OwnedAgent = 4,
    Agents = 5,
    Initiator = 6,
};
