#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
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
    SaplingBlock& operator=(SaplingBlock const&);
    SaplingBlock(SaplingBlock const&);
    SaplingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SaplingBlock@@UEAA@XZ
    virtual ~SaplingBlock();

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

    // vIndex: 56, symbol: ?canContainLiquid@SaplingBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 79, symbol:
    // ?onFertilized@SaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@SaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 85, symbol: ?mayPlace@SaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 96, symbol: ?asItemInstance@SaplingBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

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

    // vIndex: 119, symbol:
    // ?buildDescriptionId@SaplingBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120, symbol: ?isAuxValueRelevantForPicking@SaplingBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129, symbol: ?getVariant@SaplingBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 151, symbol: ?randomTick@SaplingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 157, symbol: ?getRenderLayer@SaplingBlock@@UEBA?AW4BlockRenderLayer@@XZ
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 158, symbol:
    // ?getRenderLayer@SaplingBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const& block, class BlockSource&, class BlockPos const& pos) const;

    // symbol: ??0SaplingBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SaplingBlock(std::string const& nameId, int);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?advanceTree@SaplingBlock@@IEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@PEAVActor@@@Z
    MCAPI bool
    advanceTree(class BlockSource& region, class BlockPos const& pos, class Random& random, class Actor*) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateJungleTree@SaplingBlock@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateJungleTree(
        int&                         ox,
        int&                         oz,
        bool&                        multiblock,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class FeatureRegistry const& registry
    ) const;

    // symbol:
    // ?_generateOakTree@SaplingBlock@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBVFeatureRegistry@@AEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@_N@Z
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateOakTree(
        class FeatureRegistry const& registry,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class Random&                random,
        bool
    ) const;

    // symbol:
    // ?_generateRedwoodTree@SaplingBlock@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateRedwoodTree(
        int&                         ox,
        int&                         oz,
        bool&                        multiblock,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class FeatureRegistry const& registry
    ) const;

    // symbol:
    // ?_generateRoofTree@SaplingBlock@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateRoofTree(
        int&                         ox,
        int&                         oz,
        bool&                        multiblock,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class FeatureRegistry const& registry
    ) const;

    // symbol: ?_growTree@SaplingBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI bool _growTree(class BlockSource& region, class BlockPos const& pos, class Random& random, bool) const;

    // NOLINTEND
};
