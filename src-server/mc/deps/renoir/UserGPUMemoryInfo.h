#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct UserGPUMemoryInfo {
public:
    // UserGPUMemoryInfo inner types declare
    // clang-format off
    struct UserResourceInfo;
    struct RenderTargetResourceInfo;
    struct UserTexturesInfo;
    struct RenderTargetInfo;
    // clang-format on

    // UserGPUMemoryInfo inner types define
    struct UserResourceInfo {};

    struct RenderTargetResourceInfo {};

    struct UserTexturesInfo {};

    struct RenderTargetInfo {};
};

} // namespace renoir
