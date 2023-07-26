#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SplitBlockUtils {

struct BlockNameRefAuxVariant {

public:
    // prevent constructor by default
    BlockNameRefAuxVariant& operator=(BlockNameRefAuxVariant const&) = delete;
    BlockNameRefAuxVariant(BlockNameRefAuxVariant const&)            = delete;
    BlockNameRefAuxVariant()                                         = delete;
};

}; // namespace SplitBlockUtils
