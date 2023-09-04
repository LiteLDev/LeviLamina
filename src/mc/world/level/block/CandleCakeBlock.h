#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
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
    CandleCakeBlock& operator=(CandleCakeBlock const&) = delete;
    CandleCakeBlock(CandleCakeBlock const&)            = delete;
    CandleCakeBlock()                                  = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 12, symbol: ?getVisualShape@CandleCakeBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

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

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 71, symbol: ?checkIsPathable@CandleCakeBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 93, symbol: ?mayPlace@CandleCakeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, uchar) const;

    // vIndex: 101, symbol: ?neighborChanged@CandleCakeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 105, symbol: ?asItemInstance@CandleCakeBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 126, symbol: ?getComparatorSignal@CandleCakeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 173, symbol: ?use@CandleCakeBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?canSurvive@CandleCakeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 184, symbol: ?playerDestroy@CandleCakeBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const;

    // vIndex: 185, symbol: ?getResourceItem@CandleCakeBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 192, symbol: ?_getNumCandles@CandleCakeBlock@@MEBAHAEBVBlock@@@Z
    virtual int _getNumCandles(class Block const&) const;

    // vIndex: 193, symbol:
    // ?_iterateCandles@CandleCakeBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    virtual void
    _iterateCandles(class Block const&, class BlockPos const&, std::function<void(class Vec3 const&, int)>) const;

    // vIndex: 194, symbol: ?_tryLightOnFire@CandleCakeBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
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
    // symbol: ?_popCandle@CandleCakeBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _popCandle(class BlockSource&, class BlockPos const&) const;

    // symbol: ?_forEachCandle@CandleCakeBlock@@CAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    MCAPI static void
    _forEachCandle(class Block const&, class BlockPos const&, std::function<void(class Vec3 const&, int)>);

    // NOLINTEND
};
