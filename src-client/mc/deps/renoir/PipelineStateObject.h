#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct PipelineStateObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk417575;
    // NOLINTEND

public:
    // prevent constructor by default
    PipelineStateObject& operator=(PipelineStateObject const&);
    PipelineStateObject(PipelineStateObject const&);
    PipelineStateObject();
};

} // namespace renoir
