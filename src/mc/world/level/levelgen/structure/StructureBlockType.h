#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructureBlockType : int {
    Data    = 0x0,
    Save    = 0x1,
    Load    = 0x2,
    Corner  = 0x3,
    Invalid = 0x4,
    Export  = 0x5,
};
