#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class RenderGraph {
public:
    // prevent constructor by default
    RenderGraph& operator=(RenderGraph const&);
    RenderGraph(RenderGraph const&);
    RenderGraph();
};

} // namespace mce
