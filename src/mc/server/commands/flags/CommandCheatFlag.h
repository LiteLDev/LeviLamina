#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandCheatFlag : uint16_t {
    Cheat    = 0,
    NotCheat = 1 << 7,
};
