/**
 * @file  GameEventMapping.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventMapping.
 *
 */
class GameEventMapping {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMAPPING
public:
    class GameEventMapping& operator=(class GameEventMapping const &) = delete;
    GameEventMapping(class GameEventMapping const &) = delete;
    GameEventMapping() = delete;
#endif

public:
    /**
     * @symbol  ?nameToEvent\@GameEventMapping\@\@SAAEBVGameEvent\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class GameEvent const & nameToEvent(std::string const &);
    /**
     * @symbol  ?typeToEvent\@GameEventMapping\@\@SAAEBVGameEvent\@\@W4GameEventType\@GameEventConfig\@\@\@Z
     */
    MCAPI static class GameEvent const & typeToEvent(enum class GameEventConfig::GameEventType);

//private:

private:
    /**
     * @symbol  ?mGameEventPairs\@GameEventMapping\@\@0V?$vector\@UGameEventPair\@\@V?$allocator\@UGameEventPair\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<struct GameEventPair> const mGameEventPairs;

};