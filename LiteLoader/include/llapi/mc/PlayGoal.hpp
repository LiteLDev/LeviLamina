/**
 * @file  MC/PlayGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayGoal.
 *
 */
class PlayGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYGOAL
public:
    class PlayGoal& operator=(class PlayGoal const &) = delete;
    PlayGoal(class PlayGoal const &) = delete;
    PlayGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayGoal();
    /**
     * @hash   -1789398679
     * @vftbl  1
     * @symbol ?canUse@PlayGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   592369079
     * @vftbl  2
     * @symbol ?canContinueToUse@PlayGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -983172398
     * @vftbl  4
     * @symbol ?start@PlayGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1150048866
     * @vftbl  5
     * @symbol ?stop@PlayGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -755980755
     * @vftbl  6
     * @symbol ?tick@PlayGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   315257095
     * @vftbl  7
     * @symbol ?appendDebugInfo@PlayGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   2053545795
     * @symbol ??0PlayGoal@@QEAA@AEAVVillager@@M@Z
     */
    MCAPI PlayGoal(class Villager &, float);

};