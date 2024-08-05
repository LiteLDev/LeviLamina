#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EntityEnterVolumeSystemUtil {
// NOLINTBEGIN
MCAPI void
_addActor(class Actor const& actor, class EntitiesEnteredVolumeComponent&, class EntitiesInsideVolumeComponent&);

MCAPI bool _boundsContainsActor(
    class Actor const&                 actor,
    class VolumeBoundsComponent const& bounds,
    class Dimension const&             dimension
);

MCAPI void
_removeEmptyComponents(class EntityContext& entity, class EntitiesEnteredVolumeComponent&, class EntitiesInsideVolumeComponent&);
// NOLINTEND

}; // namespace EntityEnterVolumeSystemUtil
