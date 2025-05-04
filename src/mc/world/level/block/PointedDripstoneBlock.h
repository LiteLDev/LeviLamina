#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/DripstoneThickness.h"
#include "mc/world/level/block/FallingBlock.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockLegacy;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Random;
class Vec3;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class PointedDripstoneBlock : public ::FallingBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 125
    virtual ::BlockLegacy& init() /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 140
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 15
    virtual ::Vec3 randomlyModifyPosition(::BlockPos const& pos) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 17
    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const
        /*override*/;

    // vIndex: 150
    virtual bool falling() const /*override*/;

    // vIndex: 151
    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 148
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    // vIndex: 149
    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 153
    virtual void
    startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const
        /*override*/;

    // vIndex: 0
    virtual ~PointedDripstoneBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _queueColumnForFall(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void _updateBlockThickness(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::DripstoneThickness _calculateDripstoneThickness(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        uchar             tipDirection,
        bool              mergeOpposingTips
    );

    MCAPI static bool _canDrip(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool _canTipGrow(::BlockSource& region, ::BlockPos const& tipPos);

    MCAPI static void _createMergedTips(::BlockSource& region, ::Block const& tipBlock, ::BlockPos const& tipPos);

    MCAPI static ::std::optional<::BlockPos> _findBlockVertically(
        ::BlockSource&                                           region,
        ::BlockPos const&                                        pos,
        uchar                                                    searchDirection,
        ::std::function<bool(::BlockSource&, ::BlockPos const&)> pathPredicate,
        ::std::function<bool(::BlockSource&, ::BlockPos const&)> targetPredicate,
        int                                                      maxSearchLength
    );

    MCAPI static ::std::optional<::BlockPos>
    _findRootBlock(::BlockSource& region, ::BlockPos const& pos, int maxSearchLength);

    MCAPI static ::std::optional<::BlockPos> _getBlockAboveStalactiteRoot(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void _grow(::BlockSource& region, ::BlockPos const& growFromPos, uchar growToDirection);

    MCAPI static void _growStalagmiteBelow(::BlockSource& region, ::BlockPos const& growIntoPos);

    MCAPI static bool _isStalactiteBase(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool _isValidPointedDripstonePlacement(::BlockSource& region, ::BlockPos const& pos, bool isHanging);

    MCAPI static bool _mayPlaceHanging(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool _mayPlaceStanding(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void addDripParticle(::BlockSource& region, ::BlockPos const& pos, ::ParticleType particleType);

    MCAPI static bool canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos);

    MCAPI static void fillCauldron(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static ::std::optional<::MaterialType>
    getCauldronFillLiquidType(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void growStalactite(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void growStalagmite(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static ::std::optional<::ParticleType>
    shouldDrip(::BlockSource& region, ::BlockPos const& pos, float randomValue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCFOLD ::BlockLegacy& $init();

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::Vec3 $randomlyModifyPosition(::BlockPos const& pos) const;

    MCAPI ::Block const&
    $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    MCAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;

    MCFOLD bool $falling() const;

    MCAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCFOLD ::std::string $getDustParticleName(::Block const&) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI ::AABB
    $getCollisionShape(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI void
    $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
