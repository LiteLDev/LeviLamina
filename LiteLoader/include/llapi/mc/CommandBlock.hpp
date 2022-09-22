/**
 * @file  CommandBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandBlock.
 *
 */
class CommandBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCK
public:
    class CommandBlock& operator=(class CommandBlock const &) = delete;
    CommandBlock(class CommandBlock const &) = delete;
    CommandBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CommandBlock();
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
     * @hash   -1115420221
     * @vftbl  72
     * @symbol ?onRedstoneUpdate@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   -761538586
     * @vftbl  78
     * @symbol ?setupRedstoneComponent@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -930472604
     * @vftbl  99
     * @symbol ?neighborChanged@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -462092539
     * @vftbl  103
     * @symbol ?asItemInstance@CommandBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   49671121
     * @vftbl  107
     * @symbol ?getPlacementBlock@CommandBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
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
     * @hash   -909846332
     * @vftbl  128
     * @symbol ?getComparatorSignal@CommandBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -1960961438
     * @vftbl  147
     * @symbol ?getVariant@CommandBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   -416195460
     * @vftbl  150
     * @symbol ?getMappedFace@CommandBlock@@UEBAEEAEBVBlock@@@Z
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
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
     * @hash   -192871502
     * @vftbl  171
     * @symbol ?onPlace@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1157853176
     * @vftbl  174
     * @symbol ?tick@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   444328039
     * @vftbl  179
     * @symbol ?use@CommandBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @vftbl  193
     * @symbol __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  194
     * @symbol __unk_vfn_194
     */
    virtual void __unk_vfn_194();
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
     * @hash   726361522
     * @symbol ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCK
    /**
     * @hash   83461902
     * @symbol ?hasComparatorSignal@CommandBlock@@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @hash   37164907
     * @symbol ?isInteractiveBlock@CommandBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   1475508155
     * @symbol ??0CommandBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4CommandBlockMode@@@Z
     */
    MCAPI CommandBlock(std::string const &, int, enum CommandBlockMode);
    /**
     * @hash   1432348508
     * @symbol ?getMode@CommandBlock@@QEBA?AW4CommandBlockMode@@XZ
     */
    MCAPI enum CommandBlockMode getMode() const;
    /**
     * @hash   -1008378139
     * @symbol ?updateBlock@CommandBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@W4CommandBlockMode@@_N@Z
     */
    MCAPI void updateBlock(class BlockSource &, class BlockPos const &, enum CommandBlockMode, bool) const;

//private:
    /**
     * @hash   1453869094
     * @symbol ?_execute@CommandBlock@@AEBAXAEAVBlockSource@@AEAVCommandBlockActor@@AEBVBlockPos@@_N@Z
     */
    MCAPI void _execute(class BlockSource &, class CommandBlockActor &, class BlockPos const &, bool) const;
    /**
     * @hash   -876149374
     * @symbol ?_executeChain@CommandBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _executeChain(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1961223794
     * @symbol ?_executeChainBlock@CommandBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVCommandBlockActor@@_N@Z
     */
    MCAPI bool _executeChainBlock(class BlockSource &, class BlockPos const &, class CommandBlockActor &, bool) const;
    /**
     * @hash   -1524434130
     * @symbol ?_installCircuit@CommandBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &, bool) const;

private:
    /**
     * @hash   1392268844
     * @symbol ?mCBModeMap@CommandBlock@@0PAHA
     */
    MCAPI static int mCBModeMap[];

};