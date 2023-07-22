/**
 * @file  GoAndGiveItemsToOwnerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GoAndGiveItemsToOwnerGoal.
 *
 */
class GoAndGiveItemsToOwnerGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOANDGIVEITEMSTOOWNERGOAL
public:
    class GoAndGiveItemsToOwnerGoal& operator=(class GoAndGiveItemsToOwnerGoal const &) = delete;
    GoAndGiveItemsToOwnerGoal(class GoAndGiveItemsToOwnerGoal const &) = delete;
    GoAndGiveItemsToOwnerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GoAndGiveItemsToOwnerGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@GoAndGiveItemsToOwnerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@GoAndGiveItemsToOwnerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@GoAndGiveItemsToOwnerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@GoAndGiveItemsToOwnerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@GoAndGiveItemsToOwnerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@GoAndGiveItemsToOwnerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0GoAndGiveItemsToOwnerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI GoAndGiveItemsToOwnerGoal(class Mob &);

//private:
    /**
     * @symbol  ?_attemptToGiveItem\@GoAndGiveItemsToOwnerGoal\@\@AEAA_NXZ
     */
    MCAPI bool _attemptToGiveItem();

private:

};