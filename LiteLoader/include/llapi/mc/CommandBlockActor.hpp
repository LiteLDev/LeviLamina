/**
 * @file  MC/CommandBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandBlockActor.
 *
 */
class CommandBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKACTOR
public:
    class CommandBlockActor& operator=(class CommandBlockActor const &) = delete;
    CommandBlockActor(class CommandBlockActor const &) = delete;
    CommandBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CommandBlockActor();
    /**
     * @hash   -1825938870
     * @vftbl  1
     * @symbol ?load@CommandBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -241395575
     * @vftbl  2
     * @symbol ?save@CommandBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -237103788
     * @vftbl  4
     * @symbol ?saveBlockData@CommandBlockActor@@UEBAXAEAVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void saveBlockData(class CompoundTag &, class BlockSource &) const;
    /**
     * @hash   648542423
     * @vftbl  5
     * @symbol ?loadBlockData@CommandBlockActor@@UEAAXAEBVCompoundTag@@AEAVBlockSource@@AEAVDataLoadHelper@@@Z
     */
    virtual void loadBlockData(class CompoundTag const &, class BlockSource &, class DataLoadHelper &);
    /**
     * @hash   2043684990
     * @vftbl  6
     * @symbol ?onCustomTagLoadDone@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onCustomTagLoadDone(class BlockSource &);
    /**
     * @hash   -1385326165
     * @vftbl  8
     * @symbol ?onChanged@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @hash   1075399128
     * @vftbl  11
     * @symbol ?onPlace@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onPlace(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -1341153449
     * @vftbl  21
     * @symbol ?getCustomName@CommandBlockActor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getCustomName() const;
    /**
     * @hash   -471427225
     * @vftbl  22
     * @symbol ?getFilteredCustomName@CommandBlockActor@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUIProfanityContext@@@Z
     */
    virtual std::string const & getFilteredCustomName(class UIProfanityContext const &);
    /**
     * @hash   2057471258
     * @vftbl  24
     * @symbol ?setCustomName@CommandBlockActor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void setCustomName(std::string const &);
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
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
     * @hash   1464885788
     * @vftbl  35
     * @symbol ?_getUpdatePacket@CommandBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -320002410
     * @vftbl  36
     * @symbol ?_onUpdatePacket@CommandBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -55171017
     * @vftbl  37
     * @symbol ?_playerCanUpdate@CommandBlockActor@@MEBA_NAEBVPlayer@@@Z
     */
    virtual bool _playerCanUpdate(class Player const &) const;
    /**
     * @hash   -350182661
     * @symbol ??0CommandBlockActor@@QEAA@AEBVBlockPos@@W4CommandBlockMode@@@Z
     */
    MCAPI CommandBlockActor(class BlockPos const &, enum CommandBlockMode);
    /**
     * @hash   1933211136
     * @symbol ?getBaseCommandBlock@CommandBlockActor@@QEAAAEAVBaseCommandBlock@@XZ
     */
    MCAPI class BaseCommandBlock & getBaseCommandBlock();
    /**
     * @hash   699769990
     * @symbol ?getCommand@CommandBlockActor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getCommand() const;
    /**
     * @hash   -293971076
     * @symbol ?getCommandBlock@CommandBlockActor@@QEBAPEBVCommandBlock@@AEAVBlockSource@@@Z
     */
    MCAPI class CommandBlock const * getCommandBlock(class BlockSource &) const;
    /**
     * @hash   -363432019
     * @symbol ?getConditionalMode@CommandBlockActor@@QEBA_NAEAVBlockSource@@@Z
     */
    MCAPI bool getConditionalMode(class BlockSource &) const;
    /**
     * @hash   2142251770
     * @symbol ?getDelayOnActivation@CommandBlockActor@@QEBAHXZ
     */
    MCAPI int getDelayOnActivation() const;
    /**
     * @hash   -678386879
     * @symbol ?getMode@CommandBlockActor@@QEBA?AW4CommandBlockMode@@AEAVBlockSource@@@Z
     */
    MCAPI enum CommandBlockMode getMode(class BlockSource &) const;
    /**
     * @hash   616707210
     * @symbol ?getPowered@CommandBlockActor@@QEBA_NXZ
     */
    MCAPI bool getPowered() const;
    /**
     * @hash   1490329868
     * @symbol ?getSuccessCount@CommandBlockActor@@QEBAHXZ
     */
    MCAPI int getSuccessCount() const;
    /**
     * @hash   1216223190
     * @symbol ?getTickDelay@CommandBlockActor@@QEBAHXZ
     */
    MCAPI int getTickDelay() const;
    /**
     * @hash   1027051416
     * @symbol ?isAutomatic@CommandBlockActor@@QEBA_NXZ
     */
    MCAPI bool isAutomatic() const;
    /**
     * @hash   -1400809873
     * @symbol ?markConditionMet@CommandBlockActor@@QEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool markConditionMet(class BlockSource &);
    /**
     * @hash   -1796436968
     * @symbol ?markForSaving@CommandBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void markForSaving(class BlockSource &);
    /**
     * @hash   784037632
     * @symbol ?markForSaving@CommandBlockActor@@QEAAXAEAVBlockSource@@H_N@Z
     */
    MCAPI void markForSaving(class BlockSource &, int, bool);
    /**
     * @hash   963579263
     * @symbol ?performCommand@CommandBlockActor@@QEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool performCommand(class BlockSource &);
    /**
     * @hash   1432894162
     * @symbol ?setPowered@CommandBlockActor@@QEAAX_N@Z
     */
    MCAPI void setPowered(bool);
    /**
     * @hash   -1305498742
     * @symbol ?setSuccessCount@CommandBlockActor@@QEAAXH@Z
     */
    MCAPI void setSuccessCount(int);
    /**
     * @hash   -1711145504
     * @symbol ?updateBlock@CommandBlockActor@@QEAAXAEAVBlockSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4CommandBlockMode@@_N33H3@Z
     */
    MCAPI void updateBlock(class BlockSource &, std::string const &, std::string const &, enum CommandBlockMode, bool, bool, bool, int, bool);
    /**
     * @hash   -284382280
     * @symbol ?wasConditionMet@CommandBlockActor@@QEAA_NXZ
     */
    MCAPI bool wasConditionMet();

//private:
    /**
     * @hash   1613947286
     * @symbol ?_setAutomatic@CommandBlockActor@@AEAAXAEAVBlockSource@@_NW4CommandBlockMode@@@Z
     */
    MCAPI void _setAutomatic(class BlockSource &, bool, enum CommandBlockMode);

private:

};