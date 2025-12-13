#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct BgfxFrameBuilder {
public:
    // BgfxFrameBuilder inner types declare
    // clang-format off
    struct InitBegin;
    struct InitBgfxContext;
    struct InitEnd;
    struct InitFinalize;
    struct InitPending;
    struct InitShaderSDK;
    struct InitializationState;
    // clang-format on

    // BgfxFrameBuilder inner types define
    struct InitBegin {};

    struct InitBgfxContext {};

    struct InitEnd {};

    struct InitFinalize {};

    struct InitPending {};

    struct InitShaderSDK {};

    struct InitializationState {};
};

} // namespace mce::framebuilder
