#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandEditorFlag : unsigned short {
    Editor   = 0,
    NoEditor = 1 << 9,
};
