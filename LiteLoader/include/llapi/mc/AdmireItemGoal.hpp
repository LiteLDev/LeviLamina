/**
 * @file  MC/AdmireItemGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AdmireItemGoal.
 *
 */
class AdmireItemGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADMIREITEMGOAL
public:
    class AdmireItemGoal& operator=(class AdmireItemGoal const &) = delete;
    AdmireItemGoal(class AdmireItemGoal const &) = delete;
    AdmireItemGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AdmireItemGoal();
    /**
     * @hash   -90892424
     * @vftbl  1
     * @symbol ?canUse@AdmireItemGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -33174586
     * @vftbl  2
     * @symbol ?canContinueToUse@AdmireItemGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1201908065
     * @vftbl  4
     * @symbol ?start@AdmireItemGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1837566207
     * @vftbl  5
     * @symbol ?stop@AdmireItemGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -2041756228
     * @vftbl  6
     * @symbol ?tick@AdmireItemGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -965436808
     * @vftbl  7
     * @symbol ?appendDebugInfo@AdmireItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1492290200
     * @symbol ??0AdmireItemGoal@@QEAA@AEAVMob@@W4LevelSoundEvent@@UFloatRange@@AEBVActorDefinitionTrigger@@3@Z
     */
    MCAPI AdmireItemGoal(class Mob &, enum LevelSoundEvent, struct FloatRange, class ActorDefinitionTrigger const &, class ActorDefinitionTrigger const &);

//private:
    /**
     * @hash   596018546
     * @symbol ?_tryPlaceItemInInventory@AdmireItemGoal@@AEAAXAEAVContainerComponent@@AEBVShareableComponent@@@Z
     */
    MCAPI void _tryPlaceItemInInventory(class ContainerComponent &, class ShareableComponent const &);

private:

};