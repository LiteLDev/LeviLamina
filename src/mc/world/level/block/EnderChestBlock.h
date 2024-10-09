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
#include "mc/world/level/block/ChestBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class EnderChestBlock : public ::ChestBlock {
public:
    // prevent constructor by default
    EnderChestBlock& operator=(EnderChestBlock const&);
    EnderChestBlock(EnderChestBlock const&);
    EnderChestBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnderChestBlock() = default;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI EnderChestBlock(std::string const& nameId, int id);

    // NOLINTEND
};
