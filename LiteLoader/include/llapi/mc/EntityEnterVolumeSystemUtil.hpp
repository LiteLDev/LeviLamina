/**
 * @file  EntityEnterVolumeSystemUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace EntityEnterVolumeSystemUtil.
 *
 */
namespace EntityEnterVolumeSystemUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   629921613
     * @symbol  ?_addActor\@EntityEnterVolumeSystemUtil\@\@YAXAEBVActor\@\@AEAVEntitiesEnteredVolumeComponent\@\@AEAVEntitiesInsideVolumeComponent\@\@\@Z
     */
    MCAPI void _addActor(class Actor const &, class EntitiesEnteredVolumeComponent &, class EntitiesInsideVolumeComponent &);
    /**
     * @hash   -344373234
     * @symbol  ?_boundsContainsActor\@EntityEnterVolumeSystemUtil\@\@YA_NAEBVActor\@\@AEBVVolumeBoundsComponent\@\@AEBVDimension\@\@\@Z
     */
    MCAPI bool _boundsContainsActor(class Actor const &, class VolumeBoundsComponent const &, class Dimension const &);
    /**
     * @hash   -1512213507
     * @symbol  ?_removeEmptyComponents\@EntityEnterVolumeSystemUtil\@\@YAXAEAVEntityContext\@\@AEAVEntitiesEnteredVolumeComponent\@\@AEAVEntitiesInsideVolumeComponent\@\@\@Z
     */
    MCAPI void _removeEmptyComponents(class EntityContext &, class EntitiesEnteredVolumeComponent &, class EntitiesInsideVolumeComponent &);

};