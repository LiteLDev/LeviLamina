#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/ITickDelegate.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FallingBlock;
class FallingBlockActor;
class IBlockSource;
namespace FallingBlockSystemOnLand { struct DelayDelegateData; }
// clang-format on

namespace FallingBlockSystemOnLand {

class SystemTickDelegate : public ::ITickDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FallingBlockSystemOnLand::DelayDelegateData>> mOnLandDataQueue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLand(::FallingBlock const& block, ::IBlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void breakBlock(::FallingBlockActor& fallingBlock) /*override*/;

    virtual ~SystemTickDelegate() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLand(::FallingBlock const& block, ::IBlockSource& region, ::BlockPos const& pos);

    MCAPI void $breakBlock(::FallingBlockActor& fallingBlock);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace FallingBlockSystemOnLand
