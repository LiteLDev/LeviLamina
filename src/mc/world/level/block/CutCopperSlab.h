#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SlabBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CopperBehavior;
class Experiments;
class Random;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CutCopperSlab : public ::SlabBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk2514c5;
    // NOLINTEND

public:
    // prevent constructor by default
    CutCopperSlab& operator=(CutCopperSlab const&);
    CutCopperSlab(CutCopperSlab const&);
    CutCopperSlab();

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
    virtual ~CutCopperSlab() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::CopperBehavior const* $tryGetCopperBehavior() const;

    MCNAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCNAPI void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
