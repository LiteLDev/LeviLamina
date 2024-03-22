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
    // vIndex: 0, symbol: __gen_??1EnderChestBlock@@UEAA@XZ
    virtual ~EnderChestBlock() = default;

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@EnderChestBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0EnderChestBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI EnderChestBlock(std::string const& nameId, int id);

    // NOLINTEND
};
