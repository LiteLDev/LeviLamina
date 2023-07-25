#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BushBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SaplingBlock : public ::BushBlock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAPLINGBLOCK
public:
    SaplingBlock& operator=(SaplingBlock const&) = delete;
    SaplingBlock(SaplingBlock const&)            = delete;
    SaplingBlock()                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl 43
     * @symbol __unk_vfn_43
     */
    virtual void __unk_vfn_43();
    /**
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl 46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl 47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl 48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl 50
     * @symbol __unk_vfn_50
     */
    virtual void __unk_vfn_50();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 63
     * @symbol __unk_vfn_63
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl 64
     * @symbol ?canContainLiquid\@SaplingBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl 88
     * @symbol
     * ?onFertilized\@SaplingBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@W4FertilizerType\@\@\@Z
     */
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum class FertilizerType) const;
    /**
     * @vftbl 90
     * @symbol ?canBeFertilized\@SaplingBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 94
     * @symbol ?mayPlace\@SaplingBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 105
     * @symbol ?asItemInstance\@SaplingBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl 124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128();
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl 133
     * @symbol
     * ?buildDescriptionId\@SaplingBlock\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string buildDescriptionId(class Block const&) const;
    /**
     * @vftbl 134
     * @symbol ?isAuxValueRelevantForPicking\@SaplingBlock\@\@UEBA_NXZ
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @vftbl 143
     * @symbol ?getVariant\@SaplingBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const&) const;
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153();
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 163
     * @symbol __unk_vfn_163
     */
    virtual void __unk_vfn_163();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 169
     * @symbol ?randomTick\@SaplingBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 176
     * @symbol ?getRenderLayer\@SaplingBlock\@\@UEBA?AW4BlockRenderLayer\@\@XZ
     */
    virtual enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @vftbl 177
     * @symbol
     * ?getRenderLayer\@SaplingBlock\@\@UEBA?AW4BlockRenderLayer\@\@AEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl 185
     * @symbol ?getResourceItem\@SaplingBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /**
     * @vftbl 187
     * @symbol ?getSilkTouchItemInstance\@SaplingBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAPLINGBLOCK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SaplingBlock();
#endif
    /**
     * @symbol ??0SaplingBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI SaplingBlock(std::string const&, int);

    // protected:
    /**
     * @symbol ?advanceTree\@SaplingBlock\@\@IEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@PEAVActor\@\@\@Z
     */
    MCAPI bool advanceTree(class BlockSource&, class BlockPos const&, class Random&, class Actor*) const;

    // private:
    /**
     * @symbol
     * ?_generateJungleTree\@SaplingBlock\@\@AEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEAH0AEA_NAEBVBlockPos\@\@AEAVBlockSource\@\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits>
    _generateJungleTree(int&, int&, bool&, class BlockPos const&, class BlockSource&, class FeatureRegistry const&)
        const;
    /**
     * @symbol
     * ?_generateOakTree\@SaplingBlock\@\@AEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBVFeatureRegistry\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@AEAVRandom\@\@_N\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits>
    _generateOakTree(class FeatureRegistry const&, class BlockPos const&, class BlockSource&, class Random&, bool)
        const;
    /**
     * @symbol
     * ?_generateRedwoodTree\@SaplingBlock\@\@AEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEAH0AEA_NAEBVBlockPos\@\@AEAVBlockSource\@\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits>
    _generateRedwoodTree(int&, int&, bool&, class BlockPos const&, class BlockSource&, class FeatureRegistry const&)
        const;
    /**
     * @symbol
     * ?_generateRoofTree\@SaplingBlock\@\@AEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEAH0AEA_NAEBVBlockPos\@\@AEAVBlockSource\@\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits>
    _generateRoofTree(int&, int&, bool&, class BlockPos const&, class BlockSource&, class FeatureRegistry const&) const;
    /**
     * @symbol ?_growTree\@SaplingBlock\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@_N\@Z
     */
    MCAPI bool _growTree(class BlockSource&, class BlockPos const&, class Random&, bool) const;

protected:
private:
};
