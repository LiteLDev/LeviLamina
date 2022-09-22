/**
 * @file  TemptGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TemptGoal.
 *
 */
class TemptGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEMPTGOAL
public:
    class TemptGoal& operator=(class TemptGoal const &) = delete;
    TemptGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TemptGoal();
    /**
     * @hash   -1326946611
     * @vftbl  1
     * @symbol ?canUse@TemptGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1555365637
     * @vftbl  2
     * @symbol ?canContinueToUse@TemptGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -937899994
     * @vftbl  4
     * @symbol ?start@TemptGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1407044806
     * @vftbl  5
     * @symbol ?stop@TemptGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   81295905
     * @vftbl  6
     * @symbol ?tick@TemptGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   536697875
     * @vftbl  7
     * @symbol ?appendDebugInfo@TemptGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0TemptGoal@@QEAA@AEBV0@@Z
     */
    MCAPI TemptGoal(class TemptGoal const &);
    /**
     * @hash   -613371462
     * @symbol ??0TemptGoal@@QEAA@AEAVMob@@MAEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@W4LevelSoundEvent@@UFloatRange@@_NM44@Z
     */
    MCAPI TemptGoal(class Mob &, float, std::vector<class ItemDescriptor> const &, enum LevelSoundEvent, struct FloatRange, bool, float, bool, bool);

};