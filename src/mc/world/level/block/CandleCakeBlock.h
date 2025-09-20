#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/AbstractCandleBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CandleCakeBlock : public ::AbstractCandleBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 80
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 105
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 106
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 42
    virtual bool isCandleCakeBlock() const /*override*/;

    // vIndex: 147
    virtual int _getNumCandles(::Block const&) const /*override*/;

    // vIndex: 148
    virtual void _iterateCandles(
        ::Block const&                            block,
        ::BlockPos const&                         pos,
        ::std::function<void(::Vec3 const&, int)> callback
    ) const /*override*/;

    // vIndex: 149
    virtual void _tryLightOnFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 0
    virtual ~CandleCakeBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _forEachCandle(::Block const& block, ::BlockPos const& pos, ::std::function<void(::Vec3 const&, int)> callback);

    MCNAPI static ::Block const& getCandleCakeFromCandle(::Block const& candleBlock);

    MCNAPI static ::Block const& getCandleFromCandleCake(::Block const& candleCakeBlock);

    MCNAPI static bool tryLightFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB& bufferAABB) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI bool $isCandleCakeBlock() const;

    MCNAPI int $_getNumCandles(::Block const&) const;

    MCNAPI void $_iterateCandles(
        ::Block const&                            block,
        ::BlockPos const&                         pos,
        ::std::function<void(::Vec3 const&, int)> callback
    ) const;

    MCNAPI void $_tryLightOnFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
