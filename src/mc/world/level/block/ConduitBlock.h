#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ConduitBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ConduitBlock& operator=(ConduitBlock const&);
    ConduitBlock(ConduitBlock const&);
    ConduitBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConduitBlock() = default;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar facing) const;

    MCAPI ConduitBlock(std::string const& nameId, int id);

    // NOLINTEND
};
