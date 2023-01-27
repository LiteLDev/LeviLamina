/**
 * @file  DiodeBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../BlockLegacy.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~DiodeBlock();
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol  __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol  __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol  __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol  __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol  __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol  __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol  __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol  __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol  __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol  __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol  __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol  __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @hash   547428563
     * @vftbl  51
     * @symbol  ?isSignalSource\@DiodeBlock\@\@UEBA_NXZ
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  54
     * @symbol  __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -448740457
     * @vftbl  59
     * @symbol  ?getDirectSignal\@DiodeBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  60
     * @symbol  __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol  __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   827626851
     * @vftbl  73
     * @symbol  ?onRedstoneUpdate\@DiodeBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @symbol  __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @hash   86428670
     * @vftbl  92
     * @symbol  ?mayPlace\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @symbol  __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @hash   606570449
     * @vftbl  106
     * @symbol  ?getPlacementBlock\@DiodeBlock\@\@UEBAAEBVBlock\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  123
     * @symbol  __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @symbol  __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @symbol  __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @symbol  __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @hash   -1410966926
     * @vftbl  146
     * @symbol  ?getVariant\@DiodeBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @hash   -503893039
     * @vftbl  147
     * @symbol  ?canSpawnOn\@DiodeBlock\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool canSpawnOn(class Actor *) const;
    /**
     * @vftbl  156
     * @symbol  __unk_vfn_156
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  165
     * @symbol  __unk_vfn_165
     */
    virtual void __unk_vfn_165();
    /**
     * @vftbl  166
     * @symbol  __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @symbol  __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  170
     * @symbol  __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  174
     * @symbol  __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @hash   1256888558
     * @vftbl  178
     * @symbol  ?canSurvive\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  185
     * @symbol  __unk_vfn_185
     */
    virtual void __unk_vfn_185();
    /**
     * @hash   274114992
     * @vftbl  193
     * @symbol  ?getSignal\@DiodeBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual int getSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   -871812400
     * @vftbl  194
     * @symbol  ?isLocked\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isLocked(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   108821753
     * @vftbl  195
     * @symbol  ?isSameDiode\@DiodeBlock\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool isSameDiode(class Block const &) const;
    /**
     * @hash   -1252023826
     * @vftbl  196
     * @symbol  ?shouldPrioritize\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool shouldPrioritize(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1443491624
     * @vftbl  197
     * @symbol  ?isOn\@DiodeBlock\@\@MEBA_NXZ
     */
    virtual bool isOn() const;
    /**
     * @hash   1909682676
     * @vftbl  198
     * @symbol  ?shouldTurnOn\@DiodeBlock\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool shouldTurnOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1860055036
     * @vftbl  199
     * @symbol  ?getInputSignal\@DiodeBlock\@\@MEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int getInputSignal(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1929838033
     * @vftbl  200
     * @symbol  ?isAlternateInput\@DiodeBlock\@\@MEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool isAlternateInput(class Block const &) const;
    /**
     * @hash   305985444
     * @vftbl  201
     * @symbol  ?getAlternateSignal\@DiodeBlock\@\@MEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int getAlternateSignal(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1372376071
     * @vftbl  202
     * @symbol  ?getOutputSignal\@DiodeBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int getOutputSignal(class Block const &) const;
    /**
     * @hash   -1481828847
     * @vftbl  203
     * @symbol  ?getTurnOffDelay\@DiodeBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int getTurnOffDelay(class Block const &) const;
    /**
     * @hash   757956690
     * @vftbl  204
     * @symbol  ?getTurnOnDelay\@RepeaterBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int getTurnOnDelay(class Block const &) const = 0;
    /**
     * @hash   832630566
     * @vftbl  205
     * @symbol  ?getOnBlock\@RepeaterBlock\@\@MEBAPEBVBlock\@\@PEBV2\@\@Z
     */
    virtual class Block const * getOnBlock(class Block const *) const = 0;
    /**
     * @hash   -3199798
     * @vftbl  206
     * @symbol  ?getOffBlock\@RepeaterBlock\@\@MEBAPEBVBlock\@\@PEBV2\@\@Z
     */
    virtual class Block const * getOffBlock(class Block const *) const = 0;
    /**
     * @hash   1622420091
     * @symbol  ??0DiodeBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_N\@Z
     */
    MCAPI DiodeBlock(std::string const &, int, bool);
    /**
     * @hash   197088215
     * @symbol  ?isDiode\@DiodeBlock\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isDiode(class Block const &);

//protected:
    /**
     * @hash   663036795
     * @symbol  ?getAlternateSignalAt\@DiodeBlock\@\@IEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI int getAlternateSignalAt(class BlockSource &, class BlockPos const &, int) const;

protected:

};