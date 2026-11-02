#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class ChorusFlowerBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const&) const /*override*/;

    virtual bool isLavaBlocking() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _placeGrownFlower(::BlockSource& region, ::BlockPos const& pos, int newAge) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _allNeighborsEmpty(::BlockSource& region, ::BlockPos const& pos, uchar ignore);

    MCAPI static void _growTreeRecursive(
        ::BlockSource&    region,
        ::BlockPos const& current,
        ::BlockPos const& startPos,
        ::Random&         random,
        int               maxHorizontalSpread,
        int               depth
    );

    MCNAPI static void
    generatePlant(::BlockSource& region, ::BlockPos const& target, ::Random& random, int maxHorizontalSpread);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;

    MCNAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const&) const;

    MCNAPI bool $isLavaBlocking() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
