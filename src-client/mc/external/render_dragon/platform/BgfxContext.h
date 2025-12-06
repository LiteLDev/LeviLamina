#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct BgfxContext {
public:
    // BgfxContext inner types declare
    // clang-format off
    struct DeviceLostInfo;
    struct InitBegin;
    struct InitBgfx;
    struct InitEnd;
    struct InitFinalize;
    struct InitLoadCallback;
    struct InitPending;
    struct InitShaderSDK;
    struct LocalResources;
    struct RegisteredWindow;
    // clang-format on

    // BgfxContext inner types define
    struct DeviceLostInfo {};

    struct InitBegin {};

    struct InitBgfx {};

    struct InitEnd {};

    struct InitFinalize {};

    struct InitLoadCallback {};

    struct InitPending {};

    struct InitShaderSDK {};

    struct LocalResources {};

    struct RegisteredWindow {};
};

} // namespace dragon::platform
