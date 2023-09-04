#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SaplingBlock : public ::BushBlock {
public:
    // prevent constructor by default
    SaplingBlock& operator=(SaplingBlock const&) = delete;
    SaplingBlock(SaplingBlock const&)            = delete;
    SaplingBlock()                               = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

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

    // vIndex: 64, symbol: ?canContainLiquid@SaplingBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 88, symbol:
    // ?onFertilized@SaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // vIndex: 90, symbol: ?canBeFertilized@SaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 94, symbol: ?mayPlace@SaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 105, symbol: ?asItemInstance@SaplingBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 133, symbol:
    // ?buildDescriptionId@SaplingBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 134, symbol: ?isAuxValueRelevantForPicking@SaplingBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 143, symbol: ?getVariant@SaplingBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

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

    // vIndex: 169, symbol: ?randomTick@SaplingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 176, symbol: ?getRenderLayer@SaplingBlock@@UEBA?AW4BlockRenderLayer@@XZ
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 177, symbol:
    // ?getRenderLayer@SaplingBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 185, symbol: ?getResourceItem@SaplingBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 187, symbol: ?getSilkTouchItemInstance@SaplingBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;

    // symbol: ??1SaplingBlock@@UEAA@XZ
    MCVAPI ~SaplingBlock();

    // symbol: ??0SaplingBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SaplingBlock(std::string const&, int);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?advanceTree@SaplingBlock@@IEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@PEAVActor@@@Z
    MCAPI bool advanceTree(class BlockSource&, class BlockPos const&, class Random&, class Actor*) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateJungleTree@SaplingBlock@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
    MCAPI class WeakRefT<struct FeatureRefTraits>
    _generateJungleTree(int&, int&, bool&, class BlockPos const&, class BlockSource&, class FeatureRegistry const&)
        const;

    // symbol:
    // ?_generateOakTree@SaplingBlock@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBVFeatureRegistry@@AEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@_N@Z
    MCAPI class WeakRefT<struct FeatureRefTraits>
    _generateOakTree(class FeatureRegistry const&, class BlockPos const&, class BlockSource&, class Random&, bool)
        const;

    // symbol:
    // ?_generateRedwoodTree@SaplingBlock@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
    MCAPI class WeakRefT<struct FeatureRefTraits>
    _generateRedwoodTree(int&, int&, bool&, class BlockPos const&, class BlockSource&, class FeatureRegistry const&)
        const;

    // symbol:
    // ?_generateRoofTree@SaplingBlock@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
    MCAPI class WeakRefT<struct FeatureRefTraits>
    _generateRoofTree(int&, int&, bool&, class BlockPos const&, class BlockSource&, class FeatureRegistry const&) const;

    // symbol: ?_growTree@SaplingBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI bool _growTree(class BlockSource&, class BlockPos const&, class Random&, bool) const;

    // NOLINTEND
};
