#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

namespace ItemComponentHelpers {
// NOLINTBEGIN
MCAPI std::string const getHelpTextWithTogglesAndVersion(
    std::string const&                   description,
    std::vector<::AllExperiments> const& requiredToggles,
    std::optional<class SemVersion>      releasedMinFormatVersion
);
// NOLINTEND

}; // namespace ItemComponentHelpers
