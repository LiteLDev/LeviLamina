/**
 * @file  DiodeBlock.hpp
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
     * @vftbl 28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
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
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
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
     * @vftbl 50
     * @symbol ?isSignalSource\@DiodeBlock\@\@UEBA_NXZ
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl 58
     * @symbol ?getDirectSignal\@DiodeBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl 59
     * @symbol __unk_vfn_59
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl 60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl 72
     * @symbol ?onRedstoneUpdate\@DiodeBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl 74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @vftbl 81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl 91
     * @symbol ?mayPlace\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 105
     * @symbol ?getPlacementBlock\@DiodeBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const & getPlacementBlock(class Actor const &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
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
     * @vftbl 145
     * @symbol ?getVariant\@DiodeBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl 146
     * @symbol ?canSpawnOn\@DiodeBlock\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool canSpawnOn(class Actor *) const;
    /**
     * @vftbl 155
     * @symbol __unk_vfn_155
     */
    virtual void __unk_vfn_155();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 165
     * @symbol __unk_vfn_165
     */
    virtual void __unk_vfn_165();
    /**
     * @vftbl 166
     * @symbol __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl 169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl 173
     * @symbol __unk_vfn_173
     */
    virtual void __unk_vfn_173();
    /**
     * @vftbl 177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl 178
     * @symbol ?canSurvive\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 186
     * @symbol __unk_vfn_186
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl 194
     * @symbol ?getSignal\@DiodeBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual int getSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl 195
     * @symbol ?isLocked\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isLocked(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 196
     * @symbol ?isSameDiode\@DiodeBlock\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool isSameDiode(class Block const &) const;
    /**
     * @vftbl 197
     * @symbol ?shouldPrioritize\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool shouldPrioritize(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 198
     * @symbol ?isOn\@DiodeBlock\@\@MEBA_NXZ
     */
    virtual bool isOn() const;
    /**
     * @vftbl 199
     * @symbol ?shouldTurnOn\@DiodeBlock\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool shouldTurnOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 200
     * @symbol ?getInputSignal\@DiodeBlock\@\@MEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int getInputSignal(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 201
     * @symbol ?isAlternateInput\@DiodeBlock\@\@MEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool isAlternateInput(class Block const &) const;
    /**
     * @vftbl 202
     * @symbol ?getAlternateSignal\@DiodeBlock\@\@MEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int getAlternateSignal(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 203
     * @symbol ?getOutputSignal\@DiodeBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int getOutputSignal(class Block const &) const;
    /**
     * @vftbl 204
     * @symbol ?getTurnOffDelay\@DiodeBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int getTurnOffDelay(class Block const &) const;
    /**
     * @vftbl 205
     * @symbol ?getTurnOnDelay\@RepeaterBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int getTurnOnDelay(class Block const &) const = 0;
    /**
     * @vftbl 206
     * @symbol ?getOnBlock\@RepeaterBlock\@\@MEBAPEBVBlock\@\@PEBV2\@\@Z
     */
    virtual class Block const * getOnBlock(class Block const *) const = 0;
    /**
     * @vftbl 207
     * @symbol ?getOffBlock\@RepeaterBlock\@\@MEBAPEBVBlock\@\@PEBV2\@\@Z
     */
    virtual class Block const * getOffBlock(class Block const *) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIODEBLOCK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DiodeBlock();
#endif
    /**
     * @symbol ??0DiodeBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_N\@Z
     */
    MCAPI DiodeBlock(std::string const &, int, bool);
    /**
     * @symbol ?isDiode\@DiodeBlock\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isDiode(class Block const &);

//protected:
    /**
     * @symbol ?getAlternateSignalAt\@DiodeBlock\@\@IEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI int getAlternateSignalAt(class BlockSource &, class BlockPos const &, int) const;

protected:

};
