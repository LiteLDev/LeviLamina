#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandEditorFlag : ushort {
    Editor   = 0,
    NoEditor = 1 << 9,
};
