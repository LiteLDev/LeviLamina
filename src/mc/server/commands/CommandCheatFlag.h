#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandCheatFlag : ushort {
    Cheat    = 0,
    NotCheat = 1 << 7,
};
