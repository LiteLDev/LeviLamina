#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptCustomCommandParamType : int {
    Boolean        = 0,
    Integer        = 1,
    Float          = 2,
    String         = 3,
    EntitySelector = 4,
    PlayerSelector = 5,
    Location       = 6,
    BlockType      = 7,
    EntityType     = 8,
    ItemType       = 9,
    Enum           = 10,
};

}
