/**
 * @file  RandomSearchAndDigGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RandomSearchAndDigGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSEARCHANDDIGGOAL
public:
    class RandomSearchAndDigGoal& operator=(class RandomSearchAndDigGoal const &) = delete;
    RandomSearchAndDigGoal(class RandomSearchAndDigGoal const &) = delete;
    RandomSearchAndDigGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomSearchAndDigGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomSearchAndDigGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomSearchAndDigGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RandomSearchAndDigGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomSearchAndDigGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@RandomSearchAndDigGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0RandomSearchAndDigGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RandomSearchAndDigGoal(class Mob &);
    /**
     * @symbol ?_canUse\@RandomSearchAndDigGoal\@\@QEAA?AW4CanUseOutcome\@1\@XZ
     */
    MCAPI enum class RandomSearchAndDigGoal::CanUseOutcome _canUse();

//private:
    /**
     * @symbol ?_emitDiggingParticles\@RandomSearchAndDigGoal\@\@AEAAXXZ
     */
    MCAPI void _emitDiggingParticles();
    /**
     * @symbol ?_triggerEvent\@RandomSearchAndDigGoal\@\@AEBAXAEBVActorDefinitionTrigger\@\@\@Z
     */
    MCAPI void _triggerEvent(class ActorDefinitionTrigger const &) const;
    /**
     * @symbol ?_isValidTarget\@RandomSearchAndDigGoal\@\@CA_NAEBVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static bool _isValidTarget(class BlockSource const &, class BlockPos);

private:

};
