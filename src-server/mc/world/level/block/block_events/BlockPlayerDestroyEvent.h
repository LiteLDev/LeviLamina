#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class Player;
// clang-format on

namespace BlockEvents {

class BlockPlayerDestroyEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>      mPlayer;
    ::ll::TypedStorage<8, 8, ::Block const&> mDestroyedBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlayerDestroyEvent& operator=(BlockPlayerDestroyEvent const&);
    BlockPlayerDestroyEvent(BlockPlayerDestroyEvent const&);
    BlockPlayerDestroyEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    // vIndex: 0
    virtual ~BlockPlayerDestroyEvent() /*override*/;
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
