#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class CherryLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    CherryLeavesBlock& operator=(CherryLeavesBlock const&);
    CherryLeavesBlock(CherryLeavesBlock const&);
    CherryLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CherryLeavesBlock@@UEAA@XZ
    virtual ~CherryLeavesBlock() = default;

    // vIndex: 121, symbol: ?getColor@CherryLeavesBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 124, symbol: ?isSeasonTinted@CherryLeavesBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 125, symbol: ?onGraphicsModeChanged@CherryLeavesBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 128, symbol: ?getVariant@CherryLeavesBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 134, symbol: ?animateTick@CherryLeavesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 155, symbol:
    // ?getRenderLayer@CherryLeavesBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 159, symbol:
    // ?getMapColor@CherryLeavesBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // symbol: ??0CherryLeavesBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CherryLeavesBlock(std::string const& nameId, int id);

    // NOLINTEND
};
