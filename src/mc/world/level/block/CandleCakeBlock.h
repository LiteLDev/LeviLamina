#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/AbstractCandleBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CandleCakeBlock : public ::AbstractCandleBlock {
public:
    // prevent constructor by default
    CandleCakeBlock& operator=(CandleCakeBlock const&);
    CandleCakeBlock(CandleCakeBlock const&);
    CandleCakeBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CandleCakeBlock@@UEAA@XZ
    virtual ~CandleCakeBlock() = default;

    // vIndex: 11, symbol: ?getVisualShape@CandleCakeBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

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

    // vIndex: 61, symbol: ?checkIsPathable@CandleCakeBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 84, symbol: ?mayPlace@CandleCakeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, uchar) const;

    // vIndex: 92, symbol: ?neighborChanged@CandleCakeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 96, symbol: ?asItemInstance@CandleCakeBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 112, symbol: ?getComparatorSignal@CandleCakeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 154, symbol: ?use@CandleCakeBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 156, symbol: ?canSurvive@CandleCakeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 164, symbol: ?getResourceItem@CandleCakeBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 168, symbol: ?_getNumCandles@CandleCakeBlock@@MEBAHAEBVBlock@@@Z
    virtual int _getNumCandles(class Block const&) const;

    // vIndex: 169, symbol:
    // ?_iterateCandles@CandleCakeBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    virtual void
    _iterateCandles(class Block const&, class BlockPos const&, std::function<void(class Vec3 const&, int)>) const;

    // vIndex: 170, symbol: ?_tryLightOnFire@CandleCakeBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _tryLightOnFire(class BlockSource&, class BlockPos const&, class Actor*) const;

    // symbol: ?canBeSilkTouched@CandleCakeBlock@@EEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?hasComparatorSignal@CandleCakeBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ?isCandleCakeBlock@CandleCakeBlock@@UEBA_NXZ
    MCVAPI bool isCandleCakeBlock() const;

    // symbol: ??0CandleCakeBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CandleCakeBlock(std::string const&, int);

    // symbol: ?getCandleCakeFromCandle@CandleCakeBlock@@SAAEBVBlock@@AEBV2@@Z
    MCAPI static class Block const& getCandleCakeFromCandle(class Block const&);

    // symbol: ?getCandleFromCandleCake@CandleCakeBlock@@SAAEBVBlock@@AEBV2@@Z
    MCAPI static class Block const& getCandleFromCandleCake(class Block const&);

    // symbol: ?tryLightFire@CandleCakeBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI static bool tryLightFire(class BlockSource&, class BlockPos const&, class Actor*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_forEachCandle@CandleCakeBlock@@CAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    MCAPI static void
    _forEachCandle(class Block const&, class BlockPos const&, std::function<void(class Vec3 const&, int)>);

    // NOLINTEND
};
