#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBehavior.h"
#include "mc/world/level/block/TrapDoorBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperTrapDoorBlock : public ::TrapDoorBlock {
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
    virtual void _useTrapDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const /*override*/;

    // vIndex: 0
    virtual ~CopperTrapDoorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::CopperBehavior const* $tryGetCopperBehavior() const;

    MCFOLD void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCFOLD void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_useTrapDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
