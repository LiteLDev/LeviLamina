#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class VolumeDescriptor {
public:
    // VolumeDescriptor inner types define
    enum class FixedConstants : int {
        FutureParametersBufferSize = 512,
        TotalBlocksCountVersion7   = 24,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1c7eec;
    ::ll::UntypedStorage<4, 4> mUnk80e8d1;
    ::ll::UntypedStorage<4, 4> mUnkbf8d99;
    ::ll::UntypedStorage<4, 4> mUnkd07326;
    ::ll::UntypedStorage<4, 4> mUnk9e6f3c;
    ::ll::UntypedStorage<4, 4> mUnk561969;
    ::ll::UntypedStorage<4, 4> mUnka8980c;
    ::ll::UntypedStorage<4, 4> mUnkb8b801;
    ::ll::UntypedStorage<4, 4> mUnk5ae948;
    ::ll::UntypedStorage<4, 4> mUnkd6c031;
    ::ll::UntypedStorage<4, 4> mUnk51f24e;
    ::ll::UntypedStorage<4, 4> mUnk5e4242;
    ::ll::UntypedStorage<4, 4> mUnkc661ec;
    ::ll::UntypedStorage<4, 4> mUnkaeb0c4;
    ::ll::UntypedStorage<4, 4> mUnk383185;
    ::ll::UntypedStorage<4, 4> mUnk342c79;
    union {
        ::ll::UntypedStorage<1, 512> mUnk1695be;
        ::ll::UntypedStorage<4, 160> mUnk88aca6;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeDescriptor& operator=(VolumeDescriptor const&);
    VolumeDescriptor(VolumeDescriptor const&);
    VolumeDescriptor();
};

} // namespace SFAT
