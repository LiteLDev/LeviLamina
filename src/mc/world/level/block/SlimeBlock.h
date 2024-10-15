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

class SlimeBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SlimeBlock& operator=(SlimeBlock const&);
    SlimeBlock(SlimeBlock const&);
    SlimeBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SlimeBlock() = default;

    // vIndex: 74
    virtual void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // vIndex: 75
    virtual bool isBounceBlock() const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 145
    virtual void onStandOn(class EntityContext& entity, class BlockPos const&) const;

    // vIndex: 157
    virtual int getExtraRenderLayers() const;

    MCAPI SlimeBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent& eventData) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI void _addHardCodedBlockComponents$(class Experiments const&);

    MCAPI int getExtraRenderLayers$() const;

    MCAPI bool isBounceBlock$() const;

    MCAPI void onStandOn$(class EntityContext& entity, class BlockPos const&) const;

    MCAPI void
    updateEntityAfterFallOn$(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // NOLINTEND
};
