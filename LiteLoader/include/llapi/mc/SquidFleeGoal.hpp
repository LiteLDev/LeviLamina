/**
 * @file  SquidFleeGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SquidFleeGoal.
 *
 */
class SquidFleeGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDFLEEGOAL
public:
    class SquidFleeGoal& operator=(class SquidFleeGoal const &) = delete;
    SquidFleeGoal(class SquidFleeGoal const &) = delete;
    SquidFleeGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SquidFleeGoal();
    /**
     * @hash   -535745259
     * @vftbl  1
     * @symbol ?canUse@SquidFleeGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   771458611
     * @vftbl  2
     * @symbol ?canContinueToUse@SquidFleeGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1975004670
     * @vftbl  4
     * @symbol ?start@SquidFleeGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -770834018
     * @vftbl  5
     * @symbol ?stop@SquidFleeGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   232862649
     * @vftbl  6
     * @symbol ?tick@SquidFleeGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   229579499
     * @vftbl  7
     * @symbol ?appendDebugInfo@SquidFleeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;

};