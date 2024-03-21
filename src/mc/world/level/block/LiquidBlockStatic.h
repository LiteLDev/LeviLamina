#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/LiquidBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LiquidBlockStatic : public ::LiquidBlock {
public:
    // prevent constructor by default
    LiquidBlockStatic& operator=(LiquidBlockStatic const&);
    LiquidBlockStatic(LiquidBlockStatic const&);
    LiquidBlockStatic();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LiquidBlockStatic@@UEAA@XZ
    virtual ~LiquidBlockStatic() = default;

    // vIndex: 92, symbol: ?neighborChanged@LiquidBlockStatic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 148, symbol: ?randomTick@LiquidBlockStatic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 162, symbol: ?entityInside@LiquidBlockStatic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor& entity) const;

    // symbol:
    // ??0LiquidBlockStatic@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI LiquidBlockStatic(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setDynamic@LiquidBlockStatic@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _setDynamic(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
