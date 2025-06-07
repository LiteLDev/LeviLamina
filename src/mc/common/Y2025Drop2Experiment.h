#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
// clang-format on

namespace VanillaGameVersions::Y2025Drop2Experiment {
// functions
// NOLINTBEGIN
MCNAPI bool enabled(::Experiments const& experiments);

MCNAPI ::BaseGameVersion requiredVersion(::Experiments const& experiments);
// NOLINTEND

} // namespace VanillaGameVersions::Y2025Drop2Experiment
