#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SlimVertexInstanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd931ce;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimVertexInstanceData& operator=(SlimVertexInstanceData const&);
    SlimVertexInstanceData(SlimVertexInstanceData const&);
    SlimVertexInstanceData();
};

} // namespace renoir
