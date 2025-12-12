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

class BlockQueuedTickEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>     mIsInstaticking;
    ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
    ::ll::TypedStorage<8, 8, ::Random&>      mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockQueuedTickEvent& operator=(BlockQueuedTickEvent const&);
    BlockQueuedTickEvent(BlockQueuedTickEvent const&);
    BlockQueuedTickEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    virtual ~BlockQueuedTickEvent() /*override*/;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
