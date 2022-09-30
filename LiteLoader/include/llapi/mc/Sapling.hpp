/**
 * @file  Sapling.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Sapling.
 *
 */
class Sapling : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAPLING
public:
    class Sapling& operator=(class Sapling const &) = delete;
    Sapling(class Sapling const &) = delete;
    Sapling() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~Sapling();
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -1129516352
     * @vftbl  62
     * @symbol ?canContainLiquid@Sapling@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   1964061950
     * @vftbl  85
     * @symbol ?onFertilized@Sapling@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @hash   504668589
     * @vftbl  87
     * @symbol ?canBeFertilized@Sapling@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   140848360
     * @vftbl  91
     * @symbol ?mayPlace@Sapling@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -386542106
     * @vftbl  102
     * @symbol ?getResourceItem@Sapling@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  103
     * @symbol ?asItemInstance@Sapling@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -836441553
     * @vftbl  134
     * @symbol ?buildDescriptionId@Sapling@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @hash   -412555284
     * @vftbl  135
     * @symbol ?isAuxValueRelevantForPicking@Sapling@@UEBA_NXZ
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @hash   1629593256
     * @vftbl  147
     * @symbol ?getVariant@Sapling@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @hash   -1081108273
     * @vftbl  158
     * @symbol ?getSilkTouchItemInstance@Sapling@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   168785163
     * @vftbl  175
     * @symbol ?randomTick@Sapling@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -1720054721
     * @vftbl  181
     * @symbol ?getRenderLayer@Sapling@@UEBA?AW4BlockRenderLayer@@XZ
     */
    virtual enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @hash   472071473
     * @vftbl  182
     * @symbol ?getRenderLayer@Sapling@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual enum class BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @hash   -977938730
     * @symbol ??0Sapling@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI Sapling(std::string const &, int);

//protected:
    /**
     * @hash   1214528732
     * @symbol ?advanceTree@Sapling@@IEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@PEAVActor@@@Z
     */
    MCAPI bool advanceTree(class BlockSource &, class BlockPos const &, class Random &, class Actor *) const;

//private:
    /**
     * @hash   -163899663
     * @symbol ?_generateJungleTree@Sapling@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateJungleTree(int &, int &, bool &, class BlockPos const &, class BlockSource &, class FeatureRegistry const &) const;
    /**
     * @hash   -2005409914
     * @symbol ?_generateOakTree@Sapling@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBVFeatureRegistry@@AEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@_N@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateOakTree(class FeatureRegistry const &, class BlockPos const &, class BlockSource &, class Random &, bool) const;
    /**
     * @hash   -1451772598
     * @symbol ?_generateRedwoodTree@Sapling@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateRedwoodTree(int &, int &, bool &, class BlockPos const &, class BlockSource &, class FeatureRegistry const &) const;
    /**
     * @hash   1761509320
     * @symbol ?_generateRoofTree@Sapling@@AEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> _generateRoofTree(int &, int &, bool &, class BlockPos const &, class BlockSource &, class FeatureRegistry const &) const;
    /**
     * @hash   84420902
     * @symbol ?_growTree@Sapling@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
     */
    MCAPI bool _growTree(class BlockSource &, class BlockPos const &, class Random &, bool) const;
    /**
     * @hash   -1549508884
     * @symbol ?_isNearFlowerBlock@Sapling@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _isNearFlowerBlock(class BlockSource &, class BlockPos const &) const;

protected:

private:

};