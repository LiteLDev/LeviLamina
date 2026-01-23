#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class StrictEntityContext;
struct AttributesComponent;
struct ExternalDataSnapshotComponent;
namespace MovementDataExtractionUtility { struct Extractors; }
// clang-format on

namespace MovementDataExtractionUtility {
// functions
// NOLINTBEGIN
MCNAPI_C ::MovementDataExtractionUtility::Extractors _buildInitialRewindExtractors();

MCNAPI_C ::AttributesComponent copyComponent(::AttributesComponent const& attributes);

MCNAPI void extractExternalData(::ExternalDataSnapshotComponent& component, ::EntityRegistry& context);

MCNAPI_C void extractPackedSnapshot(
    ::EntityRegistry&            sourceContext,
    ::EntityRegistry&            targetContext,
    ::StrictEntityContext const& source,
    ::StrictEntityContext const& target,
    bool                         removeWhenMissing
);

MCNAPI_C void unpackImmutableSnapshot(
    ::EntityRegistry&            sourceContext,
    ::EntityRegistry&            targetContext,
    ::StrictEntityContext const& sourceSnapshot,
    ::StrictEntityContext const& target,
    bool
);

MCNAPI_C void unpackSnapshot(
    ::EntityRegistry&            sourceContext,
    ::EntityRegistry&            targetContext,
    ::StrictEntityContext const& sourceSnapshot,
    ::StrictEntityContext const& target,
    bool
);
// NOLINTEND

} // namespace MovementDataExtractionUtility
