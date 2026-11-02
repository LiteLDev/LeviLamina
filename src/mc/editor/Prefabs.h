#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/prefabs/PrefabInstanceErrorState.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
struct DimensionType;
namespace Editor::Prefabs { class PrefabDBServerPlayerServiceProvider; }
namespace Editor::Prefabs { struct PrefabInstanceBoundsValidation; }
namespace Editor::Prefabs { struct PrefabInstanceBoundsValidationOptions; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs {
// functions
// NOLINTBEGIN
MCNAPI void bindType(::cereal::ReflectionCtx& ctx);

MCNAPI ::std::string toString(::Editor::Prefabs::PrefabInstanceErrorState state);

MCNAPI ::Editor::Prefabs::PrefabInstanceBoundsValidation validatePrefabInstanceBounds(
    ::Editor::Prefabs::PrefabDBServerPlayerServiceProvider&         prefabService,
    ::BoundingBox const&                                            candidateBounds,
    ::DimensionType const&                                          candidateDimension,
    ::std::optional<::mce::UUID> const&                             excludedInstanceId,
    ::Editor::Prefabs::PrefabInstanceBoundsValidationOptions const& options
);
// NOLINTEND

} // namespace Editor::Prefabs
