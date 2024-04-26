#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/LeavesBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BirchLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    BirchLeavesBlock& operator=(BirchLeavesBlock const&);
    BirchLeavesBlock(BirchLeavesBlock const&);
    BirchLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BirchLeavesBlock@@UEAA@XZ
    virtual ~BirchLeavesBlock() = default;

    // vIndex: 121, symbol: ?getColor@BirchLeavesBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 128, symbol: ?getVariant@BirchLeavesBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 155, symbol:
    // ?getRenderLayer@BirchLeavesBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 159, symbol:
    // ?getMapColor@BirchLeavesBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // symbol:
    // ??0BirchLeavesBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$WeakPtr@$$CBVBlockLegacy@@@@@Z
    MCAPI BirchLeavesBlock(std::string const&, int, class WeakPtr<class BlockLegacy const>);

    // NOLINTEND
};
