#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        uchar                      mUnk2c6a4c : 4;
        ::ll::UntypedStorage<1, 1> mUnk3ab254;
        // NOLINTEND

    public:
        // prevent constructor by default
        StencilOverride& operator=(StencilOverride const&);
        StencilOverride(StencilOverride const&);
        StencilOverride();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnkaf100c;
    ::ll::UntypedStorage<4, 32> mUnke308fa;
    ::ll::UntypedStorage<4, 4>  mUnk5fb981;
    ::ll::UntypedStorage<4, 4>  mUnk51c219;
    ::ll::UntypedStorage<4, 4>  mUnkba514f;
    ::ll::UntypedStorage<1, 1>  mUnkd40165;
    ::ll::UntypedStorage<1, 1>  mUnk7042ba;
    ::ll::UntypedStorage<1, 1>  mUnk2f108b;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderTargetState& operator=(RenderTargetState const&);
    RenderTargetState(RenderTargetState const&);
    RenderTargetState();
};

} // namespace mce
