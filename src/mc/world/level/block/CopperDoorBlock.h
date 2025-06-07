#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBehavior.h"
#include "mc/world/level/block/DoorBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperDoorBlock : public ::DoorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::CopperBehavior> mCopperBehavior;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 26
    virtual ::CopperBehavior const* tryGetCopperBehavior() const /*override*/;

    // vIndex: 135
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 17
    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 147
    virtual void _useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const /*override*/;

    // vIndex: 0
    virtual ~CopperDoorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::CopperBehavior const* $tryGetCopperBehavior() const;

    MCFOLD void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
