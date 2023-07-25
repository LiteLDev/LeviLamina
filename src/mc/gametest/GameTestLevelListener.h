#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class GameTestTicker; }
// clang-format on

class GameTestLevelListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTLEVELLISTENER
public:
    GameTestLevelListener& operator=(GameTestLevelListener const&) = delete;
    GameTestLevelListener(GameTestLevelListener const&)            = delete;
    GameTestLevelListener()                                        = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETESTLEVELLISTENER
    /**
     * @symbol ?onEvent\@GameTestLevelListener\@\@UEAA?AW4EventResult\@\@AEBULevelNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct LevelNotificationEvent const&);
    /**
     * @symbol ?onLevelTickEnd\@GameTestLevelListener\@\@UEAAXXZ
     */
    MCVAPI void onLevelTickEnd();
#endif
    /**
     * @symbol ??0GameTestLevelListener\@\@QEAA\@AEAVGameTestTicker\@gametest\@\@\@Z
     */
    MCAPI GameTestLevelListener(class gametest::GameTestTicker&);
};
