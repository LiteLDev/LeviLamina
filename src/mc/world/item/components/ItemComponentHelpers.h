#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace ItemComponentHelpers {
// functions
// NOLINTBEGIN
MCAPI ::std::string const getHelpTextWithTogglesAndVersion(
    ::std::string const&                   description,
    ::std::vector<::AllExperiments> const& requiredToggles,
    ::std::optional<::SemVersion>          releasedMinFormatVersion
);
// NOLINTEND

} // namespace ItemComponentHelpers
