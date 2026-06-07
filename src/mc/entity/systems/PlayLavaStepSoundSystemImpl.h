#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class Block;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct DimensionTypeComponent;
struct SoundEventRequestQueueComponent;
// clang-format on

namespace PlayLavaStepSoundSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void sendStepSoundRequest(
    ::StrictEntityContext const&                entity,
    ::ActorDataFlagComponent const&             actorFlags,
    ::ActorDefinitionIdentifierComponent const& actorIdentifier,
    ::ActorUniqueIDComponent const&             actorUniqueID,
    ::DimensionTypeComponent const&             dimensionType,
    ::SharedTypes::Legacy::ActorLocation const& location,
    ::SoundEventRequestQueueComponent&          soundEventRequestQueueComponent,
    ::SharedTypes::Legacy::LevelSoundEvent      soundEvent,
    ::Block const&                              block
);
// NOLINTEND

} // namespace PlayLavaStepSoundSystemImpl
