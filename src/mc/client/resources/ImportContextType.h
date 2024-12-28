#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ImportContextType : int {
    Default              = 0,
    Dlc                  = 1,
    InstructionalContent = 2,
    Template             = 3,
    Treatment            = 4,
    World                = 5,
    WorldPack            = 6,
};
