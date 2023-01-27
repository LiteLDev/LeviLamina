/**
 * @file  DragonFlamingGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonFlamingGoal.
 *
 */
class DragonFlamingGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONFLAMINGGOAL
public:
    class DragonFlamingGoal& operator=(class DragonFlamingGoal const &) = delete;
    DragonFlamingGoal(class DragonFlamingGoal const &) = delete;
    DragonFlamingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DragonFlamingGoal();
    /**
     * @hash   453331344
     * @vftbl  1
     * @symbol  ?canUse\@DragonFlamingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   283324558
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DragonFlamingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1554917911
     * @vftbl  4
     * @symbol  ?start\@DragonFlamingGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1651585577
     * @vftbl  5
     * @symbol  ?stop\@DragonFlamingGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1528803516
     * @vftbl  6
     * @symbol  ?tick\@DragonFlamingGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1269085712
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DragonFlamingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1080200275
     * @symbol  ??0DragonFlamingGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DragonFlamingGoal(class Mob &);

};