#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/DoublePlantBaseBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DoublePlantBlock : public ::DoublePlantBaseBlock {
public:
    // prevent constructor by default
    DoublePlantBlock& operator=(DoublePlantBlock const&);
    DoublePlantBlock(DoublePlantBlock const&);
    DoublePlantBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DoublePlantBlock() = default;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI DoublePlantBlock(std::string const& nameId, int id);

    MCAPI bool placeAt(class BlockSource&, class BlockPos const&, int, class Actor*) const;

    // NOLINTEND
};
