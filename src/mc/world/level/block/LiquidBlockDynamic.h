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

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 147, symbol: ?onPlace@LiquidBlockDynamic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@LiquidBlockDynamic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 167, symbol: ?entityInside@LiquidBlockDynamic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;

    // symbol:
    // ??0LiquidBlockDynamic@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI LiquidBlockDynamic(std::string const&, int, class Material const&);

    // symbol: ?getSpread@LiquidBlockDynamic@@QEBA?AV?$array@_N$03@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI std::array<bool, 4> getSpread(class BlockSource&, class BlockPos const&) const;

    // symbol: ?shouldBecomeStatic@LiquidBlockDynamic@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI bool shouldBecomeStatic(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canSpreadTo@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z
    MCAPI bool _canSpreadTo(class BlockSource&, class BlockPos const&, class BlockPos const&, uchar) const;

    // symbol: ?_getSlopeDistance@LiquidBlockDynamic@@AEBAHAEAVBlockSource@@AEBVBlockPos@@HH@Z
    MCAPI int _getSlopeDistance(class BlockSource&, class BlockPos const&, int, int) const;

    // symbol: ?_isWaterBlocking@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z
    MCAPI bool _isWaterBlocking(class BlockSource&, class BlockPos const&, class BlockPos const&, uchar) const;

    // symbol: ?_setStatic@LiquidBlockDynamic@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void _setStatic(class BlockSource&, class BlockPos const&, bool) const;

    // symbol: ?_tick@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI bool _tick(class BlockSource&, class BlockPos const&, class Random&, bool) const;

    // symbol: ?_trySpreadTo@LiquidBlockDynamic@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H1E@Z
    MCAPI void _trySpreadTo(class BlockSource&, class BlockPos const&, int, class BlockPos const&, uchar) const;

    // NOLINTEND
};
