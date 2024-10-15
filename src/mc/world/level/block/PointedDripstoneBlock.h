#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/actor/ParticleType.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/DripstoneThickness.h"
#include "mc/world/level/block/FallingBlock.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { struct BlockFallOnEvent; }
namespace mce { class Color; }
// clang-format on

class PointedDripstoneBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    PointedDripstoneBlock& operator=(PointedDripstoneBlock const&);
    PointedDripstoneBlock(PointedDripstoneBlock const&);
    PointedDripstoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PointedDripstoneBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const& block, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 16
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 17
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& placingActor, class BlockPos const& pos, uchar face, class Vec3 const&, int)
        const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 136
    virtual class BlockLegacy& init();

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const&) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 166
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    MCVAPI bool falling() const;

    MCAPI PointedDripstoneBlock(std::string const& nameId, int id);

    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent& eventData) const;

    MCAPI static void
    addDripParticle(class BlockSource& region, class BlockPos const& pos, ::ParticleType particleType);

    MCAPI static bool
    canGrow(class BlockSource& region, class BlockPos const& pos, class BlockPos const& stalactiteTipPos);

    MCAPI static void fillCauldron(class BlockSource& region, class BlockPos const& pos);

    MCAPI static std::optional<class BlockPos>
    findStalactiteTipAboveCauldron(class BlockSource& region, class BlockPos const& cauldronPos);

    MCAPI static std::optional<::MaterialType>
    getCauldronFillLiquidType(class BlockSource& region, class BlockPos const& pos);

    MCAPI static std::optional<class BlockPos>
    getStalactiteTipBelowFillSource(class BlockSource& region, class BlockPos const& pos);

    MCAPI static void growStalactite(class BlockSource& region, class BlockPos const& pos);

    MCAPI static void growStalagmite(class BlockSource& region, class BlockPos const& pos);

    MCAPI static bool isPointedDripstoneWithDirection(class Block const& block, uchar tipDirection);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _updateBlockThickness(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI static ::DripstoneThickness _calculateDripstoneThickness(
        class BlockSource&    region,
        class BlockPos const& pos,
        uchar                 tipDirection,
        bool                  mergeOpposingTips
    );

    MCAPI static bool _canDrip(class BlockSource& region, class BlockPos const& pos);

    MCAPI static bool _canFillCauldron(class Block const& block);

    MCAPI static bool _canTipGrow(class BlockSource& region, class BlockPos const& tipPos);

    MCAPI static void _createDripstone(
        class BlockSource&    region,
        class BlockPos const& pos,
        uchar                 direction,
        ::DripstoneThickness  thickness
    );

    MCAPI static void
    _createMergedTips(class BlockSource& region, class Block const& tipBlock, class BlockPos const& tipPos);

    MCAPI static std::optional<class BlockPos> _findBlockVertically(
        class BlockSource&                                             region,
        class BlockPos const&                                          pos,
        uchar                                                          searchDirection,
        std::function<bool(class BlockSource&, class BlockPos const&)> pathPredicate,
        std::function<bool(class BlockSource&, class BlockPos const&)> targetPredicate,
        int                                                            maxSearchLength
    );

    MCAPI static std::optional<class BlockPos>
    _findRootBlock(class BlockSource& region, class BlockPos const& pos, int maxSearchLength);

    MCAPI static std::optional<class BlockPos>
    _findTip(class BlockSource& region, class BlockPos const& pos, uchar searchDirection, int maxSearchLength, bool);

    MCAPI static std::optional<class BlockPos>
    _getBlockAboveStalactiteRoot(class BlockSource& region, class BlockPos const& pos);

    MCAPI static class Vec3 _getRandomBlockPositionOffset(class BlockPos const& pos);

    MCAPI static void _grow(class BlockSource& region, class BlockPos const& growFromPos, uchar growToDirection);

    MCAPI static void _growStalagmiteBelow(class BlockSource& region, class BlockPos const& growIntoPos);

    MCAPI static bool _isStalactiteBase(class BlockSource& region, class BlockPos const& pos);

    MCAPI static bool _isTip(class Block const& block, uchar tipDirection, bool includeMergedTip);

    MCAPI static bool
    _isValidPointedDripstonePlacement(class BlockSource& region, class BlockPos const& pos, bool isHanging);

    MCAPI static bool _mayPlaceHanging(class BlockSource& region, class BlockPos const& pos);

    MCAPI static bool _mayPlaceStanding(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void _addHardCodedBlockComponents$(class Experiments const&);

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool falling$() const;

    MCAPI class AABB
    getCollisionShape$(class Block const& block, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class mce::Color getDustColor$(class Block const&) const;

    MCAPI std::string getDustParticleName$(class Block const&) const;

    MCAPI class AABB const& getOutline$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& placingActor, class BlockPos const& pos, uchar face, class Vec3 const&, int)
        const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI class BlockLegacy& init$();

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onLand$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    onProjectileHit$(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI class Vec3 randomlyModifyPosition$(class BlockPos const& pos) const;

    MCAPI void
    startFalling$(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
