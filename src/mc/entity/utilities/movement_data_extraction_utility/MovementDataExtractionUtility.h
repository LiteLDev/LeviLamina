#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class StrictEntityContext;
namespace MovementDataExtractionUtility { struct Extractors; }
// clang-format on

namespace MovementDataExtractionUtility {
// functions
// NOLINTBEGIN
MCAPI void extractPackedSnapshot(
    ::EntityRegistry&            sourceContext,
    ::EntityRegistry&            targetContext,
    ::StrictEntityContext const& source,
    ::StrictEntityContext const& target,
    bool                         removeWhenMissing
);

MCAPI ::MovementDataExtractionUtility::Extractors const& getOrCreateSnapshotExtractors();
// NOLINTEND

} // namespace MovementDataExtractionUtility
