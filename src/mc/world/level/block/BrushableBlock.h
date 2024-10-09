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
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BrushableBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    BrushableBlock& operator=(BrushableBlock const&);
    BrushableBlock(BrushableBlock const&);
    BrushableBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrushableBlock() = default;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 81
    virtual bool mayConsumeFertilizer(class BlockSource&) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const& aboveBlock) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const* blockActor) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 136
    virtual class BlockLegacy& init();

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const&) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 166
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI BrushableBlock(std::string const& nameID, int id);

    MCAPI static class HashedString const EmptyBrushedBlock;

    // NOLINTEND
};
