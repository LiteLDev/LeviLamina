#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleDebugUtilities {

enum class ScriptDebugShapeType : uchar {
    Line          = 0,
    Box           = 1,
    Sphere        = 2,
    Circle        = 3,
    Text          = 4,
    Arrow         = 5,
    NumShapeTypes = 6,
};

}
