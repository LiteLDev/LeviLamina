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
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB& bufferAABB) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    virtual bool isCandleCakeBlock() const /*override*/;

    virtual int _getNumCandles(::Block const&) const /*override*/;

    virtual void _iterateCandles(
        ::Block const&                                  block,
        ::BlockPos const&                               pos,
        ::brstd::function_ref<void(::Vec3 const&, int)> callback
    ) const /*override*/;

    virtual void _tryLightOnFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CandleCakeBlock(::std::string const& nameId, int id);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::Block const& getCandleCakeFromCandle(::Block const& candleBlock);

    MCNAPI static ::Block const& getCandleFromCandleCake(::Block const& candleCakeBlock);
#endif

    MCNAPI static bool tryLightFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id);
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
        ::Block const&                                  block,
        ::BlockPos const&                               pos,
        ::brstd::function_ref<void(::Vec3 const&, int)> callback
    ) const;

    MCNAPI void $_tryLightOnFire(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
