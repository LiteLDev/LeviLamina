#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FlowerBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Experiments;
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class EyeblossomBlock : public ::FlowerBlock {
public:
    // prevent constructor by default
    EyeblossomBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    virtual void entityInside(::BlockSource& region, ::BlockPos const&, ::Actor& entity) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EyeblossomBlock(::std::string const& nameId, int id);

    MCNAPI void
    _updateEyeblossomState(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool isMainBlock) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);

    MCNAPI void $entityInside(::BlockSource& region, ::BlockPos const&, ::Actor& entity) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
