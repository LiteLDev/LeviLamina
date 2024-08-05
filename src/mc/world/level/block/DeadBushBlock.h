#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DeadBushBlock : public ::BushBlock {
public:
    // prevent constructor by default
    DeadBushBlock& operator=(DeadBushBlock const&);
    DeadBushBlock(DeadBushBlock const&);
    DeadBushBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeadBushBlock() = default;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI DeadBushBlock(std::string const& nameId, int id);

    // NOLINTEND
};
