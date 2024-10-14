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

class StairBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    StairBlock& operator=(StairBlock const&);
    StairBlock(StairBlock const&);
    StairBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StairBlock();

    // vIndex: 4
    virtual class HitResult
    clip(class Block const& block, class BlockSource const&, class BlockPos const& pos, class Vec3 const& A, class Vec3 const& B, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

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
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class AABB& bufferValue)
        const;

    // vIndex: 13
    virtual bool getLiquidClipVolume(
        class Block const&    block,
        class BlockSource&    region,
        class BlockPos const& pos,
        class AABB&           includeBox
    ) const;

    // vIndex: 19
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                           flowIntoFacing,
        std::function<class Block const&(class BlockPos const&)> const& getBlock,
        class BlockPos const&                                           pos
    ) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType) const;

    // vIndex: 25
    virtual bool canConnect(class Block const&, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 38
    virtual bool isStairBlock() const;

    // vIndex: 73
    virtual ::BlockProperty getRedstoneProperty(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 83
    virtual bool mayPick() const;

    // vIndex: 84
    virtual bool mayPick(class BlockSource const& region, class Block const& block, bool liquid) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 91
    virtual void
    destroy(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Actor* entitySource)
        const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const& by,
        class BlockPos const&,
        uchar             face,
        class Vec3 const& clickPos,
        int               itemValue
    ) const;

    // vIndex: 101
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 135
    virtual void animateTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 144
    virtual void onExploded(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    // vIndex: 145
    virtual void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI StairBlock(std::string const& nameId, int id, class BlockLegacy const& base);

    MCAPI bool setInnerPieceShape(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    shape,
        bool                           shrink
    ) const;

    MCAPI bool setStepShape(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    shape,
        bool                           shrink
    ) const;

    MCAPI static uchar stairDirectionToFacing(int stairDirection);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void shapeZFightShrink(class AABB& shape) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

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

    MCAPI void animateTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool attack$(class Player* player, class BlockPos const& pos) const;

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion version) const;

    MCAPI bool canConnect$(class Block const&, uchar toOther, class Block const& thisBlock) const;

    MCAPI bool canProvideSupport$(class Block const& block, uchar face, ::BlockSupportType) const;

    MCAPI class HitResult
    clip$(class Block const& block, class BlockSource const&, class BlockPos const& pos, class Vec3 const& A, class Vec3 const& B, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI void
    destroy$(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Actor* entitySource)
        const;

    MCAPI bool getLiquidClipVolume$(
        class Block const&    block,
        class BlockSource&    region,
        class BlockPos const& pos,
        class AABB&           includeBox
    ) const;

    MCAPI class AABB const&
    getOutline$(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class AABB& bufferValue)
        const;

    MCAPI class Block const& getPlacementBlock$(
        class Actor const& by,
        class BlockPos const&,
        uchar             face,
        class Vec3 const& clickPos,
        int               itemValue
    ) const;

    MCAPI ::BlockProperty getRedstoneProperty$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI int getVariant$(class Block const&) const;

    MCAPI bool isStairBlock$() const;

    MCAPI bool liquidCanFlowIntoFromDirection$(
        uchar                                                           flowIntoFacing,
        std::function<class Block const&(class BlockPos const&)> const& getBlock,
        class BlockPos const&                                           pos
    ) const;

    MCAPI bool mayPick$() const;

    MCAPI bool mayPick$(class BlockSource const& region, class Block const& block, bool liquid) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos, uchar) const;

    MCAPI void onExploded$(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onStandOn$(class EntityContext& entity, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    // NOLINTEND
};
