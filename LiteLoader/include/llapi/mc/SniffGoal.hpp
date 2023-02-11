/**
 * @file  SniffGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~SniffGoal();
    /**
     * @hash   -2070552257
     * @vftbl  1
     * @symbol  ?canUse\@SniffGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1996349661
     * @vftbl  2
     * @symbol  ?canContinueToUse\@SniffGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -2052139064
     * @vftbl  4
     * @symbol  ?start\@SniffGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   292698104
     * @vftbl  5
     * @symbol  ?stop\@SniffGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1894543517
     * @vftbl  6
     * @symbol  ?tick\@SniffGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1440805615
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SniffGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -2112383380
     * @symbol  ??0SniffGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SniffGoal(class Mob &);

//private:
    /**
     * @hash   1335551612
     * @symbol  ?_fetchNearbySniffableActors\@SniffGoal\@\@AEBA?AV?$vector\@UDistanceSortedActor\@\@V?$allocator\@UDistanceSortedActor\@\@\@std\@\@\@std\@\@W4ActorType\@\@\@Z
     */
    MCAPI std::vector<struct DistanceSortedActor> _fetchNearbySniffableActors(enum class ActorType) const;
    /**
     * @hash   -981894474
     * @symbol  ?_fetchNearestSniffableActor\@SniffGoal\@\@AEBA?AV?$optional\@UDistanceSortedActor\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct DistanceSortedActor> _fetchNearestSniffableActor() const;

private:

};