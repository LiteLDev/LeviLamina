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

class ActivatorRailBlock : public ::BaseRailBlock {
public:
    // prevent constructor by default
    ActivatorRailBlock& operator=(ActivatorRailBlock const&);
    ActivatorRailBlock(ActivatorRailBlock const&);
    ActivatorRailBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActivatorRailBlock() = default;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& source, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    MCAPI ActivatorRailBlock(std::string const& nameId, int id);

    // NOLINTEND
};
