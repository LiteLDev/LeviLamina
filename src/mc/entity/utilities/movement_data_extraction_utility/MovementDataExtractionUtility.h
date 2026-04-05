#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class StrictEntityContext;
struct AttributesComponent;
struct ExternalDataSnapshotComponent;
namespace MovementDataExtractionUtility { struct Extractors; }
// clang-format on

namespace MovementDataExtractionUtility {
// functions
// NOLINTBEGIN
MCNAPI ::MovementDataExtractionUtility::Extractors _buildInitialRewindExtractors();

MCNAPI ::AttributesComponent copyComponent(::AttributesComponent const& attributes);

MCNAPI void extractExternalData(::ExternalDataSnapshotComponent& component, ::EntityRegistry& context);

MCNAPI void extractPackedSnapshot(
    ::EntityRegistry&            sourceContext,
    ::EntityRegistry&            targetContext,
    ::StrictEntityContext const& source,
    ::StrictEntityContext const& target,
    bool                         removeWhenMissing
);

MCNAPI void tryStoreImmutableDataSnapshotOnEntity(::EntityContext& liveEntity);

MCNAPI void unpackImmutableSnapshot(
    ::EntityRegistry&            sourceContext,
    ::EntityRegistry&            targetContext,
    ::StrictEntityContext const& sourceSnapshot,
    ::StrictEntityContext const& target,
    bool
);

MCNAPI void unpackSnapshot(
    ::EntityRegistry&            sourceContext,
    ::EntityRegistry&            targetContext,
    ::StrictEntityContext const& sourceSnapshot,
    ::StrictEntityContext const& target,
    bool
);
// NOLINTEND

} // namespace MovementDataExtractionUtility
