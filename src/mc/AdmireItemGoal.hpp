/**
 * @file  AdmireItemGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~AdmireItemGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@AdmireItemGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@AdmireItemGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@AdmireItemGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@AdmireItemGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@AdmireItemGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@AdmireItemGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0AdmireItemGoal\@\@QEAA\@AEAVMob\@\@W4LevelSoundEvent\@\@UFloatRange\@\@AEBVActorDefinitionTrigger\@\@3\@Z
     */
    MCAPI AdmireItemGoal(class Mob &, enum class LevelSoundEvent, struct FloatRange, class ActorDefinitionTrigger const &, class ActorDefinitionTrigger const &);

//private:
    /**
     * @symbol  ?_tryPlaceItemInInventory\@AdmireItemGoal\@\@AEAAXAEAVContainerComponent\@\@AEBVShareableComponent\@\@\@Z
     */
    MCAPI void _tryPlaceItemInInventory(class ContainerComponent &, class ShareableComponent const &);

private:

};