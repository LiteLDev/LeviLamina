#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class HopperBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    HopperBlock& operator=(HopperBlock const&);
    HopperBlock(HopperBlock const&);
    HopperBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HopperBlock() = default;

    // vIndex: 4
    virtual class HitResult
    clip(class Block const& block, class BlockSource const&, class BlockPos const& pos, class Vec3 const& origin, class Vec3 const& end, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7
    virtual bool
    addCollisionShapes(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8
    virtual void addAABBs(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 31
    virtual bool isContainerBlock() const;

    // vIndex: 66
    virtual void onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 73
    virtual ::BlockProperty getRedstoneProperty(class BlockSource&, class BlockPos const&) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar face, class Vec3 const&, int) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 153
    virtual bool allowStateMismatchOnPlacement(class Block const& clientTarget, class Block const& serverTarget) const;

    MCAPI HopperBlock(std::string const& nameId, int id);

    MCAPI static class BlockPos getAttachedOffset(uchar facing);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class AABB _getSpoutAABB(class Block const& block) const;

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
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    MCAPI bool
    addCollisionShapes$(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI bool allowStateMismatchOnPlacement$(class Block const& clientTarget, class Block const& serverTarget) const;

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion version) const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType) const;

    MCAPI class HitResult
    clip$(class Block const& block, class BlockSource const&, class BlockPos const& pos, class Vec3 const& origin, class Vec3 const& end, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI int
    getComparatorSignal$(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const&, class BlockPos const&, uchar face, class Vec3 const&, int) const;

    MCAPI ::BlockProperty getRedstoneProperty$(class BlockSource&, class BlockPos const&) const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI bool isContainerBlock$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onRedstoneUpdate$(class BlockSource& region, class BlockPos const& pos, int strength, bool) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool use$(class Player&, class BlockPos const&, uchar) const;

    MCAPI static class BaseGameVersion const& HOPPER_DOESNT_BREAK_FALLING_BLOCK_VERSION();

    // NOLINTEND
};
