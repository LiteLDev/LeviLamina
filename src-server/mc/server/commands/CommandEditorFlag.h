#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandEditorFlag : ushort {
    // bitfield representation
    Editor = 0,
    NotEditor = 1 << 9,
};
