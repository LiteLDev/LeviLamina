#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptMovementType : uchar {
    PushPull = 0,
    Push = 1,
    Popped = 2,
    Immovable = 3,
};

}
