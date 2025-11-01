#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class FallingBlock;
class FallingBlockActor;
class IBlockSource;
// clang-format on

namespace FallingBlockSystemOnLand {

struct DelayDelegateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FallingBlock const*> fallingBlock;
    ::ll::TypedStorage<8, 8, ::IBlockSource*>       mRegion;
    ::ll::TypedStorage<4, 12, ::BlockPos>           mPosition;
    ::ll::TypedStorage<8, 8, ::FallingBlockActor*>  mFallingBlockActor;
    // NOLINTEND
};

} // namespace FallingBlockSystemOnLand
