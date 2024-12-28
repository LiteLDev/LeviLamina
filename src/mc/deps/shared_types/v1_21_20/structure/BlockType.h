#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

enum class BlockType : uchar {
    AlwaysTrue       = 0,
    BlockMatch       = 1,
    RandomBlockMatch = 2,
    TagMatch         = 3,
};

}
