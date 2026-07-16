#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
// clang-format on

namespace VibrationListenerConstants {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::string const& IN_FLIGHT_VIBRATION_INFO_TAG();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const& IN_FLIGHT_VIBRATION_INFO_TAG();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const& IN_FLIGHT_VIBRATION_TICKS_TAG();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const& IN_FLIGHT_VIBRATION_TICKS_TAG();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const& LATEST_RECEIVED_VIBRATION_TAG();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const& LATEST_RECEIVED_VIBRATION_TAG();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::array<::GameEvent const*, 15> const& RESONATE_EVENTS();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::array<::GameEvent const*, 15> const& RESONATE_EVENTS();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const& VIBRATION_SELECTOR_TAG();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const& VIBRATION_SELECTOR_TAG();
#endif
// NOLINTEND

} // namespace VibrationListenerConstants
