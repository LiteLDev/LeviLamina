#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ItemStack;
class Player;
// clang-format on

namespace BlockEvents {

class BlockPlayerInteractEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                      mPlayer;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>          mSuccessful;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3> const> mHit;
    ::ll::TypedStorage<1, 1, uchar const>                    mFace;
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
    // member functions
    // NOLINTBEGIN
    MCAPI void setPlayerSelectedItem(::ItemStack& item);
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
