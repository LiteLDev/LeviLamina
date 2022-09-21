/**
 * @file  MC/DiodeBlock.hpp
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
 * @brief MC class DiodeBlock.
 *
 */
class DiodeBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIODEBLOCK
public:
    class DiodeBlock& operator=(class DiodeBlock const &) = delete;
    DiodeBlock(class DiodeBlock const &) = delete;
    DiodeBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DiodeBlock();
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
     * @hash   447530691
     * @vftbl  51
     * @symbol ?isSignalSource@DiodeBlock@@UEBA_NXZ
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -1144223097
     * @vftbl  59
     * @symbol ?getDirectSignal@DiodeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
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
     * @hash   148807203
     * @vftbl  72
     * @symbol ?onRedstoneUpdate@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
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
     * @hash   -636689234
     * @vftbl  91
     * @symbol ?mayPlace@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1298034780
     * @vftbl  99
     * @symbol ?neighborChanged@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -72556719
     * @vftbl  107
     * @symbol ?getPlacementBlock@DiodeBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
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
     * @hash   -2090155598
     * @vftbl  147
     * @symbol ?getVariant@DiodeBlock@@UEBAHAEBVBlock@@@Z
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
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   533770654
     * @vftbl  180
     * @symbol ?canSurvive@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @hash   -405042928
     * @vftbl  192
     * @symbol ?getSignal@DiodeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    virtual int getSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   -972432944
     * @vftbl  193
     * @symbol ?isLocked@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isLocked(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -570382295
     * @vftbl  194
     * @symbol ?isSameDiode@DiodeBlock@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool isSameDiode(class Block const &) const;
    /**
     * @hash   -1930889602
     * @vftbl  195
     * @symbol ?shouldPrioritize@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool shouldPrioritize(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -2122695672
     * @vftbl  196
     * @symbol ?isOn@DiodeBlock@@MEBA_NXZ
     */
    virtual bool isOn() const;
    /**
     * @hash   1230786148
     * @vftbl  197
     * @symbol ?shouldTurnOn@DiodeBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool shouldTurnOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1755815844
     * @vftbl  198
     * @symbol ?getInputSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual int getInputSignal(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1250649361
     * @vftbl  199
     * @symbol ?isAlternateInput@DiodeBlock@@MEBA_NAEBVBlock@@@Z
     */
    virtual bool isAlternateInput(class Block const &) const;
    /**
     * @hash   -373064844
     * @vftbl  200
     * @symbol ?getAlternateSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual int getAlternateSignal(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -444772743
     * @vftbl  201
     * @symbol ?getOutputSignal@DiodeBlock@@MEBAHAEBVBlock@@@Z
     */
    virtual int getOutputSignal(class Block const &) const;
    /**
     * @hash   2133965153
     * @vftbl  202
     * @symbol ?getTurnOffDelay@DiodeBlock@@MEBAHAEBVBlock@@@Z
     */
    virtual int getTurnOffDelay(class Block const &) const;
    /**
     * @hash   757956690
     * @vftbl  203
     * @symbol ?getTurnOnDelay@RepeaterBlock@@MEBAHAEBVBlock@@@Z
     */
    virtual int getTurnOnDelay(class Block const &) const = 0;
    /**
     * @hash   832630566
     * @vftbl  204
     * @symbol ?getOnBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
     */
    virtual class Block const * getOnBlock(class Block const *) const = 0;
    /**
     * @hash   -3199798
     * @vftbl  205
     * @symbol ?getOffBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
     */
    virtual class Block const * getOffBlock(class Block const *) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIODEBLOCK
    /**
     * @hash   -967084640
     * @symbol ?canSpawnOn@DiodeBlock@@UEBA_NXZ
     */
    MCVAPI bool canSpawnOn() const;
#endif
    /**
     * @hash   943369803
     * @symbol ??0DiodeBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     */
    MCAPI DiodeBlock(std::string const &, int, bool);
    /**
     * @hash   -482100457
     * @symbol ?isDiode@DiodeBlock@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isDiode(class Block const &);

//protected:
    /**
     * @hash   -16013493
     * @symbol ?getAlternateSignalAt@DiodeBlock@@IEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI int getAlternateSignalAt(class BlockSource &, class BlockPos const &, int) const;

protected:

};