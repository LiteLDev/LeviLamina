#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssist {

class BlockTarget {
public:
    // BlockTarget inner types declare
    // clang-format off
    struct Side;
    // clang-format on

    // BlockTarget inner types define
    struct Side {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk8a79b6;
        ::ll::UntypedStorage<4, 12> mUnk47f7be;
        // NOLINTEND

    public:
        // prevent constructor by default
        Side& operator=(Side const&);
        Side(Side const&);
        Side();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk300108;
    ::ll::UntypedStorage<4, 4>  mUnk143c79;
    ::ll::UntypedStorage<4, 48> mUnk24f778;
    ::ll::UntypedStorage<1, 1>  mUnkea9b6a;
    ::ll::UntypedStorage<1, 1>  mUnk3061e4;
    ::ll::UntypedStorage<1, 1>  mUnk268e0e;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTarget& operator=(BlockTarget const&);
    BlockTarget(BlockTarget const&);
    BlockTarget();
};

} // namespace CameraAimAssist
