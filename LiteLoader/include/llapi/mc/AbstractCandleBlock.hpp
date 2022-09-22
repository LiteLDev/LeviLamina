/**
 * @file  AbstractCandleBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AbstractCandleBlock.
 *
 */
class AbstractCandleBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSTRACTCANDLEBLOCK
public:
    class AbstractCandleBlock& operator=(class AbstractCandleBlock const &) = delete;
    AbstractCandleBlock(class AbstractCandleBlock const &) = delete;
    AbstractCandleBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AbstractCandleBlock();
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
     * @hash   -945187236
     * @vftbl  35
     * @symbol ?isWaterBlocking@AbstractCandleBlock@@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
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
     * @hash   406824634
     * @vftbl  62
     * @symbol ?canContainLiquid@AbstractCandleBlock@@UEBA_NXZ
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
     * @hash   931909840
     * @vftbl  99
     * @symbol ?neighborChanged@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -1123916520
     * @vftbl  114
     * @symbol ?entityInside@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
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
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   112062419
     * @vftbl  152
     * @symbol ?animateTick@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   1238664518
     * @vftbl  154
     * @symbol ?getLightEmission@AbstractCandleBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
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
     * @hash   508433092
     * @vftbl  174
     * @symbol ?tick@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @hash   1695059261
     * @vftbl  192
     * @symbol ?_getNumCandles@AbstractCandleBlock@@MEBAHAEBVBlock@@@Z
     */
    virtual int _getNumCandles(class Block const &) const;
    /**
     * @hash   159887076
     * @vftbl  193
     * @symbol ?_iterateCandles@AbstractCandleBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
     */
    virtual void _iterateCandles(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>) const;
    /**
     * @hash   648070091
     * @vftbl  194
     * @symbol ?_tryLightOnFire@AbstractCandleBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    virtual void _tryLightOnFire(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  196
     * @symbol __unk_vfn_196
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  197
     * @symbol __unk_vfn_197
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl  199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @hash   1915421558
     * @symbol ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABSTRACTCANDLEBLOCK
    /**
     * @hash   -1050672528
     * @symbol ?canBeSilkTouched@AbstractCandleBlock@@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   -375381668
     * @symbol ?hasVariableLighting@AbstractCandleBlock@@UEBA_NXZ
     */
    MCVAPI bool hasVariableLighting() const;
    /**
     * @hash   -1258925649
     * @symbol ?isInteractiveBlock@AbstractCandleBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   2051598069
     * @symbol ??0AbstractCandleBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     */
    MCAPI AbstractCandleBlock(std::string const &, int, class Material const &);

//protected:
    /**
     * @hash   -1462627942
     * @symbol ?_checkForWaterlogging@AbstractCandleBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _checkForWaterlogging(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1948151988
     * @symbol ?_extinguish@AbstractCandleBlock@@IEBAXPEAVActor@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _extinguish(class Actor *, class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1642375160
     * @symbol ?_canBeLit@AbstractCandleBlock@@KA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool _canBeLit(class Block const &, class BlockSource &, class BlockPos const &);
    /**
     * @hash   1013133855
     * @symbol ?_isLit@AbstractCandleBlock@@KA_NAEBVBlock@@@Z
     */
    MCAPI static bool _isLit(class Block const &);

protected:

};