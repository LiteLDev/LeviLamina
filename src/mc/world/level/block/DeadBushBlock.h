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
#include "mc/world/level/block/BushBlock.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool mayPlaceOn$(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
