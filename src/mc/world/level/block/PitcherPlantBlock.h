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
#include "mc/world/level/block/DoublePlantBaseBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class PitcherPlantBlock : public ::DoublePlantBaseBlock {
public:
    // prevent constructor by default
    PitcherPlantBlock& operator=(PitcherPlantBlock const&);
    PitcherPlantBlock(PitcherPlantBlock const&);
    PitcherPlantBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PitcherPlantBlock() = default;

    // vIndex: 80
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI PitcherPlantBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool canBeFertilized$(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI bool onFertilized$(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // NOLINTEND
};
