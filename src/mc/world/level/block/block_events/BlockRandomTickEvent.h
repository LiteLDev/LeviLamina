#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Random;
// clang-format on

namespace BlockEvents {

class BlockRandomTickEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
    ::ll::TypedStorage<8, 8, ::Random&>      mRandom;
    // NOLINTEND

public:
    BlockRandomTickEvent(BlockPos const pos, BlockSource& region, Random& random) : mRegion(region), mRandom(random) {
        mPos = pos;
    }

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    virtual ~BlockRandomTickEvent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockSource const& $getBlockSource() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
