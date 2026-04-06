#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UIItemRenderInfo {
public:
    // UIItemRenderInfo inner types define
    enum class Flags : uchar {
        // bitfield representation
        Default          = 0,
        NeedsDepth       = 1 << 0,
        DoubleSidedAlpha = 1 << 1,
        SingleSidedAlpha = 1 << 2,
        Blend            = 1 << 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> info;
    // NOLINTEND
};
