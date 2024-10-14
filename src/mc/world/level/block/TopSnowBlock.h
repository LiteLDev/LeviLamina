#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TopSnowBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    TopSnowBlock& operator=(TopSnowBlock const&);
    TopSnowBlock(TopSnowBlock const&);
    TopSnowBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TopSnowBlock() = default;

    // vIndex: 5
    virtual class AABB getCollisionShape(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        class AABB&        outAABB,
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos
    ) const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 55
    virtual bool canBeDestroyedByWaterSpread() const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 76
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const* medium) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 88
    virtual bool tryToPlace(
        class BlockSource&                  region,
        class BlockPos const&               pos,
        class Block const&                  block,
        struct ActorBlockSyncMessage const* syncMsg
    ) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int) const;

    // vIndex: 103
    virtual bool
    canBeBuiltOver(class BlockSource& region, class BlockPos const& pos, class BlockItem const& item) const;

    // vIndex: 104
    virtual bool canBeBuiltOver(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 108
    virtual bool shouldStopFalling(class Actor& entity) const;

    // vIndex: 110
    virtual bool canHaveExtraData() const;

    // vIndex: 144
    virtual void onExploded(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const&) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 167
    virtual bool isFreeToFall(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    MCAPI TopSnowBlock(std::string const& nameId, int id, bool usePartialHeight);

    MCAPI class ItemInstance getResourceItemFromFalling() const;

    MCAPI bool melt(class BlockSource& region, class BlockPos const& pos, int meltHeight) const;

    MCAPI void
    startFallingIfLostSupport(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI static class Block const&
    buildSnowBlock(class BlockSource& region, class BlockPos const& pos, int height, bool additive);

    MCAPI static class Block const& getCoveredBlock(class BlockSource const& region, class BlockPos const& pos);

    MCAPI static class Block const&
    getSnowBlockToBuild(class BlockSource const& region, class BlockPos const& pos, int height, bool additive);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canBeBuiltOver(class BlockSource& region, class BlockPos const& pos, class BlockItem const* item) const;

    MCAPI bool _canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool breaksFallingBlocks$(class Block const& block, class BaseGameVersion) const;

    MCAPI bool canBeBuiltOver$(class BlockSource& region, class BlockPos const& pos, class BlockItem const& item) const;

    MCAPI bool canBeBuiltOver$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool canBeDestroyedByWaterSpread$() const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canHaveExtraData$() const;

    MCAPI bool
    checkIsPathable$(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    MCAPI class AABB getCollisionShape$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    MCAPI bool getCollisionShapeForCamera$(
        class AABB&        outAABB,
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos
    ) const;

    MCAPI class mce::Color getDustColor$(class Block const&) const;

    MCAPI std::string getDustParticleName$(class Block const&) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool isFreeToFall$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool isPreservingMediumWhenPlaced$(class BlockLegacy const* medium) const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onExploded$(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    MCAPI void onPlace$(class BlockSource&, class BlockPos const&) const;

    MCAPI class Block const*
    playerWillDestroy$(class Player& player, class BlockPos const& pos, class Block const& block) const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool shouldStopFalling$(class Actor& entity) const;

    MCAPI void
    startFalling$(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool tryToPlace$(
        class BlockSource&                  region,
        class BlockPos const&               pos,
        class Block const&                  block,
        struct ActorBlockSyncMessage const* syncMsg
    ) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    MCAPI static int const& HALF_HEIGHT();

    MCAPI static int const& HEIGHT_IMPASSABLE();

    MCAPI static int const& MAX_HEIGHT();

    MCAPI static class BaseGameVersion const& TOP_SNOW_JAVA_PARITY_VERSION();

    MCAPI static float const& TOP_SNOW_LAYER_HEIGHT();

    // NOLINTEND
};
