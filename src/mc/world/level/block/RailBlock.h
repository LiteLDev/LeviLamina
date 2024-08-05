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

class RailBlock : public ::BaseRailBlock {
public:
    // prevent constructor by default
    RailBlock& operator=(RailBlock const&);
    RailBlock(RailBlock const&);
    RailBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RailBlock() = default;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    MCAPI RailBlock(std::string const& nameId, int id);

    // NOLINTEND
};
