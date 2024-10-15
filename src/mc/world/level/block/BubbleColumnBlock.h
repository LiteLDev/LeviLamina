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

class BubbleColumnBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BubbleColumnBlock& operator=(BubbleColumnBlock const&);
    BubbleColumnBlock(BubbleColumnBlock const&);
    BubbleColumnBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BubbleColumnBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7
    virtual bool
    addCollisionShapes(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8
    virtual void
    addAABBs(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 58
    virtual std::optional<class HashedString> getRequiredMedium() const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 76
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const* medium) const;

    // vIndex: 84
    virtual bool mayPick(class BlockSource const&, class Block const&, bool liquid) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 126
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147
    virtual bool shouldTickOnSetBlock() const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI BubbleColumnBlock(std::string const& nameId, int id);

    MCAPI static bool addBubbleColumnSegment(class BlockSource& region, class BlockPos const& pos);

    MCAPI static bool shouldDragDown(class Block const& block);

    MCAPI static void spawnBubbles(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _createParticles(class BlockSource& region, class BlockPos const& pos, class Random& random, bool down);

    MCAPI static bool _getFlowDownward(class Block const& block);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void
    addAABBs$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;

    MCAPI bool
    addCollisionShapes$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI std::optional<class HashedString> getRequiredMedium$() const;

    MCAPI bool isPreservingMediumWhenPlaced$(class BlockLegacy const* medium) const;

    MCAPI bool mayPick$(class BlockSource const&, class Block const&, bool liquid) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onGraphicsModeChanged$(struct BlockGraphicsModeChangeContext const& context);

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldTickOnSetBlock$() const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
