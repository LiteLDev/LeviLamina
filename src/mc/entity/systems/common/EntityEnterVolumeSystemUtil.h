#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EntityEnterVolumeSystemUtil {
// NOLINTBEGIN
// symbol:
// ?_addActor@EntityEnterVolumeSystemUtil@@YAXAEBVActor@@AEAVEntitiesEnteredVolumeComponent@@AEAVEntitiesInsideVolumeComponent@@@Z
MCAPI void
_addActor(class Actor const& actor, class EntitiesEnteredVolumeComponent&, class EntitiesInsideVolumeComponent&);

// symbol:
// ?_boundsContainsActor@EntityEnterVolumeSystemUtil@@YA_NAEBVActor@@AEBVVolumeBoundsComponent@@AEBVDimension@@@Z
MCAPI bool _boundsContainsActor(
    class Actor const&                 actor,
    class VolumeBoundsComponent const& bounds,
    class Dimension const&             dimension
);

// symbol:
// ?_removeEmptyComponents@EntityEnterVolumeSystemUtil@@YAXAEAVEntityContext@@AEAVEntitiesEnteredVolumeComponent@@AEAVEntitiesInsideVolumeComponent@@@Z
MCAPI void
_removeEmptyComponents(class EntityContext& entity, class EntitiesEnteredVolumeComponent&, class EntitiesInsideVolumeComponent&);
// NOLINTEND

}; // namespace EntityEnterVolumeSystemUtil
