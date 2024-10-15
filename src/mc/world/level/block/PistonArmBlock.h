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
#include "mc/world/level/block/PistonBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class PistonArmBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PistonArmBlock& operator=(PistonArmBlock const&);
    PistonArmBlock(PistonArmBlock const&);
    PistonArmBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PistonArmBlock() = default;

    // vIndex: 4
    virtual class HitResult
    clip(class Block const& block, class BlockSource const& region, class BlockPos const& pos, class Vec3 const& A, class Vec3 const& B, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 5
    virtual class AABB getCollisionShape(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 7
    virtual bool
    addCollisionShapes(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 94
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI PistonArmBlock(std::string const& nameId, int id, ::PistonBlock::Type type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _getCollisions(class AABB& armBaseAABB, class AABB& armAABB, class AABB& frontAABB, uchar facingDir) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, ::PistonBlock::Type type);

    MCAPI bool
    addCollisionShapes$(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const& block, uchar face, ::BlockSupportType) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class HitResult
    clip$(class Block const& block, class BlockSource const& region, class BlockPos const& pos, class Vec3 const& A, class Vec3 const& B, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class AABB getCollisionShape$(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    MCAPI bool
    getSecondPart$(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI class Block const*
    playerWillDestroy$(class Player& player, class BlockPos const& pos, class Block const& block) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
