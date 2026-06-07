#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockChangeContext.h"
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
// clang-format on

namespace BlockEvents {

class BlockBreakEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::BlockChangeContext> mDestructionContext;
    ::ll::TypedStorage<8, 8, ::BlockSource&>        mRegion;
    ::ll::TypedStorage<8, 8, ::Block const&>        mDestroyedBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBreakEvent& operator=(BlockBreakEvent const&);
    BlockBreakEvent(BlockBreakEvent const&);
    BlockBreakEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockSource const& getBlockSource() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockBreakEvent(
        ::BlockChangeContext const& destructionContext,
        ::BlockSource&              region,
        ::BlockPos                  pos,
        ::Block const&              destroyedBlock
    );

    MCAPI ::std::optional<::BlockPos> const getBlockDestructionCausePosition() const;

    MCAPI ::Actor const* getEntitySource() const;

    MCAPI bool isClientSide() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockChangeContext const& destructionContext,
        ::BlockSource&              region,
        ::BlockPos                  pos,
        ::Block const&              destroyedBlock
    );
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
