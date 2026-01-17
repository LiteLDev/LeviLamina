#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct ShadingPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc360d3;
    ::ll::UntypedStorage<4, 4> mUnk5e9262;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadingPipeline& operator=(ShadingPipeline const&);
    ShadingPipeline(ShadingPipeline const&);
    ShadingPipeline();
};

} // namespace renoir
