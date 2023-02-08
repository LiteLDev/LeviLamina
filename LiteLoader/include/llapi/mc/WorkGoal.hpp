/**
 * @file  WorkGoal.hpp
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
 * @brief MC class WorkGoal.
 *
 */
class WorkGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKGOAL
public:
    class WorkGoal& operator=(class WorkGoal const &) = delete;
    WorkGoal(class WorkGoal const &) = delete;
    WorkGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WorkGoal();
    /**
     * @hash   1033821708
     * @vftbl  1
     * @symbol  ?canUse\@WorkGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -879485462
     * @vftbl  2
     * @symbol  ?canContinueToUse\@WorkGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -237952667
     * @vftbl  4
     * @symbol  ?start\@WorkGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1895345477
     * @vftbl  5
     * @symbol  ?stop\@WorkGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -10499632
     * @vftbl  6
     * @symbol  ?tick\@WorkGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1087479948
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@WorkGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   -234739361
     * @vftbl  18
     * @symbol  ?useWorkstation\@WorkGoal\@\@UEAAXXZ
     */
    virtual void useWorkstation();
    /**
     * @hash   79944361
     * @symbol  ??0WorkGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI WorkGoal(class Mob &);
    /**
     * @hash   -184102879
     * @symbol  ?playPOISoundEvent\@WorkGoal\@\@QEBAXXZ
     */
    MCAPI void playPOISoundEvent() const;

//private:
    /**
     * @hash   -1863900225
     * @symbol  ?_isInsideOrIsNotRaining\@WorkGoal\@\@AEAA_NXZ
     */
    MCAPI bool _isInsideOrIsNotRaining();

private:
    /**
     * @hash   1934465980
     * @symbol  ?RAIN_CHECK_MAX_COOLDOWN\@WorkGoal\@\@0HB
     */
    MCAPI static int const RAIN_CHECK_MAX_COOLDOWN;
    /**
     * @hash   -2095659014
     * @symbol  ?WORK_TIMESTAMP_UPDATE_INVERVAL\@WorkGoal\@\@0HB
     */
    MCAPI static int const WORK_TIMESTAMP_UPDATE_INVERVAL;

};