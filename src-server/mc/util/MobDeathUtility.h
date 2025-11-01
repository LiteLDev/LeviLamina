#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/OptionalComponentWrapper.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EnderDragonDeathWrapper;
class ExperienceRewardComponent;
class MobDeathWrapper;
class StrictEntityContext;
class WitherBossDeathWrapper;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct BossComponent;
struct DeathTickingComponent;
struct DimensionTypeComponent;
struct IsDeadFlagComponent;
struct OffsetsComponent;
struct OverlayAlphaComponent;
struct ParticleEventRequestQueueComponent;
struct PlayerComponent;
struct RandomComponent;
struct ShieldFlickerComponent;
struct SoundEventRequestQueueComponent;
struct SpawnExperienceOrbRequestQueueComponent;
struct StateVectorComponent;
struct SwellComponent;
struct SynchedActorDataComponent;
struct WingFlapDataComponent;
// clang-format on

namespace MobDeathUtility {
// functions
// NOLINTBEGIN
MCNAPI void clientMobTickDeath(::MobDeathWrapper& mobDeath, ::StrictEntityContext const& entity, ::AABBShapeComponent const& aabbShape, ::ActorDefinitionIdentifierComponent const& actorIdentifier, ::ActorUniqueIDComponent const& actorUniqueID, ::DimensionTypeComponent const& dimensionType, ::OffsetsComponent const& offsets, ::StateVectorComponent const& stateVector, ::ActorDataFlagComponent& actorFlags, ::ActorDataDirtyFlagsComponent& actorDirtyFlags, ::DeathTickingComponent& deathTicking, ::Optional<::PlayerComponent> player, ::OptionalComponentWrapper<::SoundEventRequestQueueComponent> soundEventRequestQueue);

MCNAPI void serverEnderDragonTickDeath(::EnderDragonDeathWrapper& dragonDeath, ::StrictEntityContext const& entity, ::ActorDataFlagComponent const& actorFlags, ::ActorDefinitionIdentifierComponent const& actorIdentifier, ::ActorUniqueIDComponent const& actorUniqueID, ::DeathTickingComponent const& deathTicking, ::DimensionTypeComponent const& dimensionType, ::StateVectorComponent& stateVector, ::WingFlapDataComponent& wingFlapData, ::SpawnExperienceOrbRequestQueueComponent& experienceOrbRequestQueue, ::Optional<::BossComponent> boss, ::OptionalComponentWrapper<::SoundEventRequestQueueComponent> soundEventRequestQueue);

MCNAPI void serverMobTickDeath(::MobDeathWrapper& mobDeath, ::StrictEntityContext const& entity, ::AABBShapeComponent const& aabbShape, ::ActorDefinitionIdentifierComponent const& actorIdentifier, ::ActorUniqueIDComponent const& actorUniqueID, ::DimensionTypeComponent const& dimensionType, ::OffsetsComponent const& offsets, ::StateVectorComponent const& stateVector, ::ActorDataFlagComponent& actorFlags, ::ActorDataDirtyFlagsComponent& actorDirtyFlags, ::DeathTickingComponent& deathTicking, ::SpawnExperienceOrbRequestQueueComponent& experienceOrbRequestQueue, ::Optional<::ExperienceRewardComponent> experienceReward, ::Optional<::PlayerComponent> player, ::OptionalComponentWrapper<::SoundEventRequestQueueComponent> soundEventRequestQueue);

MCNAPI void serverSpawnExperience(::MobDeathWrapper const& mobDeath, ::DimensionTypeComponent const& dimensionType, ::ExperienceRewardComponent const& experienceReward, ::StateVectorComponent const& stateVector, ::SpawnExperienceOrbRequestQueueComponent& experienceOrbRequestQueue, ::Optional<::PlayerComponent> player);

MCNAPI void serverTickWitherDie(::WitherBossDeathWrapper& witherWrapper, ::StrictEntityContext const& entity, ::DimensionTypeComponent const& dimensionType, ::StateVectorComponent const& stateVector, ::SpawnExperienceOrbRequestQueueComponent& experienceOrbRequestQueue, ::Optional<::ExperienceRewardComponent const> experienceReward, ::EntityModifier<::IsDeadFlagComponent>& modifier);

MCNAPI void tickDragonExplosionParticles(::StateVectorComponent const& stateVector, ::OptionalComponentWrapper<::RandomComponent> random, ::OptionalComponentWrapper<::ParticleEventRequestQueueComponent> particleRequestQueue);

MCNAPI void tickExplosionParticles(::DeathTickingComponent const& deathTicking, ::StateVectorComponent const& stateVector, ::OptionalComponentWrapper<::RandomComponent> random, ::OptionalComponentWrapper<::ParticleEventRequestQueueComponent> particleRequestQueue);

MCNAPI void toggleWitherAerialAttack(::DeathTickingComponent const& deathTicking, ::ShieldFlickerComponent& shieldFlicker, ::SynchedActorDataComponent& synchedActorData);

MCNAPI void updateWitherMolangRelatedData(::DeathTickingComponent const& deathTicking, ::OverlayAlphaComponent& overlayAlpha, ::SwellComponent& swell, ::SynchedActorDataComponent& synchedActorData);
// NOLINTEND

}
