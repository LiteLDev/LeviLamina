#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/StairBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CopperBehavior;
class Experiments;
class Random;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CutCopperStairs : public ::StairBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnka1ffc8;
    // NOLINTEND

public:
    // prevent constructor by default
    CutCopperStairs& operator=(CutCopperStairs const&);
    CutCopperStairs(CutCopperStairs const&);
    CutCopperStairs();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 27
    virtual ::CopperBehavior const* tryGetCopperBehavior() const /*override*/;

    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 18
    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 0
    virtual ~CutCopperStairs() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::CopperBehavior const* $tryGetCopperBehavior() const;

    MCFOLD void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
