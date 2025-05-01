#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

namespace BlockEvents {

class BlockPlayerInteractEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk765a41;
    ::ll::UntypedStorage<1, 2>  mUnk366fc9;
    ::ll::UntypedStorage<4, 16> mUnk6fafd9;
    ::ll::UntypedStorage<1, 1>  mUnk6c83c9;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlayerInteractEvent& operator=(BlockPlayerInteractEvent const&);
    BlockPlayerInteractEvent(BlockPlayerInteractEvent const&);
    BlockPlayerInteractEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    // vIndex: 0
    virtual ~BlockPlayerInteractEvent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
