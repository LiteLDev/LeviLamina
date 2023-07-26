/**
 * @file  GetAttachPosSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace GetAttachPosSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?getAttachPos\@GetAttachPosSystem\@\@YA?AV?$optional\@VVec3\@\@\@std\@\@AEBVStrictEntityContext\@\@W4ActorLocation\@\@AEBVVec3\@\@AEBUAABBShapeComponent\@\@AEBUActorRotationComponent\@\@AEBUOffsetsComponent\@\@AEBUSynchedActorDataComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@\@M\@Z
     */
    MCAPI class std::optional<class Vec3> getAttachPos(class StrictEntityContext const &, enum class ActorLocation, class Vec3 const &, struct AABBShapeComponent const &, struct ActorRotationComponent const &, struct OffsetsComponent const &, struct SynchedActorDataComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const &, float);

};