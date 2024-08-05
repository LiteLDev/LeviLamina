#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BaseRailBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class PoweredRailBlock : public ::BaseRailBlock {
public:
    // prevent constructor by default
    PoweredRailBlock& operator=(PoweredRailBlock const&);
    PoweredRailBlock(PoweredRailBlock const&);
    PoweredRailBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PoweredRailBlock() = default;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    MCAPI PoweredRailBlock(std::string const& nameId, int id);

    // NOLINTEND
};
