/**
 * @file  PlayerScoreboardEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerScoreboardEventListener.
 *
 */
class PlayerScoreboardEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSCOREBOARDEVENTLISTENER
public:
    class PlayerScoreboardEventListener& operator=(class PlayerScoreboardEventListener const &) = delete;
    PlayerScoreboardEventListener(class PlayerScoreboardEventListener const &) = delete;
    PlayerScoreboardEventListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayerScoreboardEventListener();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?onScoreChanged\@PlayerScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual enum class EventResult onScoreChanged(struct ScoreboardId const &, std::string const &, int);
    /**
     * @symbol  ?getPlayerSubscriptions\@PlayerScoreboardEventListener\@\@QEAAAEAVSubscribedObjectives\@\@AEBUScoreboardId\@\@AEBVPlayer\@\@\@Z
     */
    MCAPI class SubscribedObjectives & getPlayerSubscriptions(struct ScoreboardId const &, class Player const &);
    /**
     * @symbol  ?removePlayerSubscriptions\@PlayerScoreboardEventListener\@\@QEAAXAEBUScoreboardId\@\@\@Z
     */
    MCAPI void removePlayerSubscriptions(struct ScoreboardId const &);

};