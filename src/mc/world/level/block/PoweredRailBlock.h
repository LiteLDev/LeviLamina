#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BaseRailBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class PoweredRailBlock : public ::BaseRailBlock {
public:
    // prevent constructor by default
    PoweredRailBlock& operator=(PoweredRailBlock const&);
    PoweredRailBlock(PoweredRailBlock const&);
    PoweredRailBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PoweredRailBlock@@UEAA@XZ
    virtual ~PoweredRailBlock() = default;

    // vIndex: 65, symbol: ?onRedstoneUpdate@PoweredRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 128, symbol: ?getVariant@PoweredRailBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // symbol: ??0PoweredRailBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PoweredRailBlock(std::string const& nameId, int id);

    // NOLINTEND
};
