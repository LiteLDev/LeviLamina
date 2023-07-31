#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0, typename T1> class OptionalComponentWrapper;
// clang-format on

namespace PlayJumpSoundSystemImpl {
// NOLINTBEGIN
/**
 * @symbol
 * ?doPlayJumpSoundSystem\@PlayJumpSoundSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUActorDefinitionIdentifierComponent\@\@AEBUGetAttachPosRequestComponent\@\@AEBUSoundEventPlayerComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUStateVectorComponent\@\@AEBUAABBShapeComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@USoundEventRequestQueueComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
 */
MCAPI void
doPlayJumpSoundSystem(class StrictEntityContext const&, struct ActorDefinitionIdentifierComponent const&, struct GetAttachPosRequestComponent const&, struct SoundEventPlayerComponent const&, struct SynchedActorDataComponent const&, struct StateVectorComponent const&, struct AABBShapeComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SoundEventRequestQueueComponent> const&, class IConstBlockSource const&);
/**
 * @symbol
 * ?doPlayPowerJumpSoundSystem\@PlayJumpSoundSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUActorDefinitionIdentifierComponent\@\@AEBUGetAttachPosRequestComponent\@\@AEBUSoundEventPlayerComponent\@\@AEBUSynchedActorDataComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@USoundEventRequestQueueComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
 */
MCAPI void
doPlayPowerJumpSoundSystem(class StrictEntityContext const&, struct ActorDefinitionIdentifierComponent const&, struct GetAttachPosRequestComponent const&, struct SoundEventPlayerComponent const&, struct SynchedActorDataComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SoundEventRequestQueueComponent> const&, class IConstBlockSource const&);
/**
 * @symbol
 * ?sendSoundRequest\@PlayJumpSoundSystemImpl\@\@YAXAEBVIConstBlockSource\@\@AEBUSynchedActorDataComponent\@\@AEBUActorDefinitionIdentifierComponent\@\@V?$optional\@VVec3\@\@\@std\@\@V?$OptionalComponentWrapper\@VStrictEntityContext\@\@USoundEventRequestQueueComponent\@\@\@\@H\@Z
 */
MCAPI void sendSoundRequest(
    class IConstBlockSource const&,
    struct SynchedActorDataComponent const&,
    struct ActorDefinitionIdentifierComponent const&,
    std::optional<class Vec3>,
    class OptionalComponentWrapper<class StrictEntityContext, struct SoundEventRequestQueueComponent>,
    int
);
// NOLINTEND

}; // namespace PlayJumpSoundSystemImpl
