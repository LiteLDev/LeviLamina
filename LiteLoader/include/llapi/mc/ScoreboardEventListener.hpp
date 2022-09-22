/**
 * @file  ScoreboardEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScoreboardEventListener.
 *
 */
class ScoreboardEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDEVENTLISTENER
public:
    class ScoreboardEventListener& operator=(class ScoreboardEventListener const &) = delete;
    ScoreboardEventListener(class ScoreboardEventListener const &) = delete;
    ScoreboardEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARDEVENTLISTENER
    /**
     * @hash   1642259376
     * @symbol ?onObjectiveAdded@ScoreboardEventListener@@UEAA?AW4EventResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI enum EventResult onObjectiveAdded(std::string const &);
    /**
     * @hash   2064057808
     * @symbol ?onObjectiveRemoved@ScoreboardEventListener@@UEAA?AW4EventResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI enum EventResult onObjectiveRemoved(std::string const &);
    /**
     * @hash   835716939
     * @symbol ?onScoreChanged@ScoreboardEventListener@@UEAA?AW4EventResult@@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCVAPI enum EventResult onScoreChanged(struct ScoreboardId const &, std::string const &, int);
    /**
     * @hash   1426696314
     * @symbol ?onScoreboardIdentityRemoved@ScoreboardEventListener@@UEAA?AW4EventResult@@AEBUScoreboardId@@@Z
     */
    MCVAPI enum EventResult onScoreboardIdentityRemoved(struct ScoreboardId const &);
#endif

};