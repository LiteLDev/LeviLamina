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

class AzaleaLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    AzaleaLeavesBlock& operator=(AzaleaLeavesBlock const&);
    AzaleaLeavesBlock(AzaleaLeavesBlock const&);
    AzaleaLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AzaleaLeavesBlock@@UEAA@XZ
    virtual ~AzaleaLeavesBlock() = default;

    // vIndex: 121, symbol: ?getColor@AzaleaLeavesBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 125, symbol: ?onGraphicsModeChanged@AzaleaLeavesBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 128, symbol: ?getVariant@AzaleaLeavesBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 155, symbol:
    // ?getRenderLayer@AzaleaLeavesBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 159, symbol:
    // ?getMapColor@AzaleaLeavesBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // symbol:
    // ??0AzaleaLeavesBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$WeakPtr@$$CBVBlockLegacy@@@@@Z
    MCAPI AzaleaLeavesBlock(std::string const& nameId, int id, class WeakPtr<class BlockLegacy const> sapling);

    // NOLINTEND
};
