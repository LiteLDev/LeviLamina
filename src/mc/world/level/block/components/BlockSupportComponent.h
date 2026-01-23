#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/SupportShape.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockSupportComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SupportShape> mShape;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _stairSupportCheck(::Block const& block, uchar face);

    MCAPI static bool canProvideFullSupport(::Block const& block, uchar face, bool multifaceCheck);
    // NOLINTEND
};
