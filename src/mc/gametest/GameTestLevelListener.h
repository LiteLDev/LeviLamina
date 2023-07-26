#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class GameTestTicker; }
// clang-format on

class GameTestLevelListener {

public:
    // prevent constructor by default
    GameTestLevelListener& operator=(GameTestLevelListener const&) = delete;
    GameTestLevelListener(GameTestLevelListener const&)            = delete;
    GameTestLevelListener()                                        = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETESTLEVELLISTENER
    /**
     * @symbol ?onEvent\@GameTestLevelListener\@\@UEAA?AW4EventResult\@\@AEBULevelNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct LevelNotificationEvent const&); // NOLINT
    /**
     * @symbol ?onLevelTickEnd\@GameTestLevelListener\@\@UEAAXXZ
     */
    MCVAPI void onLevelTickEnd(); // NOLINT
#endif
    /**
     * @symbol ??0GameTestLevelListener\@\@QEAA\@AEAVGameTestTicker\@gametest\@\@\@Z
     */
    MCAPI GameTestLevelListener(class gametest::GameTestTicker&); // NOLINT
};
