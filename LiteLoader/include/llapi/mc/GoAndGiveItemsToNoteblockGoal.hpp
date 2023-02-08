/**
 * @file  GoAndGiveItemsToNoteblockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GoAndGiveItemsToNoteblockGoal.
 *
 */
class GoAndGiveItemsToNoteblockGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOANDGIVEITEMSTONOTEBLOCKGOAL
public:
    class GoAndGiveItemsToNoteblockGoal& operator=(class GoAndGiveItemsToNoteblockGoal const &) = delete;
    GoAndGiveItemsToNoteblockGoal(class GoAndGiveItemsToNoteblockGoal const &) = delete;
    GoAndGiveItemsToNoteblockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GoAndGiveItemsToNoteblockGoal();
    /**
     * @hash   1912211597
     * @vftbl  1
     * @symbol  ?canUse\@GoAndGiveItemsToNoteblockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   68501451
     * @vftbl  2
     * @symbol  ?canContinueToUse\@GoAndGiveItemsToNoteblockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   699804134
     * @vftbl  4
     * @symbol  ?start\@GoAndGiveItemsToNoteblockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -119478618
     * @vftbl  5
     * @symbol  ?stop\@GoAndGiveItemsToNoteblockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   547416801
     * @vftbl  6
     * @symbol  ?tick\@GoAndGiveItemsToNoteblockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1345015763
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@GoAndGiveItemsToNoteblockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1403680794
     * @symbol  ??0GoAndGiveItemsToNoteblockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI GoAndGiveItemsToNoteblockGoal(class Mob &);

};