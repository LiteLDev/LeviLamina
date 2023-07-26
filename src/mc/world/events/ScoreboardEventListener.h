#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScoreboardEventListener {

public:
    // prevent constructor by default
    ScoreboardEventListener& operator=(ScoreboardEventListener const&) = delete;
    ScoreboardEventListener(ScoreboardEventListener const&)            = delete;
    ScoreboardEventListener()                                          = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARDEVENTLISTENER
    /**
     * @symbol
     * ?onObjectiveAdded\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onObjectiveAdded(std::string const&); // NOLINT
    /**
     * @symbol
     * ?onObjectiveRemoved\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onObjectiveRemoved(std::string const&); // NOLINT
    /**
     * @symbol
     * ?onScoreChanged\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI enum class EventResult onScoreChanged(struct ScoreboardId const&, std::string const&, int); // NOLINT
    /**
     * @symbol ?onScoreboardIdentityRemoved\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBUScoreboardId\@\@\@Z
     */
    MCVAPI enum class EventResult onScoreboardIdentityRemoved(struct ScoreboardId const&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScoreboardEventListener(); // NOLINT
#endif
};
