#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"

namespace mce {

class RenderTargetState {
public:
    // RenderTargetState inner types declare
    // clang-format off
    struct StencilOverride;
    // clang-format on

    // RenderTargetState inner types define
    struct StencilOverride {
    public:
        // member variables
        // NOLINTBEGIN
        uchar                          bits : 4;
        ::ll::TypedStorage<1, 1, bool> enabled;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::mce::RenderTargetState::StencilOverride> highStencilBitsOverride;
    ::ll::TypedStorage<4, 32, ::std::array<::mce::TextureFormat, 8>>    renderTargetFormat;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat>                      depthTextureFormat;
    ::ll::TypedStorage<4, 4, uint>                                      currentRenderTargetsBound;
    ::ll::TypedStorage<4, 4, uint>                                      currentRenderTargetMSAACount;
    ::ll::TypedStorage<1, 1, ::mce::PrimitiveMode>                      lastPrimitiveMode;
    ::ll::TypedStorage<1, 1, uchar>                                     lastStencilRef;
    ::ll::TypedStorage<1, 1, uchar>                                     stencilRef;
    // NOLINTEND
};

} // namespace mce
