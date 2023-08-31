#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandEditorFlag : uint16_t {
    Editor   = 0,
    NoEditor = 1 << 9,
};
