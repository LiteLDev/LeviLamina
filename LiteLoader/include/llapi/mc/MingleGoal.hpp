/**
 * @file  MingleGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MingleGoal.
 *
 */
class MingleGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINGLEGOAL
public:
    class MingleGoal& operator=(class MingleGoal const &) = delete;
    MingleGoal(class MingleGoal const &) = delete;
    MingleGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MingleGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MingleGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@MingleGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@MingleGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@MingleGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@MingleGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @symbol ??0MingleGoal\@\@QEAA\@AEAVMob\@\@MMMUActorDefinitionIdentifier\@\@M\@Z
     */
    MCAPI MingleGoal(class Mob &, float, float, float, struct ActorDefinitionIdentifier, float);

//private:
    /**
     * @symbol ?_findNewPartner\@MingleGoal\@\@AEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void _findNewPartner(struct ActorUniqueID);
    /**
     * @symbol ?_getMingleComponent\@MingleGoal\@\@AEBAAEAVMingleComponent\@\@XZ
     */
    MCAPI class MingleComponent & _getMingleComponent() const;
    /**
     * @symbol ?_isWithinInteractRange\@MingleGoal\@\@AEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _isWithinInteractRange(class Actor &) const;
    /**
     * @symbol ?_tryGetMingleComponent\@MingleGoal\@\@CAPEAVMingleComponent\@\@AEAVActor\@\@\@Z
     */
    MCAPI static class MingleComponent * _tryGetMingleComponent(class Actor &);

private:
    /**
     * @symbol ?FIND_PARTNER_INTERVAL_TICKS\@MingleGoal\@\@0HB
     */
    MCAPI static int const FIND_PARTNER_INTERVAL_TICKS;
    /**
     * @symbol ?SPEAK_INTERVAL_TICKS_MAX\@MingleGoal\@\@0HB
     */
    MCAPI static int const SPEAK_INTERVAL_TICKS_MAX;
    /**
     * @symbol ?SPEAK_INTERVAL_TICKS_MIN\@MingleGoal\@\@0HB
     */
    MCAPI static int const SPEAK_INTERVAL_TICKS_MIN;

};
