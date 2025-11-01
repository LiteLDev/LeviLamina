#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/world/level/block/DripstoneThickness.h"
#include "mc/world/level/block/FallingBlock.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
class Vec3;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace mce { class Color; }
// clang-format on

class PointedDripstoneBlock : public ::FallingBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 124
    virtual ::BlockType& init() /*override*/;

    // vIndex: 117
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 137
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 78
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 122
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 86
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const /*override*/;

    // vIndex: 91
    virtual ::Block const& getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const /*override*/;

    // vIndex: 16
    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const /*override*/;

    // vIndex: 148
    virtual bool falling() const /*override*/;

    // vIndex: 149
    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 146
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    // vIndex: 147
    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 151
    virtual void startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const /*override*/;

    // vIndex: 0
    virtual ~PointedDripstoneBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _queueColumnForFall(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void _updateBlockThickness(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::DripstoneThickness _calculateDripstoneThickness(::BlockSource& region, ::BlockPos const& pos, uchar tipDirection, bool mergeOpposingTips);

    MCAPI static bool _canDrip(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool _canTipGrow(::BlockSource& region, ::BlockPos const& tipPos);

    MCAPI static void _createMergedTips(::BlockSource& region, ::Block const& tipBlock, ::BlockPos const& tipPos);

    MCAPI static ::std::optional<::BlockPos> _findBlockVertically(::BlockSource& region, ::BlockPos const& pos, uchar searchDirection, ::std::function<bool(::BlockSource&, ::BlockPos const&)> pathPredicate, ::std::function<bool(::BlockSource&, ::BlockPos const&)> targetPredicate, int maxSearchLength);

    MCAPI static ::std::optional<::BlockPos> _findRootBlock(::BlockSource& region, ::BlockPos const& pos, int maxSearchLength);

    MCAPI static ::std::optional<::BlockPos> _getBlockAboveStalactiteRoot(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void _grow(::BlockSource& region, ::BlockPos const& growFromPos, uchar growToDirection);

    MCAPI static bool _isValidPointedDripstonePlacement(::BlockSource& region, ::BlockPos const& pos, bool isHanging);

    MCAPI static bool _mayPlaceHanging(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool _mayPlaceStanding(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void addDripParticle(::BlockSource& region, ::BlockPos const& pos, ::ParticleType particleType);

    MCAPI static bool canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos);

    MCAPI static void fillCauldron(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static ::std::optional<::MaterialType> getCauldronFillLiquidType(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void growStalactite(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void growStalagmite(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MAX_HORIZONTAL_OFFSET();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCFOLD ::BlockType& $init();

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::Block const& $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const;

    MCAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;

    MCFOLD bool $falling() const;

    MCAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCFOLD ::std::string $getDustParticleName(::Block const&) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI void $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
