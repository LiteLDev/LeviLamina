#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::Processors {

enum class Type : int {
    BlockIgnore = 0,
    BlockRule = 1,
    Capped = 2,
    ProtectedBlocks = 3,
};

}
