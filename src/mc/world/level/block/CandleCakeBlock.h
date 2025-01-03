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
class ItemInstance;
class Player;
class Vec3;
// clang-format on

class CandleCakeBlock : public ::AbstractCandleBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 80
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 142
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

    // vIndex: 151
    virtual int _getNumCandles(::Block const&) const /*override*/;

    // vIndex: 152
    virtual void
    _iterateCandles(::Block const& block, ::BlockPos const& pos, ::std::function<void(::Vec3 const&, int)> callback)
        const /*override*/;

    // vIndex: 153
    virtual void _tryLightOnFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const /*override*/;

    // vIndex: 0
    virtual ~CandleCakeBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CandleCakeBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _forEachCandle(::Block const& block, ::BlockPos const& pos, ::std::function<void(::Vec3 const&, int)> callback);

    MCAPI static ::Block const& getCandleCakeFromCandle(::Block const& candleBlock);

    MCAPI static ::Block const& getCandleFromCandleCake(::Block const& candleCakeBlock);

    MCAPI static bool tryLightFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar face) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI ::AABB const& $getVisualShape(::Block const&, ::AABB& bufferAABB) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI bool $isCandleCakeBlock() const;

    MCAPI int $_getNumCandles(::Block const&) const;

    MCAPI void
    $_iterateCandles(::Block const& block, ::BlockPos const& pos, ::std::function<void(::Vec3 const&, int)> callback)
        const;

    MCAPI void $_tryLightOnFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
