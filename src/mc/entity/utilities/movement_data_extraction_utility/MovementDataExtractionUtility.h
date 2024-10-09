#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace MovementDataExtractionUtility { struct Extractors; }
namespace MovementDataExtractionUtility { struct MovementSnapshotComponent; }
// clang-format on

namespace MovementDataExtractionUtility {
// NOLINTBEGIN
MCAPI void extractPackedSnapshot(
    class EntityRegistry&            sourceContext,
    class EntityRegistry&            targetContext,
    class StrictEntityContext const& source,
    class StrictEntityContext const& target,
    bool                             removeWhenMissing
);

MCAPI struct MovementDataExtractionUtility::Extractors const& getOrCreateSnapshotExtractors();
// NOLINTEND

}; // namespace MovementDataExtractionUtility
