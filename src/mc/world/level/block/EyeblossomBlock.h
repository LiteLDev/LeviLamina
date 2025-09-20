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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 147
    virtual void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 146
    virtual void entityInside(::BlockSource& region, ::BlockPos const&, ::Actor& entity) const /*override*/;

    // vIndex: 0
    virtual ~EyeblossomBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _updateEyeblossomState(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool isMainBlock) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
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
