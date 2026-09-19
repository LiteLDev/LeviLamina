#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
struct GameEventContext;
// clang-format on

namespace VibrationListenerUtils {
// functions
// NOLINTBEGIN
MCNAPI int getGameEventFrequency(::GameEvent const& gameEvent);

MCNAPI bool ignoreVibrationIfSneaking(::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext);
// NOLINTEND

} // namespace VibrationListenerUtils
