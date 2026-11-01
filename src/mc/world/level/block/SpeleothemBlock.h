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
class HashedString;
class Vec3;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace mce { class Color; }
// clang-format on

class SpeleothemBlock : public ::FallingBlock {
public:
    // SpeleothemBlock inner types define
    enum class DealsFallDamage : uchar {
        No  = 0,
        Yes = 1,
    };

    enum class GrowsStalagmite : uchar {
        No  = 0,
        Yes = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&>              mBlockToGrowOn;
    ::ll::TypedStorage<4, 4, int>                                mMaxLength;
    ::ll::TypedStorage<1, 1, ::SpeleothemBlock::GrowsStalagmite> mGrowsStalagmite;
    ::ll::TypedStorage<4, 4, float>                              mGrowthProbability;
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

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const;

    virtual ::Block const& getInitialDefaultState() /*override*/;

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

    virtual bool _isValidTipGrowPos(::BlockSource& region, ::BlockPos const& growPos, uchar growDirection) const;

    virtual void _createSpeleothem(
        ::BlockSource&        region,
        ::BlockPos const&     pos,
        uchar                 direction,
        ::SpeleothemThickness thickness
    ) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpeleothemBlock(
        ::std::string const&               nameId,
        int                                id,
        ::HashedString const&              blockToGrowOn,
        int                                maxLength,
        ::SpeleothemBlock::GrowsStalagmite growsStalagmite,
        float                              growthProbability,
        ::SpeleothemBlock::DealsFallDamage dealsFallDamage
    );

    MCNAPI ::SpeleothemThickness _calculateSpeleothemThickness(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        uchar             tipDirection,
        bool              mergeOpposingTips
    ) const;

    MCNAPI bool _canTipGrow(::BlockSource& region, ::BlockPos const& tipPos) const;

    MCNAPI void _createMergedTips(::BlockSource& region, ::Block const& tipBlock, ::BlockPos const& tipPos) const;

    MCNAPI ::std::optional<::BlockPos>
    _findRootBlock(::BlockSource& region, ::BlockPos const& pos, int maxSearchLength) const;

    MCNAPI ::std::optional<::BlockPos>
    _findTip(::BlockSource& region, ::BlockPos const& pos, uchar searchDirection, int maxSearchLength, bool) const;

    MCNAPI void _grow(::BlockSource& region, ::BlockPos const& growFromPos, uchar growToDirection) const;

    MCNAPI void _growStalagmiteBelow(::BlockSource& region, ::BlockPos const& growIntoPos) const;

    MCNAPI void growStalactite(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void growStalagmite(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent const& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isTip(::Block const& block, bool includeMergedTip);

    MCNAPI static bool isSpeleothemWithDirection(::Block const& block, uchar tipDirection);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&               nameId,
        int                                id,
        ::HashedString const&              blockToGrowOn,
        int                                maxLength,
        ::SpeleothemBlock::GrowsStalagmite growsStalagmite,
        float                              growthProbability,
        ::SpeleothemBlock::DealsFallDamage dealsFallDamage
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $getDustColor(::Block const&) const;

    MCNAPI ::std::string $getDustParticleName(::Block const&) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const;

    MCNAPI ::Block const& $getInitialDefaultState();

    MCNAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCNAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;

    MCNAPI bool $falling() const;

    MCNAPI void
    $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;

    MCNAPI void $randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI bool $_canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock) const;

    MCNAPI bool $_isValidTipGrowPos(::BlockSource& region, ::BlockPos const& growPos, uchar growDirection) const;

    MCNAPI void $_createSpeleothem(
        ::BlockSource&        region,
        ::BlockPos const&     pos,
        uchar                 direction,
        ::SpeleothemThickness thickness
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
