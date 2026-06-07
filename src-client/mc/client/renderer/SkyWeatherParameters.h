#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AtmosphericWeatherConfig {

struct SkyWeatherParameters {};

} // namespace AtmosphericWeatherConfig

// free functions
// NOLINTBEGIN
MCNAPI bool operator==(
    ::AtmosphericWeatherConfig::SkyWeatherParameters const&,
    ::AtmosphericWeatherConfig::SkyWeatherParameters const&
);
// NOLINTEND
