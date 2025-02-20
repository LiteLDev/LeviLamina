#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

namespace VibrationListenerUtils {
// functions
// NOLINTBEGIN
MCAPI int getGameEventFrequency(::GameEvent const& gameEvent);

MCAPI bool ignoreVibrationIfOnVibrationDampeningBlock(
    ::BlockSource&            region,
    ::GameEvent const&        gameEvent,
    ::GameEventContext const& gameEventContext
);

MCAPI bool
ignoreVibrationIfSneaking(::BlockSource& gameEvent, ::GameEvent const& gameEventContext, ::GameEventContext const&);
// NOLINTEND

} // namespace VibrationListenerUtils
