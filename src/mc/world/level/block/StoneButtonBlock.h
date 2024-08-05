#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ButtonBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class StoneButtonBlock : public ::ButtonBlock {
public:
    // prevent constructor by default
    StoneButtonBlock& operator=(StoneButtonBlock const&);
    StoneButtonBlock(StoneButtonBlock const&);
    StoneButtonBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoneButtonBlock() = default;

    MCAPI StoneButtonBlock(std::string const& nameId, int id);

    // NOLINTEND
};
