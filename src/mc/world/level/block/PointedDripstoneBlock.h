#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
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
class Vec3;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace mce { class Color; }
// clang-format on

class PointedDripstoneBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    PointedDripstoneBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockType& init() /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const
        /*override*/;

    virtual bool falling() const /*override*/;

    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual void
    startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PointedDripstoneBlock(::std::string const& nameId, int id);

    MCAPI void _queueColumnForFall(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void _updateBlockThickness(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SpeleothemThickness _calculateDripstoneThickness(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        uchar             tipDirection,
        bool              mergeOpposingTips
    );

    MCAPI static bool _canDrip(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool _canFillCauldron(::Block const& block);

    MCAPI static bool _canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock);

    MCAPI static bool _canTipGrow(::BlockSource& region, ::BlockPos const& tipPos);

    MCAPI static void _createMergedTips(::BlockSource& region, ::Block const& tipBlock, ::BlockPos const& tipPos);

    MCAPI static ::std::optional<::BlockPos> _findFillableCauldronBelowStalactiteTip(
        ::BlockSource&                        region,
        ::BlockPos const&                     stalactiteTipPos,
        ::SharedTypes::v1_26_20::MaterialType liquidType
    );

    MCAPI static ::std::optional<::BlockPos>
    _findRootBlock(::BlockSource& region, ::BlockPos const& pos, int maxSearchLength);

    MCAPI static ::std::optional<::BlockPos>
    _findTip(::BlockSource& region, ::BlockPos const& pos, uchar searchDirection, int maxSearchLength, bool);

    MCAPI static void _grow(::BlockSource& region, ::BlockPos const& growFromPos, uchar growToDirection);

    MCAPI static void _growStalagmiteBelow(::BlockSource& region, ::BlockPos const& growIntoPos);

    MCAPI static bool _hasHangingSupport(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool _isTip(::Block const& block, bool includeMergedTip);

    MCAPI static bool _isValidPointedDripstonePlacement(::BlockSource& region, ::BlockPos const& pos, bool isHanging);

    MCAPI static void addDripParticle(::BlockSource& region, ::BlockPos const& pos, ::ParticleType particleType);

    MCAPI static void fillCauldron(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static ::std::optional<::BlockPos>
    findStalactiteTipAboveCauldron(::BlockSource& region, ::BlockPos const& cauldronPos);

    MCAPI static ::std::optional<::SharedTypes::v1_26_20::MaterialType>
    getCauldronFillLiquidType(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static ::std::optional<::BlockPos>
    getStalactiteTipBelowFillSource(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void growStalactite(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void growStalagmite(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool isPointedDripstoneWithDirection(::Block const& block, uchar tipDirection);

    MCAPI static ::std::optional<::ParticleType>
    shouldDrip(::BlockSource& region, ::BlockPos const& pos, float randomValue);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MAX_HORIZONTAL_OFFSET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockType& $init();

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;

    MCFOLD bool $falling() const;

    MCAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCFOLD ::std::string $getDustParticleName(::Block const&) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI void
    $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
