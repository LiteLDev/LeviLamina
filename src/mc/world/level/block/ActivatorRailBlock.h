#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BaseRailBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

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
    virtual void onRedstoneUpdate(class BlockSource& source, class BlockPos const& pos, int strength, bool) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    MCAPI ActivatorRailBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI void onRedstoneUpdate$(class BlockSource& source, class BlockPos const& pos, int strength, bool) const;

    // NOLINTEND
};
