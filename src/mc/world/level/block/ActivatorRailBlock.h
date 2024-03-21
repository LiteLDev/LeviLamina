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

class ActivatorRailBlock : public ::BaseRailBlock {
public:
    // prevent constructor by default
    ActivatorRailBlock& operator=(ActivatorRailBlock const&);
    ActivatorRailBlock(ActivatorRailBlock const&);
    ActivatorRailBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActivatorRailBlock@@UEAA@XZ
    virtual ~ActivatorRailBlock() = default;

    // vIndex: 65, symbol: ?onRedstoneUpdate@ActivatorRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& source, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 128, symbol: ?getVariant@ActivatorRailBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // symbol: ??0ActivatorRailBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ActivatorRailBlock(std::string const& nameId, int id);

    // NOLINTEND
};
