#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/DoublePlantBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DoubleVegetationBlock : public ::DoublePlantBlock {
public:
    // prevent constructor by default
    DoubleVegetationBlock& operator=(DoubleVegetationBlock const&);
    DoubleVegetationBlock(DoubleVegetationBlock const&);
    DoubleVegetationBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DoubleVegetationBlock() = default;

    // vIndex: 80
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 122
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI DoubleVegetationBlock(std::string const&, int);

    // NOLINTEND
};
