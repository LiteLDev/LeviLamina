#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Poi { struct PoiInstance; }
// clang-format on

namespace Poi::Occupancy {
// functions
// NOLINTBEGIN
MCNAPI bool alwaysTrue(::Poi::PoiInstance const&);

MCNAPI bool hasSpace(::Poi::PoiInstance const& instance);

MCNAPI bool isOccupied(::Poi::PoiInstance const& instance);
// NOLINTEND

} // namespace Poi::Occupancy
