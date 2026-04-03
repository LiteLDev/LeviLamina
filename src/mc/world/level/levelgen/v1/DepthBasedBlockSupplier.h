#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/random/XoroshiroPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class DepthBasedBlockSupplier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::XoroshiroPositionalRandomFactory const> mRandomFactory;
    ::ll::TypedStorage<8, 8, ::Block const*>                            mBlock;
    // NOLINTEND
};
