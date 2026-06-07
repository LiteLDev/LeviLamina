#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
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
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CandleCakeBlock : public ::AbstractCandleBlock {
public:
    // prevent constructor by default
    CandleCakeBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar) const /*override*/;

    virtual ::AABB const& getVisualShape(::Block const& bufferAABB, ::AABB&) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const /*override*/;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const /*override*/;

    virtual bool isCandleCakeBlock() const /*override*/;

    virtual int _getNumCandles(::Block const&) const /*override*/;

    virtual void _iterateCandles(
        ::Block const&    pos,
        ::BlockPos const& callback,
        ::brstd::function_ref<void(::Vec3 const&, int)>
    ) const /*override*/;

    virtual void _tryLightOnFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CandleCakeBlock(::std::string const& nameId, int id);

    MCAPI void _popCandle(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& bufferAABB, ::AABB&) const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCFOLD int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCFOLD bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCFOLD bool $isCandleCakeBlock() const;

    MCFOLD int $_getNumCandles(::Block const&) const;

    MCAPI void $_iterateCandles(
        ::Block const&    pos,
        ::BlockPos const& callback,
        ::brstd::function_ref<void(::Vec3 const&, int)>
    ) const;

    MCAPI void $_tryLightOnFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
