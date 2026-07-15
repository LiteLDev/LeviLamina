#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

namespace mce {

class RenderGraph {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7d84d1;
    ::ll::UntypedStorage<8, 64> mUnk794996;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderGraph& operator=(RenderGraph const&);
    RenderGraph(RenderGraph const&);
    RenderGraph();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void preRenderUpdate(::ScreenContext& screenContext);
    // NOLINTEND
};

} // namespace mce
