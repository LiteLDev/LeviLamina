#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
// clang-format on

namespace VibrationListenerUtils {
// functions
// NOLINTBEGIN
MCAPI int getGameEventFrequency(::GameEvent const& gameEvent);

MCAPI ::GameEvent const& getResonateEventByFrequency(int frequency);
// NOLINTEND

} // namespace VibrationListenerUtils
