#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScoreboardEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDEVENTLISTENER
public:
    ScoreboardEventListener& operator=(ScoreboardEventListener const&) = delete;
    ScoreboardEventListener(ScoreboardEventListener const&)            = delete;
    ScoreboardEventListener()                                          = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARDEVENTLISTENER
    /**
     * @symbol
     * ?onObjectiveAdded\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onObjectiveAdded(std::string const&);
    /**
     * @symbol
     * ?onObjectiveRemoved\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onObjectiveRemoved(std::string const&);
    /**
     * @symbol
     * ?onScoreChanged\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI enum class EventResult onScoreChanged(struct ScoreboardId const&, std::string const&, int);
    /**
     * @symbol ?onScoreboardIdentityRemoved\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBUScoreboardId\@\@\@Z
     */
    MCVAPI enum class EventResult onScoreboardIdentityRemoved(struct ScoreboardId const&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScoreboardEventListener();
#endif
};
