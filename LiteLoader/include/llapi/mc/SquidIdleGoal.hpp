/**
 * @file  SquidIdleGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~SquidIdleGoal();
    /**
     * @hash   -322401513
     * @vftbl  1
     * @symbol ?canUse@SquidIdleGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   984694725
     * @vftbl  2
     * @symbol ?canContinueToUse@SquidIdleGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   811866064
     * @vftbl  4
     * @symbol ?start@SquidIdleGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1071831120
     * @vftbl  5
     * @symbol ?stop@SquidIdleGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -67411781
     * @vftbl  6
     * @symbol ?tick@SquidIdleGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1288136807
     * @vftbl  7
     * @symbol ?appendDebugInfo@SquidIdleGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;

};