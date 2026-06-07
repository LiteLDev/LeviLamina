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

    virtual void entityInside(::BlockSource& region, ::BlockPos const& entity, ::Actor&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EyeblossomBlock(::std::string const& nameId, int id);

    MCAPI void
    _updateEyeblossomState(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool isMainBlock) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCFOLD void $_addHardCodedBlockComponents(::Experiments const& experiments);

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const& entity, ::Actor&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
