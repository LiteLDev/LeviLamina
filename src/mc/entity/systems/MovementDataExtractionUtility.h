#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace MovementDataExtractionUtility { struct Extractors; }
// clang-format on

namespace MovementDataExtractionUtility {
// NOLINTBEGIN
// symbol: ?_buildSnapshotExtractors@MovementDataExtractionUtility@@YA?AUExtractors@1@XZ
MCAPI struct MovementDataExtractionUtility::Extractors _buildSnapshotExtractors();

// symbol:
// ?extractExternalData@MovementDataExtractionUtility@@YAXAEAUExternalDataSnapshotComponent@@AEAVEntityRegistry@@@Z
MCAPI void extractExternalData(struct ExternalDataSnapshotComponent&, class EntityRegistry&);

// symbol: ?getOrCreateSnapshotExtractors@MovementDataExtractionUtility@@YAAEBUExtractors@1@XZ
MCAPI struct MovementDataExtractionUtility::Extractors const& getOrCreateSnapshotExtractors();
// NOLINTEND

}; // namespace MovementDataExtractionUtility
