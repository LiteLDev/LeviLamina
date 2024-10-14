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

class ThinFenceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ThinFenceBlock& operator=(ThinFenceBlock const&);
    ThinFenceBlock(ThinFenceBlock const&);
    ThinFenceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThinFenceBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        class AABB&                    outAABB,
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos
    ) const;

    // vIndex: 7
    virtual bool
    addCollisionShapes(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8
    virtual void addAABBs(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          blockPos,
        class AABB const*              intersectTestBox,
        std::vector<class AABB>&       inoutBoxes
    ) const;

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

    // vIndex: 36
    virtual bool isThinFenceBlock() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    MCAPI ThinFenceBlock(
        std::string const&    nameId,
        int                   id,
        class Material const& material,
        bool                  singleSide,
        bool                  doesNotCollideWithCamera
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void addAABBs$(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          blockPos,
        class AABB const*              intersectTestBox,
        std::vector<class AABB>&       inoutBoxes
    ) const;

    MCAPI bool
    addCollisionShapes$(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion version) const;

    MCAPI bool canConnect$(class Block const& otherBlock, uchar, class Block const&) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType type) const;

    MCAPI class AABB
    getCollisionShape$(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI bool getCollisionShapeForCamera$(
        class AABB&                    outAABB,
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos
    ) const;

    MCAPI bool getLiquidClipVolume$(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    MCAPI class AABB const& getOutline$(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferValue
    ) const;

    MCAPI class AABB const& getVisualShapeInWorld$(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferAABB
    ) const;

    MCAPI bool isThinFenceBlock$() const;

    MCAPI static class BaseGameVersion const& THIN_FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION();

    // NOLINTEND
};
