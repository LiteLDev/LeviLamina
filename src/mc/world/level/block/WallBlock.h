#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/WallConnectionType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WallBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    WallBlock& operator=(WallBlock const&);
    WallBlock(WallBlock const&);
    WallBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WallBlock();

    // vIndex: 4
    virtual class HitResult
    clip(class Block const& block, class BlockSource const& region, class BlockPos const& pos, class Vec3 const& origin, class Vec3 const& end, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferValue
    ) const;

    // vIndex: 10
    virtual class AABB const& getVisualShapeInWorld(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&,
        class AABB& bufferAABB
    ) const;

    // vIndex: 13
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar, class Block const&) const;

    // vIndex: 37
    virtual bool isWallBlock() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 70
    virtual void onStructureBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 71
    virtual void onStructureNeighborBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI WallBlock(std::string const& nameId, int id, class BlockLegacy const& baseBlock);

    MCAPI WallBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI void tryFixWallStates(class BlockSource& region, class BlockPos const& pos, int updateFlags) const;

    MCAPI static float const POST_HEIGHT;

    MCAPI static float const POST_WIDTH;

    MCAPI static float const WALL_HEIGHT;

    MCAPI static std::array<std::string, 14> const WALL_NAMES;

    MCAPI static float const WALL_WIDTH;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::WallConnectionType
    _desiredConnectionState(class BlockSource& region, class BlockPos const& pos, uchar neighbor) const;

    MCAPI bool _isCovered(class BlockSource& region, class BlockPos const& pos, class AABB const& testAABB) const;

    MCAPI bool _shouldBePost(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI bool _tryAddToTickingQueue(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
