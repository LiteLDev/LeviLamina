#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ScoreboardEventListener.h"

class PlayerScoreboardEventListener : public ::ScoreboardEventListener {

public:
    // prevent constructor by default
    PlayerScoreboardEventListener& operator=(PlayerScoreboardEventListener const&) = delete;
    PlayerScoreboardEventListener(PlayerScoreboardEventListener const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol
     * ?onScoreChanged\@PlayerScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual enum class EventResult onScoreChanged(struct ScoreboardId const&, std::string const&, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERSCOREBOARDEVENTLISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerScoreboardEventListener();
#endif
    /**
     * @symbol ??0PlayerScoreboardEventListener\@\@QEAA\@XZ
     */
    MCAPI PlayerScoreboardEventListener();
    /**
     * @symbol
     * ?getPlayerSubscriptions\@PlayerScoreboardEventListener\@\@QEAAAEAVSubscribedObjectives\@\@AEBUScoreboardId\@\@AEBVPlayer\@\@\@Z
     */
    MCAPI class SubscribedObjectives& getPlayerSubscriptions(struct ScoreboardId const&, class Player const&);
    /**
     * @symbol ?removePlayerSubscriptions\@PlayerScoreboardEventListener\@\@QEAAXAEBUScoreboardId\@\@\@Z
     */
    MCAPI void removePlayerSubscriptions(struct ScoreboardId const&);
    // NOLINTEND
};
