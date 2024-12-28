#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

struct BlockVirtualizationHeader {
public:
    // BlockVirtualizationHeader inner types define
    enum : int {
        // bitfield representation
        IdCount            = 1 << 3,
        AllowedBlocksCount = 1 << 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkfdd2c9;
    ::ll::UntypedStorage<1, 1> mUnkc438c7;
    ::ll::UntypedStorage<1, 1> mUnk8961dc;
    ::ll::UntypedStorage<1, 1> mUnk57a2e0;
    ::ll::UntypedStorage<1, 1> mUnkb8d674;
    ::ll::UntypedStorage<4, 4> mUnk360f54;
    ::ll::UntypedStorage<4, 4> mUnkd0051b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockVirtualizationHeader& operator=(BlockVirtualizationHeader const&);
    BlockVirtualizationHeader(BlockVirtualizationHeader const&);
    BlockVirtualizationHeader();
};

} // namespace SFAT
