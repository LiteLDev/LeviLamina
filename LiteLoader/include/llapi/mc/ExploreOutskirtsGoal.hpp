/**
 * @file  MC/ExploreOutskirtsGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExploreOutskirtsGoal.
 *
 */
class ExploreOutskirtsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLOREOUTSKIRTSGOAL
public:
    class ExploreOutskirtsGoal& operator=(class ExploreOutskirtsGoal const &) = delete;
    ExploreOutskirtsGoal(class ExploreOutskirtsGoal const &) = delete;
    ExploreOutskirtsGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ExploreOutskirtsGoal();
    /**
     * @hash   -863523406
     * @vftbl  1
     * @symbol ?canUse@ExploreOutskirtsGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1764393520
     * @vftbl  2
     * @symbol ?canContinueToUse@ExploreOutskirtsGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1167263787
     * @vftbl  4
     * @symbol ?start@ExploreOutskirtsGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -303823925
     * @vftbl  5
     * @symbol ?stop@ExploreOutskirtsGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1016741782
     * @vftbl  6
     * @symbol ?tick@ExploreOutskirtsGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1130601758
     * @vftbl  7
     * @symbol ?appendDebugInfo@ExploreOutskirtsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -2147332929
     * @symbol ??0ExploreOutskirtsGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI ExploreOutskirtsGoal(class Mob &);

};