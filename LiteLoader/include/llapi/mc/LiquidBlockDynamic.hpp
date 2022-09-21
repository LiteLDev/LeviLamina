/**
 * @file  MC/LiquidBlockDynamic.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LiquidBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidBlockDynamic.
 *
 */
class LiquidBlockDynamic : public LiquidBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDBLOCKDYNAMIC
public:
    class LiquidBlockDynamic& operator=(class LiquidBlockDynamic const &) = delete;
    LiquidBlockDynamic(class LiquidBlockDynamic const &) = delete;
    LiquidBlockDynamic() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LiquidBlockDynamic();
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
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   120638168
     * @vftbl  114
     * @symbol ?entityInside@LiquidBlockDynamic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
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
     * @hash   1533497222
     * @vftbl  171
     * @symbol ?onPlace@LiquidBlockDynamic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -2092381036
     * @vftbl  174
     * @symbol ?tick@LiquidBlockDynamic@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
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
     * @hash   1262089173
     * @symbol ??0LiquidBlockDynamic@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     */
    MCAPI LiquidBlockDynamic(std::string const &, int, class Material const &);
    /**
     * @hash   -1982852169
     * @symbol ?getSpread@LiquidBlockDynamic@@QEBA?AV?$array@_N$03@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI class std::array<bool, 4> getSpread(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1005408351
     * @symbol ?shouldBecomeStatic@LiquidBlockDynamic@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    MCAPI bool shouldBecomeStatic(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @hash   -139441313
     * @symbol ?_canSpreadTo@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z
     */
    MCAPI bool _canSpreadTo(class BlockSource &, class BlockPos const &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -1777993399
     * @symbol ?_getSlopeDistance@LiquidBlockDynamic@@AEBAHAEAVBlockSource@@AEBVBlockPos@@HH@Z
     */
    MCAPI int _getSlopeDistance(class BlockSource &, class BlockPos const &, int, int) const;
    /**
     * @hash   -1692059565
     * @symbol ?_isWaterBlocking@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z
     */
    MCAPI bool _isWaterBlocking(class BlockSource &, class BlockPos const &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -1173663482
     * @symbol ?_setStatic@LiquidBlockDynamic@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI void _setStatic(class BlockSource &, class BlockPos const &, bool) const;
    /**
     * @hash   1103326060
     * @symbol ?_tick@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
     */
    MCAPI bool _tick(class BlockSource &, class BlockPos const &, class Random &, bool) const;
    /**
     * @hash   749031059
     * @symbol ?_trySpreadTo@LiquidBlockDynamic@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H1E@Z
     */
    MCAPI void _trySpreadTo(class BlockSource &, class BlockPos const &, int, class BlockPos const &, unsigned char) const;

private:

};