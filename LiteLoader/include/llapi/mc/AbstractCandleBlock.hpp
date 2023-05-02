/**
 * @file  AbstractCandleBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol ?isWaterBlocking\@AbstractCandleBlock\@\@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
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
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl 45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
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
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 62
     * @symbol ?canContainLiquid\@AbstractCandleBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 99
     * @symbol ?neighborChanged\@AbstractCandleBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl 105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl 113
     * @symbol ?entityInside\@AbstractCandleBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@\@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl 126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl 129
     * @symbol __unk_vfn_129
     */
    virtual void __unk_vfn_129();
    /**
     * @vftbl 132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl 152
     * @symbol ?animateTick\@AbstractCandleBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 154
     * @symbol ?getLightEmission\@AbstractCandleBlock\@\@UEBA?AUBrightness\@\@AEBVBlock\@\@\@Z
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @vftbl 157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl 166
     * @symbol __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 172
     * @symbol ?tick\@AbstractCandleBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 175
     * @symbol __unk_vfn_175
     */
    virtual void __unk_vfn_175();
    /**
     * @vftbl 179
     * @symbol __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl 187
     * @symbol __unk_vfn_187
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl 195
     * @symbol ?_getNumCandles\@AbstractCandleBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int _getNumCandles(class Block const &) const;
    /**
     * @vftbl 196
     * @symbol ?_iterateCandles\@AbstractCandleBlock\@\@MEBAXAEBVBlock\@\@AEBVBlockPos\@\@V?$function\@$$A6AXAEBVVec3\@\@H\@Z\@std\@\@\@Z
     */
    virtual void _iterateCandles(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>) const;
    /**
     * @vftbl 197
     * @symbol ?_tryLightOnFire\@AbstractCandleBlock\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    virtual void _tryLightOnFire(class BlockSource &, class BlockPos const &, class Actor *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABSTRACTCANDLEBLOCK
    /**
     * @symbol ?canBeSilkTouched\@AbstractCandleBlock\@\@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?hasVariableLighting\@AbstractCandleBlock\@\@UEBA_NXZ
     */
    MCVAPI bool hasVariableLighting() const;
    /**
     * @symbol ?isInteractiveBlock\@AbstractCandleBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AbstractCandleBlock();
#endif
    /**
     * @symbol ??0AbstractCandleBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVMaterial\@\@\@Z
     */
    MCAPI AbstractCandleBlock(std::string const &, int, class Material const &);

//protected:
    /**
     * @symbol ?_checkForWaterlogging\@AbstractCandleBlock\@\@IEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _checkForWaterlogging(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_extinguish\@AbstractCandleBlock\@\@IEBAXPEAVActor\@\@AEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _extinguish(class Actor *, class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_canBeLit\@AbstractCandleBlock\@\@KA_NAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _canBeLit(class Block const &, class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_isLit\@AbstractCandleBlock\@\@KA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool _isLit(class Block const &);

protected:

};
