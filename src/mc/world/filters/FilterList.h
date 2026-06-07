#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
class Experiments;
// clang-format on

namespace FilterList {
// functions
// NOLINTBEGIN
MCNAPI ::FilterTest::Definition const* findFilterDefinition(::std::string const& name);

MCNAPI void initialize(::Experiments const& experiments);

MCNAPI void shutdown();
// NOLINTEND

} // namespace FilterList
