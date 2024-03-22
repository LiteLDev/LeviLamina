#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/RedStoneOreBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DeepslateRedStoneOreBlock : public ::RedStoneOreBlock {
public:
    // prevent constructor by default
    DeepslateRedStoneOreBlock& operator=(DeepslateRedStoneOreBlock const&);
    DeepslateRedStoneOreBlock(DeepslateRedStoneOreBlock const&);
    DeepslateRedStoneOreBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DeepslateRedStoneOreBlock@@UEAA@XZ
    virtual ~DeepslateRedStoneOreBlock() = default;

    // vIndex: 95, symbol: ?asItemInstance@DeepslateRedStoneOreBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 147, symbol: ?tick@DeepslateRedStoneOreBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 163, symbol: ?_lightUpBlock@DeepslateRedStoneOreBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void _lightUpBlock(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0DeepslateRedStoneOreBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI DeepslateRedStoneOreBlock(std::string const& nameId, int id, bool lit);

    // NOLINTEND
};
