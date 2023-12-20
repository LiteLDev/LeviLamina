#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FaceDirectionalActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BeehiveBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    BeehiveBlock& operator=(BeehiveBlock const&);
    BeehiveBlock(BeehiveBlock const&);
    BeehiveBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BeehiveBlock@@UEAA@XZ
    virtual ~BeehiveBlock() = default;

    // vIndex: 2, symbol: ?getNextBlockPermutation@BeehiveBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* getNextBlockPermutation(class Block const&) const;

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

    // vIndex: 94, symbol: ?playerWillDestroy@BeehiveBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const* playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;

    // vIndex: 106, symbol:
    // ?executeEvent@BeehiveBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
    virtual void
    executeEvent(class BlockSource&, class BlockPos const&, class Block const&, std::string const&, class Actor&) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 112, symbol: ?getComparatorSignal@BeehiveBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 129, symbol: ?getVariant@BeehiveBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 132, symbol: ?getMappedFace@BeehiveBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar, class Block const&) const;

    // vIndex: 134, symbol: ?animateTickBedrockLegacy@BeehiveBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 154, symbol: ?use@BeehiveBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 164, symbol: ?getResourceItem@BeehiveBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // symbol: ?canBeSilkTouched@BeehiveBlock@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?hasComparatorSignal@BeehiveBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ??0BeehiveBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BeehiveBlock(std::string const&, int);

    // symbol: ?emitHoneyComb@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void emitHoneyComb(class BlockSource&, class BlockPos const&) const;

    // symbol: ?evictAll@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void evictAll(class BlockSource&, class BlockPos const&, bool) const;

    // symbol: ?onPlayerPlace@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void onPlayerPlace(class BlockSource&, class BlockPos const&) const;

    // symbol: ?deliverNectar@BeehiveBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static void deliverNectar(class BlockSource&, class Block const&, class BlockPos const&);

    // symbol: ?hasHoneyToHarvest@BeehiveBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool hasHoneyToHarvest(class Block const&);

    // symbol: ?resetHoneyLevel@BeehiveBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static void resetHoneyLevel(class BlockSource&, class Block const&, class BlockPos const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fillHoneyBottle@BeehiveBlock@@AEBAXAEAVPlayer@@AEAVItemStack@@1AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void
    _fillHoneyBottle(class Player&, class ItemStack&, class ItemStack&, class BlockSource&, class BlockPos const&)
        const;

    // symbol: ?_playBottleSound@BeehiveBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _playBottleSound(class BlockSource&, class BlockPos const&) const;

    // NOLINTEND
};
