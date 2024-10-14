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
namespace BlockEvents { struct BlockFallOnEvent; }
namespace mce { class Color; }
// clang-format on

class HoneyBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    HoneyBlock& operator=(HoneyBlock const&);
    HoneyBlock(HoneyBlock const&);
    HoneyBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HoneyBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB& bufferAABB) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 145
    virtual void onStandOn(class EntityContext& entity, class BlockPos const&) const;

    // vIndex: 157
    virtual int getExtraRenderLayers() const;

    MCAPI HoneyBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent& eventData) const;

    MCAPI static void
    triggerSlidingDownEffects(class Actor& entity, class BlockPos const& pos, class Block const& honeyBlock);

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

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI int getExtraRenderLayers$() const;

    MCAPI class AABB const& getVisualShape$(class Block const&, class AABB& bufferAABB) const;

    MCAPI void onStandOn$(class EntityContext& entity, class BlockPos const&) const;

    // NOLINTEND
};
