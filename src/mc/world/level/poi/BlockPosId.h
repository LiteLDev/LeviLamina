#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct BlockPosId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk59f2f8;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPosId& operator=(BlockPosId const&);
    BlockPosId(BlockPosId const&);
    BlockPosId();
};

} // namespace Poi
