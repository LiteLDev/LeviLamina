#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BuoyancyComponent;
class EntitySystems;
class IConstBlockSource;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct BaseGameVersionComponent;
struct BuoyancyFloatRequestComponent;
struct CanAlwaysAutoStepFlagComponent;
struct DimensionTypeComponent;
struct LocalConstBlockSourceFactoryComponent;
struct RandomComponent;
struct RandomReferenceComponent;
struct ShouldBeSimulatedComponent;
struct StateVectorComponent;
// clang-format on

namespace BuoyancySystem {
// functions
// NOLINTBEGIN
MCAPI void buoyancyFloatSystem(
    ::StrictEntityContext const&                        entity,
    ::BuoyancyComponent const&                          buoyancyComponent,
    ::BuoyancyFloatRequestComponent const&              floatRequestComponent,
    ::BaseGameVersion const&                            baseGameVersion,
    ::StateVectorComponent&                             stateVectorComponent,
    ::ActorDataFlagComponent&                           actorDataFlagComponent,
    ::EntityModifier<::CanAlwaysAutoStepFlagComponent>& mod
);

MCAPI void checkAndAddFloatRequest(
    ::StrictEntityContext const&                       entity,
    ::StateVectorComponent const&                      stateVectorComponent,
    ::BuoyancyComponent&                               buoyancyComponent,
    ::EntityModifier<::BuoyancyFloatRequestComponent>& mod,
    ::IConstBlockSource const&                         region
);

MCAPI void increaseBuoyancyTimerSystem(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::ShouldBeSimulatedComponent>>
                                      randomReferenceComponent,
    ::RandomReferenceComponent const& stateVectorComponent,
    ::StateVectorComponent const&     buoyancyComponent,
    ::BuoyancyComponent&              randomView,
    ::ViewT<::StrictEntityContext, ::RandomComponent> const&
);

MCAPI void registerSystems(::EntitySystems& systemRegistry);

MCAPI void tickBuoyancyFloatSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::BuoyancyComponent,
        ::BuoyancyFloatRequestComponent,
        ::StateVectorComponent,
        ::ActorDataFlagComponent>                      view,
    ::EntityModifier<::CanAlwaysAutoStepFlagComponent> mod,
    ::OptionalGlobal<::BaseGameVersionComponent const> baseGameVersion
);

MCAPI void tickCheckAndAddFloatRequestSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::ShouldBeSimulatedComponent>,
        ::StateVectorComponent const,
        ::BuoyancyComponent>                                        view,
    ::EntityModifier<::BuoyancyFloatRequestComponent>               mod,
    ::ViewT<::StrictEntityContext, ::DimensionTypeComponent const>  dimensionView,
    ::OptionalGlobal<::LocalConstBlockSourceFactoryComponent const> factoryComponent
);
// NOLINTEND

} // namespace BuoyancySystem
