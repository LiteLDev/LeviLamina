#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ChestBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    MCAPI EnderChestBlock(std::string const& nameId, int id);

    // NOLINTEND
};
