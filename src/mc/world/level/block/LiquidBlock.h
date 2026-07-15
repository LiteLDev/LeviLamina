#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/LiquidBlockBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Material;
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class LiquidBlock : public ::LiquidBlockBase {
public:
    // prevent constructor by default
    LiquidBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LiquidBlock(::std::string const& nameId, int id, ::Material const& material);

    MCAPI bool _tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool onlyDetectStatic) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
