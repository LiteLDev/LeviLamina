#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockPlaceEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mPreviousBlock;
    ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlaceEvent& operator=(BlockPlaceEvent const&);
    BlockPlaceEvent(BlockPlaceEvent const&);
    BlockPlaceEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockSource const& getBlockSource() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPlaceEvent(::BlockSource& region, ::BlockPos pos, ::Block const& previousBlock);

    MCFOLD void configureRenderParamsForTrigger(::RenderParams& params) const;

    MCFOLD bool isClientSide() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::BlockSource& region, ::BlockPos pos, ::Block const& previousBlock);
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
