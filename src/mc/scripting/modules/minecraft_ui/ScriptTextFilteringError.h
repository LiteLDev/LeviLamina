#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

enum class ScriptTextFilteringError : uchar {
    Unknown                         = 0,
    TextProcessorServiceUnreachable = 1,
    DisabledByPlayer                = 2,
};

}
