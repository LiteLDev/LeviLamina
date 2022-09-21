/**
 * @file  MC/RepeaterBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "DiodeBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepeaterBlock.
 *
 */
class RepeaterBlock : public DiodeBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATERBLOCK
public:
    class RepeaterBlock& operator=(class RepeaterBlock const &) = delete;
    RepeaterBlock(class RepeaterBlock const &) = delete;
    RepeaterBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RepeaterBlock();
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
     * @hash   2116240686
     * @vftbl  63
     * @symbol ?shouldConnectToRedstone@RepeaterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   716657635
     * @vftbl  78
     * @symbol ?setupRedstoneComponent@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -873508949
     * @vftbl  91
     * @symbol ?mayPlace@RepeaterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1423466185
     * @vftbl  99
     * @symbol ?neighborChanged@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   1838640451
     * @vftbl  102
     * @symbol ?getResourceItem@RepeaterBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -279793160
     * @vftbl  103
     * @symbol ?asItemInstance@RepeaterBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
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
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   2025262874
     * @vftbl  152
     * @symbol ?animateTick@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @hash   1348280282
     * @vftbl  165
     * @symbol ?onRemove@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
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
     * @hash   -2087982433
     * @vftbl  171
     * @symbol ?onPlace@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1019270011
     * @vftbl  174
     * @symbol ?tick@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   2036025738
     * @vftbl  179
     * @symbol ?use@RepeaterBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   1614731707
     * @vftbl  180
     * @symbol ?canSurvive@RepeaterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @hash   1807603693
     * @vftbl  193
     * @symbol ?isLocked@RepeaterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isLocked(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   449005636
     * @vftbl  199
     * @symbol ?isAlternateInput@RepeaterBlock@@MEBA_NAEBVBlock@@@Z
     */
    virtual bool isAlternateInput(class Block const &) const;
    /**
     * @hash   -1979881030
     * @vftbl  203
     * @symbol ?getTurnOnDelay@RepeaterBlock@@MEBAHAEBVBlock@@@Z
     */
    virtual int getTurnOnDelay(class Block const &) const;
    /**
     * @hash   -1905376290
     * @vftbl  204
     * @symbol ?getOnBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
     */
    virtual class Block const * getOnBlock(class Block const *) const;
    /**
     * @hash   1553591506
     * @vftbl  205
     * @symbol ?getOffBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
     */
    virtual class Block const * getOffBlock(class Block const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REPEATERBLOCK
    /**
     * @hash   -168299063
     * @symbol ?canBeSilkTouched@RepeaterBlock@@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   1580838152
     * @symbol ?isInteractiveBlock@RepeaterBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   2133057902
     * @symbol ??0RepeaterBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     */
    MCAPI RepeaterBlock(std::string const &, int, bool);
    /**
     * @hash   366673076
     * @symbol ?updateDelay@RepeaterBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI void updateDelay(class BlockSource &, class BlockPos const &, bool) const;
    /**
     * @hash   1576807450
     * @symbol ?DELAY_RENDER_OFFSETS@RepeaterBlock@@2QBMB
     */
    MCAPI static float const DELAY_RENDER_OFFSETS[];

//private:

private:
    /**
     * @hash   1679497497
     * @symbol ?DELAYS@RepeaterBlock@@0QBHB
     */
    MCAPI static int const DELAYS[];

};