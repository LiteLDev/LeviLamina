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

class JungleLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    JungleLeavesBlock& operator=(JungleLeavesBlock const&);
    JungleLeavesBlock(JungleLeavesBlock const&);
    JungleLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1JungleLeavesBlock@@UEAA@XZ
    virtual ~JungleLeavesBlock() = default;

    // vIndex: 121, symbol: ?getColor@JungleLeavesBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 128, symbol: ?getVariant@JungleLeavesBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 155, symbol:
    // ?getRenderLayer@JungleLeavesBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 159, symbol:
    // ?getMapColor@JungleLeavesBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // symbol:
    // ??0JungleLeavesBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$WeakPtr@$$CBVBlockLegacy@@@@@Z
    MCAPI JungleLeavesBlock(std::string const&, int, class WeakPtr<class BlockLegacy const>);

    // NOLINTEND
};
