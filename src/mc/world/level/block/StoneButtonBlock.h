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
#include "mc/world/level/block/ButtonBlock.h"

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
