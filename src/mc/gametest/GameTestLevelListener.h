#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class GameTestTicker; }
// clang-format on

class GameTestLevelListener {
public:
    // prevent constructor by default
    GameTestLevelListener& operator=(GameTestLevelListener const&);
    GameTestLevelListener(GameTestLevelListener const&);
    GameTestLevelListener();

public:
    // NOLINTBEGIN
    MCVAPI ::EventResult onEvent(struct LevelNotificationEvent const& event);

    MCVAPI void onLevelTickEnd();

    MCAPI explicit GameTestLevelListener(class gametest::GameTestTicker& testTicker);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForLevelEventListener();

    MCAPI static void** vftableForScriptDeferredEventListener();

    MCAPI void* ctor$(class gametest::GameTestTicker& testTicker);

    MCAPI ::EventResult onEvent$(struct LevelNotificationEvent const& event);

    MCAPI void onLevelTickEnd$();

    // NOLINTEND
};
