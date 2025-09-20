#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/LiquidBlockBase.h"

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

class LiquidBlock : public ::LiquidBlockBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 146
    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor& entity) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 0
    virtual ~LiquidBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _getSlopeDistance(::BlockSource& region, ::BlockPos const& pos, int pass, int from) const;

    MCNAPI bool _isLiquidBlocking(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::BlockPos const& flowFromPos,
        uchar             flowFromDirection
    ) const;

    MCNAPI void _spread(::BlockSource& region, ::BlockPos const& pos, int depth, bool preserveExisting) const;

    MCNAPI bool _tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool onlyDetectStatic) const;

    MCNAPI void _trySpreadTo(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        int               neighbor,
        ::BlockPos const& flowFromPos,
        uchar             flowFromDirection
    ) const;

    MCNAPI ::std::array<bool, 4> getSpread(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor& entity) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
