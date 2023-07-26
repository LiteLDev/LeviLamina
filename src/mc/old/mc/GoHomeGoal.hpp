/**
 * @file  GoHomeGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GoHomeGoal.
 *
 */
class GoHomeGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOHOMEGOAL
public:
    class GoHomeGoal& operator=(class GoHomeGoal const &) = delete;
    GoHomeGoal(class GoHomeGoal const &) = delete;
    GoHomeGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GoHomeGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@GoHomeGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@GoHomeGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@GoHomeGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@GoHomeGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@GoHomeGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@GoHomeGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0GoHomeGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI GoHomeGoal(class Mob &);

//private:
    /**
     * @symbol  ?_getHomeDimension\@GoHomeGoal\@\@AEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> _getHomeDimension() const;
    /**
     * @symbol  ?_getHomePos\@GoHomeGoal\@\@AEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos _getHomePos() const;
    /**
     * @symbol  ?_hasRequiredComponents\@GoHomeGoal\@\@AEBA_NXZ
     */
    MCAPI bool _hasRequiredComponents() const;
    /**
     * @symbol  ?_triggerOnFailedEvents\@GoHomeGoal\@\@AEAAXXZ
     */
    MCAPI void _triggerOnFailedEvents();

private:

};