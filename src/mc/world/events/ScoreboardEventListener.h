#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScoreboardEventListener {

public:
    // prevent constructor by default
    ScoreboardEventListener& operator=(ScoreboardEventListener const&) = delete;
    ScoreboardEventListener(ScoreboardEventListener const&)            = delete;
    ScoreboardEventListener()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onObjectiveAdded\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual enum class EventResult onObjectiveAdded(std::string const&);
    /**
     * @vftbl 2
     * @symbol
     * ?onObjectiveRemoved\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual enum class EventResult onObjectiveRemoved(std::string const&);
    /**
     * @vftbl 3
     * @symbol ?onScoreboardIdentityRemoved\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBUScoreboardId\@\@\@Z
     */
    virtual enum class EventResult onScoreboardIdentityRemoved(struct ScoreboardId const&);
    /**
     * @vftbl 4
     * @symbol
     * ?onScoreChanged\@ScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual enum class EventResult onScoreChanged(struct ScoreboardId const&, std::string const&, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARDEVENTLISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScoreboardEventListener();
#endif
    // NOLINTEND
};
