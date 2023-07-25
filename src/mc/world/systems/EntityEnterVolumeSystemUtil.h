#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EntityEnterVolumeSystemUtil {
/**
 * @symbol
 * ?_addActor\@EntityEnterVolumeSystemUtil\@\@YAXAEBVActor\@\@AEAVEntitiesEnteredVolumeComponent\@\@AEAVEntitiesInsideVolumeComponent\@\@\@Z
 */
MCAPI void _addActor(class Actor const&, class EntitiesEnteredVolumeComponent&, class EntitiesInsideVolumeComponent&);
/**
 * @symbol
 * ?_boundsContainsActor\@EntityEnterVolumeSystemUtil\@\@YA_NAEBVActor\@\@AEBVVolumeBoundsComponent\@\@AEBVDimension\@\@\@Z
 */
MCAPI bool _boundsContainsActor(class Actor const&, class VolumeBoundsComponent const&, class Dimension const&);
/**
 * @symbol
 * ?_removeEmptyComponents\@EntityEnterVolumeSystemUtil\@\@YAXAEAVEntityContext\@\@AEAVEntitiesEnteredVolumeComponent\@\@AEAVEntitiesInsideVolumeComponent\@\@\@Z
 */
MCAPI void
_removeEmptyComponents(class EntityContext&, class EntitiesEnteredVolumeComponent&, class EntitiesInsideVolumeComponent&);

}; // namespace EntityEnterVolumeSystemUtil
