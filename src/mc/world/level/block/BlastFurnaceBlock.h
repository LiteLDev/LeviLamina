#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FurnaceBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BlastFurnaceBlock : public ::FurnaceBlock {
public:
    // prevent constructor by default
    BlastFurnaceBlock& operator=(BlastFurnaceBlock const&);
    BlastFurnaceBlock(BlastFurnaceBlock const&);
    BlastFurnaceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlastFurnaceBlock@@UEAA@XZ
    virtual ~BlastFurnaceBlock() = default;

    // vIndex: 95, symbol: ?asItemInstance@BlastFurnaceBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 151, symbol: ?use@BlastFurnaceBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0BlastFurnaceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI BlastFurnaceBlock(std::string const& nameId, int id, bool lit);

    // NOLINTEND
};
