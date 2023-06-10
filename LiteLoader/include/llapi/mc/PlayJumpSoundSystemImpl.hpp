/**
 * @file  PlayJumpSoundSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace PlayJumpSoundSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doPlayJumpSoundSystem\@PlayJumpSoundSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUActorDefinitionIdentifierComponent\@\@AEBUGetAttachPosRequestComponent\@\@AEBUSoundEventPlayerComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUStateVectorComponent\@\@AEBUAABBShapeComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@USoundEventRequestQueueComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void doPlayJumpSoundSystem(class StrictEntityContext const &, struct ActorDefinitionIdentifierComponent const &, struct GetAttachPosRequestComponent const &, struct SoundEventPlayerComponent const &, struct SynchedActorDataComponent const &, struct StateVectorComponent const &, struct AABBShapeComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SoundEventRequestQueueComponent> const &, class IConstBlockSource const &);
    /**
     * @symbol ?doPlayPowerJumpSoundSystem\@PlayJumpSoundSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUActorDefinitionIdentifierComponent\@\@AEBUGetAttachPosRequestComponent\@\@AEBUSoundEventPlayerComponent\@\@AEBUSynchedActorDataComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@USoundEventRequestQueueComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void doPlayPowerJumpSoundSystem(class StrictEntityContext const &, struct ActorDefinitionIdentifierComponent const &, struct GetAttachPosRequestComponent const &, struct SoundEventPlayerComponent const &, struct SynchedActorDataComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SoundEventRequestQueueComponent> const &, class IConstBlockSource const &);
    /**
     * @symbol ?sendSoundRequest\@PlayJumpSoundSystemImpl\@\@YAXAEBVIConstBlockSource\@\@AEBUSynchedActorDataComponent\@\@AEBUActorDefinitionIdentifierComponent\@\@V?$optional\@VVec3\@\@\@std\@\@V?$OptionalComponentWrapper\@VStrictEntityContext\@\@USoundEventRequestQueueComponent\@\@\@\@H\@Z
     */
    MCAPI void sendSoundRequest(class IConstBlockSource const &, struct SynchedActorDataComponent const &, struct ActorDefinitionIdentifierComponent const &, class std::optional<class Vec3>, class OptionalComponentWrapper<class StrictEntityContext, struct SoundEventRequestQueueComponent>, int);

};