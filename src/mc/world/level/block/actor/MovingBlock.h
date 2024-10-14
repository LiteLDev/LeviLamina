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
namespace BlockEvents { struct BlockFallOnEvent; }
namespace mce { class Color; }
// clang-format on

class MovingBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    MovingBlock& operator=(MovingBlock const&);
    MovingBlock(MovingBlock const&);
    MovingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MovingBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const& region, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 10
    virtual class AABB const& getVisualShapeInWorld(
        class Block const&,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferAABB
    ) const;

    // vIndex: 26
    virtual bool isMovingBlock() const;

    // vIndex: 74
    virtual void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 109
    virtual bool pushesUpFallingBlocks() const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    MCAPI MovingBlock(std::string const& nameId, int id);

    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent& eventData) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _addHardCodedBlockComponents$(class Experiments const&);

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const& region, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class AABB const& getVisualShapeInWorld$(
        class Block const&,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferAABB
    ) const;

    MCAPI bool isMovingBlock$() const;

    MCAPI bool pushesUpFallingBlocks$() const;

    MCAPI void
    updateEntityAfterFallOn$(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // NOLINTEND
};
