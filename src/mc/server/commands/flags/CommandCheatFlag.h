#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandCheatFlag : unsigned short {
    Cheat    = 0,
    NotCheat = 1 << 7,
};
