#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct DimensionPadding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk97a920;
    ::ll::UntypedStorage<4, 4> mUnk52fc9e;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionPadding& operator=(DimensionPadding const&);
    DimensionPadding(DimensionPadding const&);
    DimensionPadding();
};

} // namespace br::worldgen
