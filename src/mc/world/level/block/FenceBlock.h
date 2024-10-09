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

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FenceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FenceBlock& operator=(FenceBlock const&);
    FenceBlock(FenceBlock const&);
    FenceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FenceBlock() = default;

    // vIndex: 4
    virtual class HitResult
    clip(class Block const& block, class BlockSource const& region, class BlockPos const& pos, class Vec3 const& origin, class Vec3 const& end, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7
    virtual bool
    addCollisionShapes(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
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
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferAABB
    ) const;

    // vIndex: 13
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar, class Block const&) const;

    // vIndex: 34
    virtual bool isFenceBlock() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI FenceBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI void fetchPathableNeighbors(
        std::vector<class BlockPos>& outNeighbors,
        class BlockSource&           region,
        class BlockPos const&        pos,
        class Vec3 const&            entityPos
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class AABB const& _getShape(
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class Block const&             block,
        class AABB&                    bufferValue,
        bool                           isCollisionShape
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
