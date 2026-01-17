#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct ShadingPipelineObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdb547e;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadingPipelineObject& operator=(ShadingPipelineObject const&);
    ShadingPipelineObject(ShadingPipelineObject const&);
    ShadingPipelineObject();
};

} // namespace renoir
