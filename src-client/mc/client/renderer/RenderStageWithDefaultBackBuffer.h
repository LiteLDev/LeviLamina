#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/RenderStage.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

namespace mce {

class RenderStageWithDefaultBackBuffer : public ::mce::RenderStage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void preRender(::ScreenContext& screenContext) /*override*/;

    virtual void postRender(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(::ScreenContext& screenContext);

    MCNAPI void $postRender(::ScreenContext& screenContext);
    // NOLINTEND
};

} // namespace mce
