#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ExperienceRewardComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorTickedComponent;
struct ActorUniqueIDComponent;
struct DeathTickingComponent;
struct DimensionTypeComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct SoundEventPlayerComponent;
struct SoundEventRequestQueueComponent;
struct SpawnExperienceOrbRequestQueueComponent;
struct StateVectorComponent;
struct TickDeathNeededComponent;
// clang-format on

struct ServerMobTickDeathSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::MobFlagComponent>, ::Read<::AABBShapeComponent, ::ActorDefinitionIdentifierComponent, ::ActorUniqueIDComponent, ::DimensionTypeComponent, ::ExperienceRewardComponent, ::OffsetsComponent, ::SoundEventPlayerComponent, ::StateVectorComponent, ::PlayerComponent>, ::Write<::ActorDataFlagComponent, ::ActorDataDirtyFlagsComponent, ::ActorOwnerComponent, ::DeathTickingComponent>, ::AddRemove<>, ::GlobalRead<>, ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>, ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::MobFlagComponent>, ::Read<::AABBShapeComponent, ::ActorDefinitionIdentifierComponent, ::ActorUniqueIDComponent, ::DimensionTypeComponent, ::ExperienceRewardComponent, ::OffsetsComponent, ::SoundEventPlayerComponent, ::StateVectorComponent, ::PlayerComponent>, ::Write<::ActorDataFlagComponent, ::ActorDataDirtyFlagsComponent, ::ActorOwnerComponent, ::DeathTickingComponent>, ::AddRemove<>, ::GlobalRead<>, ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>, ::EntityFactoryT<>>& context) /*override*/;

    // vIndex: 0
    virtual ~ServerMobTickDeathSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tick(::StrictEntityContext& entity, ::AABBShapeComponent const& aabbShape, ::ActorDefinitionIdentifierComponent const& actorIdentifier, ::ActorUniqueIDComponent const& actorUniqueID, ::DimensionTypeComponent const& dimensionType, ::OffsetsComponent const& offsets, ::SoundEventPlayerComponent const& soundEventPlayer, ::StateVectorComponent const& stateVector, ::ActorDataFlagComponent& actorFlags, ::ActorDataDirtyFlagsComponent& actorDirtyFlags, ::ActorOwnerComponent& actorOwner, ::DeathTickingComponent& deathTicking, ::Optional<::ExperienceRewardComponent> experienceReward, ::Optional<::PlayerComponent> player, ::SpawnExperienceOrbRequestQueueComponent& experienceOrbRequestQueue, ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>& soundRequestQueueView);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::StrictExecutionContext<::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::MobFlagComponent>, ::Read<::AABBShapeComponent, ::ActorDefinitionIdentifierComponent, ::ActorUniqueIDComponent, ::DimensionTypeComponent, ::ExperienceRewardComponent, ::OffsetsComponent, ::SoundEventPlayerComponent, ::StateVectorComponent, ::PlayerComponent>, ::Write<::ActorDataFlagComponent, ::ActorDataDirtyFlagsComponent, ::ActorOwnerComponent, ::DeathTickingComponent>, ::AddRemove<>, ::GlobalRead<>, ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>, ::EntityFactoryT<>>& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
