#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

enum class StructureProcessorType : uchar {
    Undefined = 0,
    BlockIgnore = 1,
    Capped = 2,
    Gravity = 3,
    JigsawReplacement = 4,
    Rule = 5,
    Protected = 6,
};

}
