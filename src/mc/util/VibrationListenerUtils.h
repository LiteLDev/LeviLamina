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
MCNAPI int getGameEventFrequency(::GameEvent const& gameEvent);

MCNAPI bool ignoreVibrationIfOnVibrationDampeningBlock(
    ::BlockSource&            region,
    ::GameEvent const&        gameEvent,
    ::GameEventContext const& gameEventContext
);

MCNAPI bool
ignoreVibrationIfSneaking(::BlockSource& gameEvent, ::GameEvent const& gameEventContext, ::GameEventContext const&);
// NOLINTEND

} // namespace VibrationListenerUtils
