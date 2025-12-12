#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct DimensionTypeComponent;
struct SoundEventRequestQueueComponent;
// clang-format on

namespace SoundEventRequestQueueUtility {
// functions
// NOLINTBEGIN
MCNAPI bool tryQueueFromSystem(
    ::SoundEventRequestQueueComponent&          requestQueue,
    ::StrictEntityContext const&                entity,
    ::ActorDataFlagComponent const&             actorFlags,
    ::ActorDefinitionIdentifierComponent const& actorIdentifier,
    ::ActorUniqueIDComponent const&             actorUniqueID,
    ::DimensionTypeComponent const&             dimensionType,
    ::SharedTypes::Legacy::LevelSoundEvent      soundEvent,
    ::SharedTypes::Legacy::ActorLocation        location,
    int                                         soundData
);

MCNAPI bool tryQueueSynchronizedFromSystem(
    ::SoundEventRequestQueueComponent&          requestQueue,
    ::StrictEntityContext const&                entity,
    ::ActorDataFlagComponent const&             actorFlags,
    ::ActorDefinitionIdentifierComponent const& actorIdentifier,
    ::ActorUniqueIDComponent const&             actorUniqueID,
    ::DimensionTypeComponent const&             dimensionType,
    ::SharedTypes::Legacy::LevelSoundEvent      soundEvent,
    ::SharedTypes::Legacy::ActorLocation        location,
    int                                         soundData,
    bool                                        isGlobal
);
// NOLINTEND

} // namespace SoundEventRequestQueueUtility
