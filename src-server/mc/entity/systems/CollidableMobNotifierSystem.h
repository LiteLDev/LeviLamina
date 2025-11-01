#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class LocalSpatialEntityFetcher;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorIsFirstTickFlagComponent;
struct ActorMovementTickNeededComponent;
struct ActorRemovedFlagComponent;
struct CollidableMobFlagComponent;
struct CollidableMobNearFlagComponent;
struct DimensionTypeComponent;
struct FallingBlockFlagComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MobFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

struct CollidableMobNotifierSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void tickNotifier(::StrictEntityContext const&, ::AABBShapeComponent const& aabbShapeComponent, ::DimensionTypeComponent const& dimensionComponent, ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::Exclude<::ActorIsFirstTickFlagComponent>> mobView, ::ViewT<::StrictEntityContext, ::Include<::FallingBlockFlagComponent>> fallingBlockView, ::EntityModifier<::CollidableMobNearFlagComponent> mod, ::LocalSpatialEntityFetcherFactoryComponent& spatialEntityFetcherFactory, ::LocalSpatialEntityFetcher& spatialEntityFetcher);

    MCNAPI static void tickSystem(::OptionalGlobal<::LocalSpatialEntityFetcherFactoryComponent> factory, ::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::CollidableMobFlagComponent>, ::Exclude<::ActorRemovedFlagComponent>, ::AABBShapeComponent const, ::DimensionTypeComponent const> view, ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::Exclude<::ActorIsFirstTickFlagComponent>> mobView, ::ViewT<::StrictEntityContext, ::Include<::FallingBlockFlagComponent>> fallingBlockView, ::EntityModifier<::CollidableMobNearFlagComponent> mod);
    // NOLINTEND

};
