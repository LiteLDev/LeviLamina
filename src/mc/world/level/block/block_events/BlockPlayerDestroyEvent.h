#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Player;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockPlayerDestroyEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkaf93d6;
    ::ll::UntypedStorage<8, 8> mUnka113c9;
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
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPlayerDestroyEvent(::Player& player, ::BlockPos pos, ::Block const& destroyedBlock);

    MCAPI void configureRenderParamsForTrigger(::RenderParams& params) const;

    MCFOLD ::Player const& getPlayer() const;

    MCFOLD bool isClientSide() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player, ::BlockPos pos, ::Block const& destroyedBlock);
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
