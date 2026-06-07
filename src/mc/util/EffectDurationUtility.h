#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct EffectDuration;
// clang-format on

namespace EffectDurationUtility {
// functions
// NOLINTBEGIN
MCNAPI void setFromSeconds(::std::string_view varName, float seconds, ::EffectDuration& effectDuration);

MCNAPI bool setFromString(::std::string_view varName, ::std::string_view inputString, ::EffectDuration& effectDuration);

MCNAPI void setFromTicks(::std::string_view varName, int ticks, ::EffectDuration& effectDuration);
// NOLINTEND

} // namespace EffectDurationUtility
