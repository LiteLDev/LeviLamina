#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct ActorTickedComponent;
struct ParticleEventDispatcherComponent;
struct ParticleEventRequestQueueComponent;
struct RandomComponent;
struct RandomReferenceComponent;
struct StateVectorComponent;
struct SwimParticleComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace SwimParticleSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tickQueueSwimParticleSystem(
    ::entt::type_list<::Include<::ActorTickedComponent, ::WasInWaterFlagComponent>>,
    ::ActorDataFlagComponent const&                                             actorDataFlag,
    ::ActorRotationComponent const&                                             actorRotation,
    ::StateVectorComponent const&                                               stateVector,
    ::AABBShapeComponent const&                                                 aabbShape,
    ::SwimParticleComponent const&                                              swimParticle,
    ::RandomReferenceComponent const&                                           randomReference,
    ::ParticleEventDispatcherComponent const&                                   particleEventDispatcher,
    ::ViewT<::StrictEntityContext, ::RandomComponent> const&                    randomView,
    ::ViewT<::StrictEntityContext, ::ParticleEventRequestQueueComponent> const& particleEventRequestQueueView
);
// NOLINTEND

} // namespace SwimParticleSystemImpl
