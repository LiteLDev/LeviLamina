/**
 * @file  MC/SniffGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SniffGoal.
 *
 */
class SniffGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNIFFGOAL
public:
    class SniffGoal& operator=(class SniffGoal const &) = delete;
    SniffGoal(class SniffGoal const &) = delete;
    SniffGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SniffGoal();
    /**
     * @hash   -1414612097
     * @vftbl  1
     * @symbol ?canUse@SniffGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1642662099
     * @vftbl  2
     * @symbol ?canContinueToUse@SniffGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1396198904
     * @vftbl  4
     * @symbol ?start@SniffGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   948622888
     * @vftbl  5
     * @symbol ?stop@SniffGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1986430493
     * @vftbl  6
     * @symbol ?tick@SniffGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -785157599
     * @vftbl  7
     * @symbol ?appendDebugInfo@SniffGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1456735364
     * @symbol ??0SniffGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI SniffGoal(class Mob &);

//private:
    /**
     * @hash   1991199628
     * @symbol ?_fetchNearbySniffableActors@SniffGoal@@AEBA?AV?$vector@UDistanceSortedActor@@V?$allocator@UDistanceSortedActor@@@std@@@std@@W4ActorType@@@Z
     */
    MCAPI std::vector<struct DistanceSortedActor> _fetchNearbySniffableActors(enum ActorType) const;
    /**
     * @hash   -326246458
     * @symbol ?_fetchNearestSniffableActor@SniffGoal@@AEBA?AV?$optional@UDistanceSortedActor@@@std@@XZ
     */
    MCAPI class std::optional<struct DistanceSortedActor> _fetchNearestSniffableActor() const;

private:

};