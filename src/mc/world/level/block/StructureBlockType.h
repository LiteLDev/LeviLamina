#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructureBlockType : int {
    Data    = 0,
    Save    = 1,
    Load    = 2,
    Corner  = 3,
    Invalid = 4,
    Export  = 5,
    Count   = 6,
};
