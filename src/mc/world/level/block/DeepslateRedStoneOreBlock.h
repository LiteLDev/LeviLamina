#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/RedStoneOreBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DeepslateRedStoneOreBlock : public ::RedStoneOreBlock {
public:
    // prevent constructor by default
    DeepslateRedStoneOreBlock& operator=(DeepslateRedStoneOreBlock const&);
    DeepslateRedStoneOreBlock(DeepslateRedStoneOreBlock const&);
    DeepslateRedStoneOreBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeepslateRedStoneOreBlock() = default;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 163
    virtual void _lightUpBlock(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI DeepslateRedStoneOreBlock(std::string const& nameId, int id, bool lit);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, bool lit);

    MCAPI void _lightUpBlock$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
