/**
 * @file  SniffGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @vftbl  1
     * @symbol  ?canUse\@SniffGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
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
     * @vftbl  4
     * @symbol  ?start\@SniffGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@SniffGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@SniffGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SniffGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0SniffGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SniffGoal(class Mob &);

//private:
    /**
     * @symbol  ?_fetchNearbySniffableActors\@SniffGoal\@\@AEBA?AV?$vector\@UDistanceSortedActor\@\@V?$allocator\@UDistanceSortedActor\@\@\@std\@\@\@std\@\@W4ActorType\@\@\@Z
     */
    MCAPI std::vector<struct DistanceSortedActor> _fetchNearbySniffableActors(enum class ActorType) const;
    /**
     * @symbol  ?_fetchNearestSniffableActor\@SniffGoal\@\@AEBA?AV?$optional\@UDistanceSortedActor\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct DistanceSortedActor> _fetchNearestSniffableActor() const;

private:

};