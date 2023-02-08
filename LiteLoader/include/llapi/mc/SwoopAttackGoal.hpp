/**
 * @file  SwoopAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwoopAttackGoal.
 *
 */
class SwoopAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWOOPATTACKGOAL
public:
    class SwoopAttackGoal& operator=(class SwoopAttackGoal const &) = delete;
    SwoopAttackGoal(class SwoopAttackGoal const &) = delete;
    SwoopAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SwoopAttackGoal();
    /**
     * @hash   -555923575
     * @vftbl  1
     * @symbol  ?canUse\@SwoopAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   184892183
     * @vftbl  2
     * @symbol  ?canContinueToUse\@SwoopAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -568119070
     * @vftbl  4
     * @symbol  ?start\@SwoopAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -82464718
     * @vftbl  5
     * @symbol  ?stop\@SwoopAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   159856109
     * @vftbl  6
     * @symbol  ?tick\@SwoopAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   337319863
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SwoopAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1736987494
     * @symbol  ??0SwoopAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SwoopAttackGoal(class Mob &);

};