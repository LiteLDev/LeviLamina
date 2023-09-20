/**
 * @file  SaplingBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SaplingBlock : public BushBlock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAPLINGBLOCK
public:
    class SaplingBlock& operator=(class SaplingBlock const &) = delete;
    SaplingBlock(class SaplingBlock const &) = delete;
    SaplingBlock() = delete;
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
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 63
     * @symbol ?canContainLiquid\@SaplingBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 87
     * @symbol ?onFertilized\@SaplingBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@W4FertilizerType\@\@\@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @vftbl 89
     * @symbol ?canBeFertilized\@SaplingBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl 93
     * @symbol ?mayPlace\@SaplingBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 104
     * @symbol ?asItemInstance\@SaplingBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 122
     * @symbol __unk_vfn_122
     */
    virtual void __unk_vfn_122();
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
     * @vftbl 127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl 130
     * @symbol __unk_vfn_130
     */
    virtual void __unk_vfn_130();
    /**
     * @vftbl 132
     * @symbol ?buildDescriptionId\@SaplingBlock\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl 133
     * @symbol ?isAuxValueRelevantForPicking\@SaplingBlock\@\@UEBA_NXZ
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @vftbl 142
     * @symbol ?getVariant\@SaplingBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const &) const;
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
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
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
     * @symbol ?getRenderLayer\@SaplingBlock\@\@UEBA?AW4BlockRenderLayer\@\@AEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAPLINGBLOCK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SaplingBlock();
#endif
    /**
     * @symbol ??0SaplingBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI SaplingBlock(std::string const &, int);

//protected:
    /**
     * @symbol ?advanceTree\@SaplingBlock\@\@IEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@PEAVActor\@\@\@Z
     */
    MCAPI bool advanceTree(class BlockSource &, class BlockPos const &, class Random &, class Actor *) const;

//private:
    /**
     * @symbol ?_generateJungleTree\@SaplingBlock\@\@AEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEAH0AEA_NAEBVBlockPos\@\@AEAVBlockSource\@\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateJungleTree(int &, int &, bool &, class BlockPos const &, class BlockSource &, class FeatureRegistry const &) const;
    /**
     * @symbol ?_generateOakTree\@SaplingBlock\@\@AEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBVFeatureRegistry\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@AEAVRandom\@\@_N\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateOakTree(class FeatureRegistry const &, class BlockPos const &, class BlockSource &, class Random &, bool) const;
    /**
     * @symbol ?_generateRedwoodTree\@SaplingBlock\@\@AEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEAH0AEA_NAEBVBlockPos\@\@AEAVBlockSource\@\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateRedwoodTree(int &, int &, bool &, class BlockPos const &, class BlockSource &, class FeatureRegistry const &) const;
    /**
     * @symbol ?_generateRoofTree\@SaplingBlock\@\@AEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEAH0AEA_NAEBVBlockPos\@\@AEAVBlockSource\@\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateRoofTree(int &, int &, bool &, class BlockPos const &, class BlockSource &, class FeatureRegistry const &) const;
    /**
     * @symbol ?_growTree\@SaplingBlock\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@_N\@Z
     */
    MCAPI bool _growTree(class BlockSource &, class BlockPos const &, class Random &, bool) const;

protected:

private:

};
