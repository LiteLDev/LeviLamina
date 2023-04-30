/**
 * @file  GameTestLevelListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "gametest.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestLevelListener.
 *
 */
class GameTestLevelListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTLEVELLISTENER
public:
    class GameTestLevelListener& operator=(class GameTestLevelListener const &) = delete;
    GameTestLevelListener(class GameTestLevelListener const &) = delete;
    GameTestLevelListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETESTLEVELLISTENER
    /**
     * @symbol ?onEvent\@GameTestLevelListener\@\@UEAA?AW4EventResult\@\@AEBULevelNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct LevelNotificationEvent const &);
    /**
     * @symbol ?onLevelTickEnd\@GameTestLevelListener\@\@UEAAXXZ
     */
    MCVAPI void onLevelTickEnd();
#endif
    /**
     * @symbol ??0GameTestLevelListener\@\@QEAA\@AEAVGameTestTicker\@gametest\@\@\@Z
     */
    MCAPI GameTestLevelListener(class gametest::GameTestTicker &);

};
