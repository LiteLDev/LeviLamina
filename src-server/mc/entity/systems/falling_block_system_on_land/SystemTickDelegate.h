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
// clang-format on

namespace FallingBlockSystemOnLand {

class SystemTickDelegate : public ::ITickDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3f25b4;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemTickDelegate& operator=(SystemTickDelegate const&);
    SystemTickDelegate(SystemTickDelegate const&);
    SystemTickDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void onLand(::FallingBlock const& block, ::IBlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 2
    virtual void breakBlock(::FallingBlockActor& fallingBlock) /*override*/;

    // vIndex: 0
    virtual ~SystemTickDelegate() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLand(::FallingBlock const& block, ::IBlockSource& region, ::BlockPos const& pos);

    MCNAPI void $breakBlock(::FallingBlockActor& fallingBlock);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace FallingBlockSystemOnLand
