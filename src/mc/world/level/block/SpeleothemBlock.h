#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FallingBlock.h"
#include "mc/world/level/block/SpeleothemThickness.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class HashedString;
class Vec3;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace mce { class Color; }
// clang-format on

class SpeleothemBlock : public ::FallingBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&> mBlockToGrowOn;
    // NOLINTEND

public:
    // prevent constructor by default
    SpeleothemBlock& operator=(SpeleothemBlock const&);
    SpeleothemBlock(SpeleothemBlock const&);
    SpeleothemBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    virtual ::BlockType& init() /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const;

    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const
        /*override*/;

    virtual bool falling() const /*override*/;

    virtual void
    startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const
        /*override*/;

    virtual void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    virtual bool _canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpeleothemBlock(::std::string const& nameId, int id, ::HashedString const& blockToGrowOn);

    MCAPI void _createMergedTips(::BlockSource& region, ::Block const& tipBlock, ::BlockPos const& tipPos) const;

    MCAPI void _createSpeleothem(
        ::BlockSource&        region,
        ::BlockPos const&     pos,
        uchar                 direction,
        ::SpeleothemThickness thickness
    ) const;

    MCAPI ::std::optional<::BlockPos>
    _findRootBlock(::BlockSource& region, ::BlockPos const& pos, int maxSearchLength) const;

    MCAPI ::std::optional<::BlockPos>
    _findTip(::BlockSource& region, ::BlockPos const& pos, uchar searchDirection, int maxSearchLength, bool) const;

    MCAPI void _grow(::BlockSource& region, ::BlockPos const& growFromPos, uchar growToDirection) const;

    MCAPI void _growStalagmiteBelow(::BlockSource& region, ::BlockPos const& growIntoPos) const;

    MCAPI void growStalactite(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void growStalagmite(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent const& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canTipGrow(::BlockSource& region, ::BlockPos const& tipPos);

    MCAPI static bool _isTip(::Block const& block, bool includeMergedTip);

    MCAPI static bool isSpeleothemWithDirection(::Block const& block, uchar tipDirection);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::HashedString const& blockToGrowOn);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCFOLD ::std::string $getDustParticleName(::Block const&) const;

    MCAPI ::BlockType& $init();

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;

    MCFOLD bool $falling() const;

    MCAPI void
    $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;

    MCAPI void $randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI bool $_canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
