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
#ifdef LL_PLAT_C
MCNAPI ::MovementDataExtractionUtility::Extractors _buildInitialRewindExtractors();

MCNAPI ::AttributesComponent copyComponent(::AttributesComponent const& attributes);
#endif

MCNAPI void extractExternalData(::ExternalDataSnapshotComponent& component, ::EntityRegistry& context);

#ifdef LL_PLAT_C
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
#endif
// NOLINTEND

} // namespace MovementDataExtractionUtility
