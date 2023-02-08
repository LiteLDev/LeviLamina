/**
 * @file  SquidIdleGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SquidIdleGoal.
 *
 */
class SquidIdleGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDIDLEGOAL
public:
    class SquidIdleGoal& operator=(class SquidIdleGoal const &) = delete;
    SquidIdleGoal(class SquidIdleGoal const &) = delete;
    SquidIdleGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SquidIdleGoal();
    /**
     * @hash   -997884569
     * @vftbl  1
     * @symbol  ?canUse\@SquidIdleGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1204310133
     * @vftbl  2
     * @symbol  ?canContinueToUse\@SquidIdleGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   136736656
     * @vftbl  4
     * @symbol  ?start\@SquidIdleGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -979944144
     * @vftbl  5
     * @symbol  ?stop\@SquidIdleGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -742525813
     * @vftbl  6
     * @symbol  ?tick\@SquidIdleGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1963681367
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SquidIdleGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;

};