#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ItemStack;
class Player;
class RenderParams;
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
    // member functions
    // NOLINTBEGIN
    MCAPI void configureRenderParamsForTrigger(::RenderParams& params);

    MCAPI ::Player const& getPlayer() const;

    MCAPI bool isClientSide() const;

    MCAPI bool isInteractionFailure() const;

    MCAPI void setInteractionFailure();

    MCAPI void setInteractionSuccessful();

    MCAPI void setPlayerSelectedItem(::ItemStack& item);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
