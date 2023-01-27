/**
 * @file  DigGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DigGoal.
 *
 */
class DigGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGOAL
public:
    class DigGoal& operator=(class DigGoal const &) = delete;
    DigGoal(class DigGoal const &) = delete;
    DigGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DigGoal();
    /**
     * @hash   -1201878533
     * @vftbl  1
     * @symbol  ?canUse\@DigGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -537100919
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DigGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   398679524
     * @vftbl  4
     * @symbol  ?start\@DigGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1971362788
     * @vftbl  5
     * @symbol  ?stop\@DigGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   183139727
     * @vftbl  6
     * @symbol  ?tick\@DigGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1148796011
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DigGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   288662952
     * @symbol  ??0DigGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DigGoal(class Mob &);

//private:
    /**
     * @symbol  ?_canUse\@DigGoal\@\@AEBA?AW4CanUseResult\@1\@XZ
     */
    MCAPI enum class DigGoal::CanUseResult _canUse() const;

private:

};