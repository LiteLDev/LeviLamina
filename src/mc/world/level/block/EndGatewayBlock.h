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

class EndGatewayBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    EndGatewayBlock& operator=(EndGatewayBlock const&);
    EndGatewayBlock(EndGatewayBlock const&);
    EndGatewayBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndGatewayBlock() = default;

    // vIndex: 1
    virtual std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const& pos, class Block const&) const;

    // vIndex: 7
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 78
    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI EndGatewayBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool addCollisionShapes$(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canRenderSelectionOverlay$(::BlockRenderLayer) const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI std::shared_ptr<class BlockActor> newBlockEntity$(class BlockPos const& pos, class Block const&) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    // NOLINTEND
};
