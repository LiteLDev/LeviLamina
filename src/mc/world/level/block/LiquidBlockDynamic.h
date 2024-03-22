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

class LiquidBlockDynamic : public ::LiquidBlock {
public:
    // prevent constructor by default
    LiquidBlockDynamic& operator=(LiquidBlockDynamic const&);
    LiquidBlockDynamic(LiquidBlockDynamic const&);
    LiquidBlockDynamic();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LiquidBlockDynamic@@UEAA@XZ
    virtual ~LiquidBlockDynamic() = default;

    // vIndex: 145, symbol: ?onPlace@LiquidBlockDynamic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@LiquidBlockDynamic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 162, symbol: ?entityInside@LiquidBlockDynamic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor& entity) const;

    // symbol:
    // ??0LiquidBlockDynamic@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI LiquidBlockDynamic(std::string const& nameId, int id, class Material const& material);

    // symbol: ?getSpread@LiquidBlockDynamic@@QEBA?AV?$array@_N$03@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI std::array<bool, 4> getSpread(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?shouldBecomeStatic@LiquidBlockDynamic@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI bool shouldBecomeStatic(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canSpreadTo@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z
    MCAPI bool _canSpreadTo(
        class BlockSource&    region,
        class BlockPos const& pos,
        class BlockPos const& flowFromPos,
        uchar                 flowFromDirection
    ) const;

    // symbol: ?_getSlopeDistance@LiquidBlockDynamic@@AEBAHAEAVBlockSource@@AEBVBlockPos@@HH@Z
    MCAPI int _getSlopeDistance(class BlockSource& region, class BlockPos const& pos, int pass, int from) const;

    // symbol: ?_isWaterBlocking@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z
    MCAPI bool _isWaterBlocking(
        class BlockSource&    region,
        class BlockPos const& pos,
        class BlockPos const& flowFromPos,
        uchar                 flowFromDirection
    ) const;

    // symbol: ?_setStatic@LiquidBlockDynamic@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void _setStatic(class BlockSource& region, class BlockPos const& pos, bool usingExtraData) const;

    // symbol: ?_tick@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI bool
    _tick(class BlockSource& region, class BlockPos const& pos, class Random& random, bool onlyDetectStatic) const;

    // symbol: ?_trySpreadTo@LiquidBlockDynamic@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H1E@Z
    MCAPI void _trySpreadTo(
        class BlockSource&    region,
        class BlockPos const& pos,
        int                   neighbor,
        class BlockPos const& flowFromPos,
        uchar                 flowFromDirection
    ) const;

    // NOLINTEND
};
