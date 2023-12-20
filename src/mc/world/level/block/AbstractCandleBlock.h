#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class AbstractCandleBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    AbstractCandleBlock& operator=(AbstractCandleBlock const&);
    AbstractCandleBlock(AbstractCandleBlock const&);
    AbstractCandleBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AbstractCandleBlock@@UEAA@XZ
    virtual ~AbstractCandleBlock();

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

    // vIndex: 32, symbol: ?isWaterBlocking@AbstractCandleBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

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

    // vIndex: 56, symbol: ?canContainLiquid@AbstractCandleBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 92, symbol: ?neighborChanged@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

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

    // vIndex: 134, symbol:
    // ?animateTickBedrockLegacy@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 137, symbol: ?getLightEmission@AbstractCandleBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const&) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 167, symbol: ?entityInside@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;

    // vIndex: 168, symbol: ?_getNumCandles@AbstractCandleBlock@@MEBAHAEBVBlock@@@Z
    virtual int _getNumCandles(class Block const&) const;

    // vIndex: 169, symbol:
    // ?_iterateCandles@AbstractCandleBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    virtual void
    _iterateCandles(class Block const&, class BlockPos const&, std::function<void(class Vec3 const&, int)>) const;

    // vIndex: 170, symbol: ?_tryLightOnFire@AbstractCandleBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _tryLightOnFire(class BlockSource&, class BlockPos const&, class Actor*) const;

    // symbol: ?canBeSilkTouched@AbstractCandleBlock@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?hasVariableLighting@AbstractCandleBlock@@UEBA_NXZ
    MCVAPI bool hasVariableLighting() const;

    // symbol: ?isInteractiveBlock@AbstractCandleBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol:
    // ??0AbstractCandleBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI AbstractCandleBlock(std::string const&, int, class Material const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_checkForWaterlogging@AbstractCandleBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _checkForWaterlogging(class BlockSource&, class BlockPos const&) const;

    // symbol: ?_extinguish@AbstractCandleBlock@@IEBAXPEAVActor@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _extinguish(class Actor*, class Block const&, class BlockSource&, class BlockPos const&) const;

    // symbol: ?_canBeLit@AbstractCandleBlock@@KA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _canBeLit(class Block const&, class BlockSource&, class BlockPos const&);

    // symbol: ?_isLit@AbstractCandleBlock@@KA_NAEBVBlock@@@Z
    MCAPI static bool _isLit(class Block const&);

    // symbol: ?_setLit@AbstractCandleBlock@@KAXAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI static void _setLit(class Block const&, class BlockSource&, class BlockPos const&, bool);

    // NOLINTEND
};
