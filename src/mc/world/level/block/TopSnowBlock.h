#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/item/FallingBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

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
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const*) const;

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
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const&) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

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
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 167
    virtual bool isFreeToFall(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    MCAPI TopSnowBlock(std::string const&, int, bool);

    MCAPI class ItemInstance getResourceItemFromFalling() const;

    MCAPI bool melt(class BlockSource& region, class BlockPos const& pos, int meltHeight) const;

    MCAPI void
    startFallingIfLostSupport(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI static class Block const&
    buildSnowBlock(class BlockSource& region, class BlockPos const& pos, int height, bool additive);

    MCAPI static class Block const& getCoveredBlock(class BlockSource const& region, class BlockPos const& pos);

    MCAPI static class Block const&
    getSnowBlockToBuild(class BlockSource const& region, class BlockPos const& pos, int height, bool additive);

    MCAPI static int const HALF_HEIGHT;

    MCAPI static int const HEIGHT_IMPASSABLE;

    MCAPI static int const MAX_HEIGHT;

    MCAPI static class BaseGameVersion const TOP_SNOW_JAVA_PARITY_VERSION;

    MCAPI static float const TOP_SNOW_LAYER_HEIGHT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canBeBuiltOver(class BlockSource& region, class BlockPos const& pos, class BlockItem const* item) const;

    MCAPI bool _canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
